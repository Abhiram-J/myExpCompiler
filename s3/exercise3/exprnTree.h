// #include<stdio.h>

#define noVal -1

#define noType -1
#define intType 0
#define boolType 2

#define numNode 0
#define idNode 1
#define readNode 2
#define writeNode 3
#define plusNode 4
#define minusNode 5
#define mulNode 6
#define divNode 7
#define assignNode 8
#define connectorNode 9
#define ltNode 10
#define gtNode 11
#define eqNode 12
#define neNode 13
#define leNode 14
#define geNode 15
#define ifNode 16
#define elseNode 17
#define whileNode 18
#define doWhileNode 19
#define breakNode 20
#define continueNode 21
#define repeatUntilNode 22

// for printHelperfunction
#define entryCode 0
#define exitCode 1
#define readCode 2
#define writeCode 3


typedef struct node {
    int val;        // value of a number for NUM nodes.
    int type;       // type of variable
    char* varname;  // name of a variable for ID nodes
    int nodetype;   // information about non-leaf nodes - read/write/connector/+/* etc. 
    struct node *left,*right;  // left and right branches
}node;


/*Create a node node*/
struct node* createTree(int val, int type, char* varname, int nodeType, struct node *l, struct node *r);
/*To evaluate an expression tree*/
int evaluate(struct node* root);
void preorder(struct node* root);
void inorder(struct node* root);
void printHelper(FILE* fp ,int printCode, int reg , int idPos);
int operatorCheck(int nodeType);


