// #include <stdio.h>
// #include "exprnTree.h"

int operatorCheck(int nodeType){
    return (nodeType == plusNode || nodeType == minusNode || nodeType == mulNode 
    || nodeType == divNode || nodeType == assignNode || nodeType == gtNode 
    || nodeType == ltNode || nodeType == geNode || nodeType == leNode 
    || nodeType == eqNode || nodeType == neNode);
}

struct node* createTree(int val, int type, char* varname, int nodeType, struct node *l, struct node *r){

    if ( operatorCheck(nodeType) && (l->type != intType || r->type != intType)){
        yyerror("Type mismatch");
    }

    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->val = val;
    temp->varname = varname;
    temp->type = type;
    temp->nodetype = nodeType;
    temp->left = l;
    temp->right = r;
    return temp;
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
        case gtNode:
            printf("> ");
            break;
        case ltNode:
            printf("< ");
            break;
        case geNode:
            printf(">= ");
            break;
        case leNode:
            printf("<= ");
            break;
        case eqNode:
            printf("== ");
            break;
        case neNode:
            printf("!= ");
            break;
        case ifNode:
            printf("if ");
            break;
        case elseNode:
            printf("else ");
            break;
        case whileNode:
            printf("while ");
            break;
        
        }

        inorder(root->right);
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

int evaluate(struct node *root){
    if (root == NULL)
        return -1;
    switch (root->nodetype){

    case numNode:
        return root->val;
    case idNode:
        return var[root->varname[0] - 'a'];
    case readNode:
        scanf("%d", &var[root->left->varname[0] - 'a']);
        break;
    case writeNode:
        printf("%d\n", evaluate(root->left));
        break;
    case plusNode:
        return evaluate(root->left) + evaluate(root->right);
    case minusNode:
        return evaluate(root->left) - evaluate(root->right);
    case mulNode:
        return evaluate(root->left) * evaluate(root->right);
    case divNode:
        return evaluate(root->left) / evaluate(root->right);
    case gtNode:
        return evaluate(root->left) > evaluate(root->right);
    case ltNode:
        return evaluate(root->left) < evaluate(root->right);
    case eqNode:
        return evaluate(root->left) == evaluate(root->right);
    case leNode:
        return evaluate(root->left) <= evaluate(root->right);
    case geNode:
        return evaluate(root->left) >= evaluate(root->right);
    case neNode:
        return evaluate(root->left) != evaluate(root->right);    
    case assignNode:
        var[root->left->varname[0] - 'a'] = evaluate(root->right);
        break;
    case ifNode:
        if (evaluate(root->left)){
            if ( root->right->nodetype == elseNode){
                evaluate(root->right->left);
            }else{
                evaluate(root->right);
            }
        }else{
            if ( root->right->nodetype == elseNode){
                evaluate(root->right->right);
            }
        }
        break;
    case whileNode:
        while (evaluate(root->left)){
            evaluate(root->right);
        }
        break;
    case connectorNode:
        evaluate(root->left);
        evaluate(root->right);
    }
    return 0;
}
