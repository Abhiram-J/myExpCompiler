#include<stdio.h>

#define noVal -1

#define noType -1
#define intType 0
#define boolType 1
#define strType 2

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
#define strNode 23
#define modNode 24
#define addressNode 25
#define pointerNode 26

// for printHelperfunction
#define entryCode 0
#define exitCode 1
#define readCode 2
#define writeCode 3


typedef struct treeNode {
    int val;        // value of a number for NUM nodes.
    int type;       // type of variable
    int nodetype;   // information about non-leaf nodes - read/write/connector/+/* etc. 
    char* varname;  // name of a variable for ID nodes
    struct symbolNode* symbolTableEntry;     // pointer to GST entry for global variables and functions
    struct treeNode *left,*right;  // left and right branches
}treeNode;



/*Create a treeNode treeNode*/
struct treeNode* createTree(int val, int type, char* varname, int nodeType, struct treeNode *l, struct treeNode *r);
/*To evaluate an expression tree*/
int evaluate(struct treeNode* root);
void preorder(struct treeNode* root);
void inorder(struct treeNode* root);
void printHelper(FILE* fp ,int printCode, int reg , int idPos);
int operatorCheck(int nodeType , int lType , int rType);



