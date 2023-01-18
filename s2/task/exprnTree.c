// #include <stdio.h>
// #include "exprnTree.h"

struct node *createTree(int val, int type, char *varname, int nodeType, struct node *l, struct node *r){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->val = val;
    temp->varname = varname;
    temp->type = type;
    temp->nodetype = nodeType;
    temp->left = l;
    temp->right = r;
    return temp;
}

void preorder(struct node *root){
    if (root != NULL){

        switch (root->nodetype){
        case numNode:
            printf("%d ", root->val);
            break;
        case idNode:
            printf("%c ", (root->varname)[0]);
            break;
        case readNode:
            printf("Read ");
            break;
        case writeNode:
            printf("Write ");
            break;
        case plusNode:
            printf("+ ");
            break;
        case minusNode:
            printf("- ");
            break;
        case mulNode:
            printf("* ");
            break;
        case divNode:
            printf("/ ");
            break;
        case assignNode:
            printf("= ");
            break;
        case connectorNode:
            printf(";\n");
            break;
        }

        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(struct node *root){

    if (root != NULL){

        inorder(root->left);

        switch (root->nodetype){
        case numNode:
            printf("%d ", root->val);
            break;
        case idNode:
            printf("%c ", (root->varname)[0]);
            break;
        case readNode:
            printf("Read ");
            break;
        case writeNode:
            printf("Write ");
            break;
        case plusNode:
            printf("+ ");
            break;
        case minusNode:
            printf("- ");
            break;
        case mulNode:
            printf("* ");
            break;
        case divNode:
            printf("/ ");
            break;
        case assignNode:
            printf("= ");
            break;
        case connectorNode:
            printf(";\n");
            break;
        }

        inorder(root->right);
    }
}

reg_index getReg(){
    if (regMax < 15){
        return (++regMax);
    }else{
        yyerror("Out of registers");
    }
    return -1;
}

void freeReg(){
    if (regMax >= 0){
        regMax--;
    }
}

reg_index codeGen(struct node *root, FILE *fp){
    int r1, r2, idPos;
    switch (root->nodetype){
    case numNode:
        r1 = getReg();
        fprintf(fp, "MOV R%d, %d\n", r1, root->val);
        return r1;
    case idNode:
        r1 = getReg();
        idPos = (root->varname[0] - 'a') + 4096;
        fprintf(fp, "MOV R%d, %d\n", r1, idPos);
        fprintf(fp, "MOV R%d, [R%d]\n", r1, r1);
        return r1;
    case readNode:
        r1 = getReg();
        r2 = getReg();
        idPos = (root->left->varname[0] - 'a') + 4096;
        fprintf(fp, "MOV R%d, %d\n", r2, idPos);
        printHelper(fp, readCode, r1, r2);
        freeReg();
        freeReg();
        return -1;
    case writeNode:
        if (root->left->nodetype == numNode){
            r1 = getReg();
            r2 = getReg();
            fprintf(fp, "MOV R%d, %d\n", r2, root->left->val);
            printHelper(fp, writeCode, r1, r2);
            freeReg();
        }else if (root->left->nodetype == idNode){
            r1 = getReg();
            r2 = getReg();
            idPos = (root->left->varname[0] - 'a') + 4096;
            fprintf(fp, "MOV R%d, %d\n", r2, idPos);
            fprintf(fp, "MOV R%d, [R%d]\n", r2, r2);
            printHelper(fp, writeCode, r1, r2);
            freeReg();
        }else{
            r1 = getReg();
            r2 = codeGen(root->left, fp);
            printHelper(fp, writeCode, r1, r2);
            freeReg();
        }
        return r1;

    case plusNode:
        r1 = codeGen(root->left, fp);
        r2 = codeGen(root->right, fp);
        fprintf(fp, "ADD R%d, R%d\n", r1, r2);
        freeReg();
        return r1;
    case minusNode:
        r1 = codeGen(root->left, fp);
        r2 = codeGen(root->right, fp);
        fprintf(fp, "SUB R%d, R%d\n", r1, r2);
        freeReg();
        return r1;
    case mulNode:
        r1 = codeGen(root->left, fp);
        r2 = codeGen(root->right, fp);
        fprintf(fp, "MUL R%d, R%d\n", r1, r2);
        freeReg();
        return r1;
    case divNode:
        r1 = codeGen(root->left, fp);
        r2 = codeGen(root->right, fp);
        fprintf(fp, "DIV R%d, R%d\n", r1, r2);
        freeReg();
        return r1;
    case assignNode:
        r1 = getReg();
        r2 = codeGen(root->right, fp);
        idPos = (root->left->varname[0] - 'a') + 4096;
        fprintf(fp, "MOV R%d, %d\n", r1, idPos);
        fprintf(fp, "MOV [R%d], R%d\n", r1, r2);
        freeReg();
        return r1;
    case connectorNode:
        r1 = codeGen(root->left, fp);
        r2 = codeGen(root->right, fp);
        freeReg();
        freeReg();
        return -1;
    }
}

void printHelper(FILE *fp, int printCode, int reg1, int reg2){

    switch (printCode){
    case entryCode:
        fprintf(fp, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", 0, 2056, 0, 0, 0, 0, 0, 0);
        fprintf(fp, "MOV SP, %d\n", 4096 + (int)('z' - 'a'));
        break;
    case exitCode:
        fprintf(fp, "MOV R0,\"Exit\"\n");
        fprintf(fp, "PUSH R0\n");
        fprintf(fp, "PUSH R0\n");
        fprintf(fp, "PUSH R0\n");
        fprintf(fp, "PUSH R0\n");
        fprintf(fp, "PUSH R0\n");
        fprintf(fp, "CALL 0");
        break;
    case readCode:
        fprintf(fp, "MOV R%d, \"Read\"\n", reg1);
        fprintf(fp, "PUSH R%d\n", reg1); // system call fn
        fprintf(fp, "MOV R%d, -1\n", reg1);
        fprintf(fp, "PUSH R%d\n", reg1); // arg1
        fprintf(fp, "MOV R%d, R%d\n", reg1, reg2);
        fprintf(fp, "PUSH R%d\n", reg1); // arg2
        fprintf(fp, "PUSH R%d\n", reg1); // arg3
        fprintf(fp, "PUSH R%d\n", reg1);
        fprintf(fp, "CALL 0\n");
        fprintf(fp, "POP R%d\n", reg1);
        fprintf(fp, "POP R%d\n", reg1);
        fprintf(fp, "POP R%d\n", reg1);
        fprintf(fp, "POP R%d\n", reg1);
        fprintf(fp, "POP R%d\n", reg1);
        break;
    case writeCode:
        fprintf(fp, "MOV R%d, \"Write\"\n", reg1);
        fprintf(fp, "PUSH R%d\n", reg1);
        fprintf(fp, "MOV R%d, -2\n", reg1);
        fprintf(fp, "PUSH R%d\n", reg1);
        fprintf(fp, "MOV R%d, R%d\n", reg1, reg2);
        fprintf(fp, "PUSH R%d\n", reg1);
        fprintf(fp, "PUSH R%d\n", reg1);
        fprintf(fp, "PUSH R%d\n", reg1);
        fprintf(fp, "CALL 0\n");
        fprintf(fp, "POP R%d\n", reg1);
        fprintf(fp, "POP R%d\n", reg1);
        fprintf(fp, "POP R%d\n", reg1);
        fprintf(fp, "POP R%d\n", reg1);
        fprintf(fp, "POP R%d\n", reg1);
        break;
    }
}
