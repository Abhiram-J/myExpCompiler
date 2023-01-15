typedef struct node{
 int val; //value of the expression tree
 char *op; //indicates the opertor
 struct node *left,*right; //left and right branches
 } node;

/*Make a leaf node and set the value of val field*/
struct node* makeLeafNode(int n);

/*Make a node with opertor, left and right branches set*/
struct node* makeOperatorNode(char c,struct node *l,struct node *r);

/*To evaluate an expression tree*/
int evaluate(struct node *t);