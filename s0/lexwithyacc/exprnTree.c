#include <stdio.h>
#include "exprnTree.h"

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

int evaluate(struct node *t){
    if(t->op == NULL)
    {
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