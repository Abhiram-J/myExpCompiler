typedef struct symbolNode {
    char* name;        // name of the variable
    int type;         // type of the variable
    int size;         // size of the type of the variable
    int binding;      // stores the static memory address allocated to the variable
    int length;       // stores the length of the array
    struct symbolNode* next;
}symbolNode;


typedef struct symbolTable {
    struct symbolNode *head;

}symbolTable;


struct symbolNode* Lookup(struct symbolTable* gst, char * name);            // Returns a pointer to the symbol table entry for the variable, returns NULL otherwise.
struct symbolNode* createSymbolNode(char* name, int type, int size , int length); // Creates a symbol table entry for the variable and returns a pointer to the entry.
void joinNode ( struct symbolNode* head , struct symbolNode* node);        // Joins the symbol table entry to the symbol table.
void printSymbolTable(struct symbolTable* gst);                            // Prints the symbol table.
void assignBinding(struct symbolTable* gst);                               // Assigns static memory addresses to the variables.
void findType(struct symbolTable* gst, struct treeNode* root);             // Finds the type of the variable and stores it in the symbol table entry.

int currBinding = 4096;
