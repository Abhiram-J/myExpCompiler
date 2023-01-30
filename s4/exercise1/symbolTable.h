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
void Install(struct symbolTable* gst, char *name, int type, int size);   // Creates a symbol table entry.

int currBinding = 4096;


