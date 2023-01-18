#include <stdio.h>
// #include "exprnTree.h"

struct node* makeLeafNode(int n)
{
    struct node* temp = (struct node*) malloc(sizeof(struct node));
    temp->op = NULL;
    temp->val = n;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct node* makeOperatorNode(char c,struct node *l,struct node *r){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->op = malloc(sizeof(char));
    *(temp->op) = c;
    temp->left = l;
    temp->right = r;
    return temp;
}

void preorder(struct node* root) {
    if (root != NULL) {
        if (root->op != NULL){
            printf("%s ", root->op);
        }else{
            printf("%d ", root->val);
        }
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node* root){
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        if (root->op != NULL){
            printf("%s ", root->op);
        }else{
            printf("%d ", root->val);
        }
    }
}

int evaluate(struct node *root){
    if(root->op == NULL){
        return root->val;
    }
    else{
        switch(*(root->op)){
            case '+' : return evaluate(root->left) + evaluate(root->right);
                       break;
            case '-' : return evaluate(root->left) - evaluate(root->right);
                       break;
            case '*' : return evaluate(root->left) * evaluate(root->right);
                       break;
            case '/' : return evaluate(root->left) / evaluate(root->right);
                       break;
        }
    }

}


reg_index getReg(){
    if ( regMax < 15) {
        return (++regMax);
    }else{
        // yyerror("Out of registers");
        printf("Out of registers");

    }   
    exit(1);
}


void freeReg(){
    if (regMax >= 0) {
        regMax--;
    }
}

reg_index codeGen(struct node* root, FILE* fp){
    int r1,r2;
    if(root->op == NULL){
        r1 = getReg();
        fprintf(fp,"MOV R%d, %d\n", r1, root->val);
        return r1;
    }
    else{
        r1 = codeGen(root->left,fp);
        r2 = codeGen(root->right,fp);
        char c = *(root->op);
        switch(c){
            case '+' : fprintf(fp,"ADD R%d, R%d\n", r1, r2);
                       break;
            case '-' : fprintf(fp,"SUB R%d, R%d\n", r1, r2);
                       break;
            case '*' : fprintf(fp,"MUL R%d, R%d\n", r1, r2);
                       break;
            case '/' : fprintf(fp,"DIV R%d, R%d\n", r1, r2);
                       break;
        }
        freeReg();
        return r1;
    }
}

void printAndExit( FILE* fp ) {

				fprintf(fp,"MOV R0,\"Write\"\n");
				fprintf(fp,"PUSH R0\n");
				fprintf(fp,"MOV R0,-2\n");
				fprintf(fp,"PUSH R0\n");
				fprintf(fp,"MOV R0, [4096]\n");
				fprintf(fp,"PUSH R0\n");
				fprintf(fp,"PUSH R0\n");
				fprintf(fp,"PUSH R0\n");
				fprintf(fp,"CALL 0\n");
				fprintf(fp,"POP R0\n");
				fprintf(fp,"POP R1\n");
				fprintf(fp,"POP R1\n");
				fprintf(fp,"POP R1\n");
				fprintf(fp,"POP R1\n");
				fprintf(fp,"MOV R0,\"Exit\"\n");
				fprintf(fp,"PUSH R0\n");
				fprintf(fp,"PUSH R0\n");
				fprintf(fp,"PUSH R0\n");
				fprintf(fp,"PUSH R0\n");
				fprintf(fp,"PUSH R0\n");
				fprintf(fp,"CALL 0");

}
