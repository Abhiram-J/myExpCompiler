typedef struct classNode{
    char *name;                           //name of the class
    struct fieldNode *fieldList;        //pointer to Fieldlist
    struct memberFuncNode *funcList;      //pointer to Memberfunclist
    struct classNode *parentClassNode;         //pointer to the parent's class table
    int classIndex;                      //position of the class in the virtual function table
    int fieldCount;                       //count of fields
    int methodCount;                      //count of methods
    struct classNode *next;              //pointer to next class table entry
}classNode;

typedef struct classTable{
    struct classNode* head;
}classTable;

typedef struct memberFuncNode {
    char *name;                      //name of the member function in the class
    int type;                        //type of the member function
    char *typeName;                  //name of the type of the member function for user defined types
    struct typeTable *tNode;          //pointer to typetable
    struct paramNode *paramList;   //pointer to the head of the formal parameter list
    int methodIndex;                //position of the function in the class table
    int fLabel;                      //A label for identifying the starting address of the function's code in the memory
    struct memberFuncNode *next;     //pointer to next Memberfunclist entry
}memberFuncNode;

typedef struct typeNode{
    char *name;                 //type name
    int size;                   //size of the type
    struct fieldNode *fieldList;   //pointer to the head of fields list
    struct typeNode *next;     // pointer to the next type table entry
}typeNode;

typedef struct fieldNode{
  char* name;              //name of the field
  int type;                //type of the field
  char* typeName;          //name of the type of the field for user defined types
  int fieldIndex;          //the position of the field in the field list
  struct typeNode *typeNode;  //pointer to type table entry of the field's type
  struct classNode *cNode; //pointer to class table entry of the field's type
  struct fieldNode *next;  //pointer to the next field
}fieldNode;

typedef struct typeTable{
    struct typeNode *head;
}typeTable;

typedef struct paramNode
{
    char *name;             // name of the variable   
    int type;               // type of the variable:(Integer / String)   
    char* typeName;         // name of the type of the variable for user defined types
    struct paramNode *next; // points to the next formal parameter
} paramNode;

typedef struct globalSymbolNode
{
    char *name;                  // name of the variable
    int type;                    // type of the variable
    int size;                    // size of the type of the variable
    int binding;                 // stores the static memory address allocated to the variable
    int fLabel;                  // a label for identifying the starting address of a function's code
    char* typeName;              // name of the type of the variable for user defined types
    struct paramNode *paramList; // pointer to the head of the formal parameter list
    struct globalSymbolNode *next;
    struct typeNode *tNode;         // pointer to the type table of the function
    struct classNode *cNode;

} globalSymbolNode;

typedef struct globalSymbolTable
{
    struct globalSymbolNode *head;

} globalSymbolTable;

typedef struct localSymbolNode
{
    char *name;                   // name of the variable   
    int type;                     // type of the variable:(Integer / String)   
    int binding;                  // local binding of the variable   
    int size;                     // size of the type of the variable
    char* typeName;               // name of the type of the variable for user defined types
    struct localSymbolNode *next; // points to the next Local Symbol Table entry
    struct typeNode *tNode;       // pointer to the type table of the function

} localSymbolNode;

typedef struct localSymbolTable
{
    struct localSymbolNode *head;
} localSymbolTable;

struct argNode
{
    struct treeNode *arg;
    struct argNode *next;
};



struct globalSymbolNode *globalLookup(struct globalSymbolTable *gst, char *name);   
struct localSymbolNode *localLookup( struct localSymbolTable *lst, char *name);  
struct typeNode *getTypeNode(struct typeTable *tt, char *name);                    
struct globalSymbolNode *createSymbolNode(char *name, int type, int size, int length);             // Creates a symbol table entry for the variable and returns a pointer to the entry.
void joinGlobalSymbolNode(struct globalSymbolNode *head, struct globalSymbolNode *node);           // Joins the symbol table entry to the symbol table.
void printGlobalSymbolTable(struct globalSymbolTable *gst);                                              // Prints the symbol table.
void assignBinding(struct globalSymbolTable *gst);                                                 // Assigns static memory addresses to the variables.
void findType(struct globalSymbolTable *gst, struct localSymbolTable *lst, struct treeNode *root); // Finds the type of the variable and stores it in the symbol table entry.
void assignLSTtoFunction(struct globalSymbolTable *gst, char *name, struct localSymbolTable *lst); // Assigns the local symbol table to the function in the global symbol table.

int globalMemLoc = 4099;
int argPushed = 0;
