// #include "SymbolTable.h"

struct symbolNode* Lookup(struct symbolTable* gst, char * name){
    struct symbolNode* temp = gst -> head;
    while(temp != NULL){
        if(strcmp(temp -> name,name) == 0){
            return temp;
        }
        temp = temp -> next;
    }
    return NULL;
}

struct symbolNode* createSymbolNode(char* name, int type, int size){
    struct symbolNode* node = (struct symbolNode*)malloc(sizeof(struct symbolNode));
    node -> name = name;
    node -> type = type;    
    node -> size = size;
    node -> binding = -1;
    node -> next = NULL;
    return node;
}

void JoinNode ( struct symbolNode* head , struct symbolNode* node){
    struct symbolNode* temp = head;
    if(temp == NULL){
        head = node;
        return;
    }
    while(temp -> next != NULL){
        temp = temp -> next;
    }	
    temp -> next = node;
}

void printSymbolTable(struct symbolTable* gst){
    struct symbolNode* temp = gst -> head;
    while(temp != NULL){
        printf("%s\t%d\t%d\t%d\n",temp -> name,temp -> type,temp -> size,temp -> binding);
        temp = temp -> next;
    }
}

void assignBinding(struct symbolTable* gst){
    struct symbolNode* temp = gst -> head;
    while(temp != NULL){
        temp -> binding = currBinding;
        currBinding += temp -> size;
        temp = temp -> next;
    }
}

void findType(struct symbolTable* gst, struct treeNode* root){
    if(root == NULL){
        return;
    }
    struct symbolNode* node = Lookup(gst,root -> varname);
    if(node != NULL){
        // printf("%d %d",node -> type,root -> type);
        root->symbolTableEntry = node;
        // printf("%d",root->symbolTableEntry->binding);
        root -> type = node -> type;
    }else{
        yyerror("Variable not declared");
    }
}