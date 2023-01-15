// #include <stdio.h>
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

void infixtoprefix(struct node* root) {
    if (root != NULL) {
        if (root->op != NULL){
            printf("%s ", root->op);
        }else{
            printf("%d ", root->val);
        }
        infixtoprefix(root->left);
        infixtoprefix(root->right);
    }
}

void infixtopostfix(struct node* root){
    if (root != NULL) {
        infixtopostfix(root->left);
        infixtopostfix(root->right);
        if (root->op != NULL){
            printf("%s ", root->op);
        }else{
            printf("%d ", root->val);
        }
    }
}

int evaluate(struct node *t){
    if(t->op == NULL){
        return t->val;
    }
    else{
        switch(*(t->op)){
            case '+' : return evaluate(t->left) + evaluate(t->right);
                       break;
            case '-' : return evaluate(t->left) - evaluate(t->right);
                       break;
            case '*' : return evaluate(t->left) * evaluate(t->right);
                       break;
            case '/' : return evaluate(t->left) / evaluate(t->right);
                       break;
        }
    }

}