
typedef struct paramNode
{
    char *name;             // name of the variable   
    int type;               // type of the variable:(Integer / String)   
    struct paramNode *next; // points to the next formal parameter
} paramNode;

typedef struct globalSymbolNode
{
    char *name;                  // name of the variable
    int type;                    // type of the variable
    int size;                    // size of the type of the variable
    int binding;                 // stores the static memory address allocated to the variable
    int fLabel;                  // a label for identifying the starting address of a function's code
    struct paramNode *paramList; // pointer to the head of the formal parameter list
    struct globalSymbolNode *next;
    struct localSymbolTable *lst; // pointer to the local symbol table of the function
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
    struct localSymbolNode *next; // points to the next Local Symbol Table entry

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

struct globalSymbolNode *Lookup(struct globalSymbolTable *gst, char *name);                        // Returns a pointer to the symbol table entry for the variable, returns NULL otherwise.
struct globalSymbolNode *createSymbolNode(char *name, int type, int size, int length);             // Creates a symbol table entry for the variable and returns a pointer to the entry.
void joinGlobalSymbolNode(struct globalSymbolNode *head, struct globalSymbolNode *node);           // Joins the symbol table entry to the symbol table.
void printSymbolTable(struct globalSymbolTable *gst);                                              // Prints the symbol table.
void assignBinding(struct globalSymbolTable *gst);                                                 // Assigns static memory addresses to the variables.
void findType(struct globalSymbolTable *gst, struct localSymbolTable *lst, struct treeNode *root); // Finds the type of the variable and stores it in the symbol table entry.
void assignLSTtoFunction(struct globalSymbolTable *gst, char *name, struct localSymbolTable *lst); // Assigns the local symbol table to the function in the global symbol table.

int globalMemLoc = 4096;
