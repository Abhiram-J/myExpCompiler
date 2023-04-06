// #include<stdio.h>
// #include "typeTable.h"

struct typeNode *createTypeNode(char *name, struct fieldNode *fieldList)
{
    struct typeNode *typeNode = (struct typeNode *)malloc(sizeof(struct typeNode));
    typeNode->name = name;
    typeNode->fieldList = fieldList;
    typeNode->next = NULL;
    int size = 0;
    struct fieldNode *temp = fieldList;
    while (temp != NULL)
    {
        temp->fieldIndex = size++;
        temp = temp->next;
    }
    typeNode->size = size;
    return typeNode;
}

void joinTypeNode(struct typeNode *head, struct typeNode *node)
{
    struct typeNode *temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = node;
}

struct fieldNode *createFieldNode(int type, char *idName, char *typeName)
{
    struct fieldNode *fieldNode = (struct fieldNode *)malloc(sizeof(struct fieldNode));
    fieldNode->type = type;
    fieldNode->name = idName;
    fieldNode->typeName = typeName;
    fieldNode->next = NULL;
    fieldNode->typeNode = NULL;
    fieldNode->fieldIndex = -1;
    return fieldNode;
}

void joinFieldNode(struct fieldNode *head, struct fieldNode *node)
{
    struct fieldNode *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = node;
}

void printTypeTable(struct typeTable *tt)
{
    struct typeNode *temp = tt->head;
    while (temp != NULL)
    {
        printf("\nType Name: %s \t", temp->name);
        printf("Type Size: %d \n", temp->size);
        struct fieldNode *fieldTemp = temp->fieldList;
        while (fieldTemp != NULL)
        {
            printf("Field Name: %s \t", fieldTemp->name);
            printf("Field Type: %d \t", fieldTemp->type);
            printf("Field Type Name: %s \t", fieldTemp->typeName);
            printf("Field Index: %d \n", fieldTemp->fieldIndex);
            fieldTemp = fieldTemp->next;
        }
        printf(" \n");
        temp = temp->next;
    }
}

struct typeNode *getTypeNode(struct typeTable *tt, char *name)
{
    struct typeNode *temp = tt->head;
    while (temp != NULL){
        if (strcmp(temp->name, name) == 0){
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}


int checkIfValidType(struct typeTable *tt, struct fieldNode *fieldList, char *typeName){
    struct fieldNode *fNode = fieldList;

    while (fNode != NULL){
        if (fNode->type == noType){
            if (strcmp(fNode->typeName, typeName) != 0){
                struct typeNode *tNode = tt->head;
                while (tNode != NULL){
                    if (strcmp(tNode->name, fNode->typeName) == 0){
                        break;
                    }
                    tNode = tNode->next;
                }
                if (tNode == NULL && tt->head != NULL){
                    return 1;
                }
            }
        }
        fNode = fNode->next;
    }
    return 0;
}


int checkDuplicateType(struct typeTable *tt)
{
    struct typeNode *tNode1 = tt->head;
    while (tNode1 != NULL){
        struct typeNode *tNode2 = tNode1->next;
        while (tNode1 != NULL && tNode2 != NULL){
            if (strcmp(tNode1->name, tNode2->name) == 0){
                return 1;
            }
            tNode2 = tNode2->next;
        }
        tNode1 = tNode1->next;
    }
    return 0;
}

struct typeNode *getTypeNodeFromlst(struct localSymbolTable *lst, char *name)
{
    struct localSymbolNode *temp = lst->head;

    while (temp != NULL)
    {
        if (strcmp(temp->name, name) == 0)
        {
            // if ( temp -> tNode == NULL) printf("hi");
            return temp->tNode;
        }
        temp = temp->next;
    }

    return NULL;
}

struct typeNode *getTypeNodeFromgst(struct globalSymbolTable *gst, char *name)
{
    struct globalSymbolNode *temp = gst->head;
    while (temp != NULL){
        if (strcmp(temp->name, name) == 0){
           return temp->tNode;
        }
        temp = temp->next;
    }
    return NULL;
}

void findTypeofTypeNode(struct typeTable *tt, struct globalSymbolTable *gst, struct localSymbolTable *lst, struct treeNode *root)
{
    if (root->type == noType){
        
        struct typeNode *temp = getTypeNodeFromlst(lst, root->varname);
        if (temp == NULL){
            temp = getTypeNodeFromgst(gst, root->varname);
        }
        if (temp == NULL){
            printf("%s", root->varname);
            yyerror("Type not defined");
        }
        root->tNode = temp;
        root->type = findTypeRec(tt, temp->name, root->left);
    }
    else
    {
        yyerror("Type already defined");
    }
}

int findTypeRec(struct typeTable *tt, char *typeName, struct treeNode *root)
{
    struct typeNode *temp = getTypeNode(tt, typeName);
    if (temp == NULL){
        yyerror("Type not defined");
    }
    if (root == NULL)yyerror("not here");

    struct fieldNode *temp1 = temp->fieldList;
    while (temp1 != NULL){
        if (strcmp(temp1->name, root->varname) == 0){
            if (temp1->type == -1 && root->left != NULL){
                root->tNode = getTypeNode(tt, temp1->typeName);
                root->type = findTypeRec(tt, temp1->typeName, root->left);
                return root->type;
            }else{
                root->type = temp1->type;
                return temp1->type;
            }
        }
        temp1 = temp1->next;
    }
    yyerror("Field not defined");
}

struct localSymbolNode *getLocalSymbolNodeFromlst(struct localSymbolTable *lst, char *name)
{
    struct localSymbolNode *temp = lst->head;
    while (temp != NULL){
        if (strcmp(temp->name, name) == 0){
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

struct globalSymbolNode *getGlobalSymbolNodeFromgst(struct globalSymbolTable *gst, char *name){
    struct globalSymbolNode *temp = gst->head;
    while (temp != NULL){
        if (strcmp(temp->name, name) == 0){
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

void assignlocalSymbolTableEntry(struct globalSymbolTable *gst, struct localSymbolTable *lst, struct treeNode *root){
    struct treeNode *temp = root;
    if (temp == NULL){
        printf("NULL\n");
    }
    while (temp->left != NULL){
        temp->localSymbolTableEntry = getLocalSymbolNodeFromlst(lst, temp->varname);
        temp->globalSymbolTableEntry = getGlobalSymbolNodeFromgst(gst, temp->varname);
        temp = temp->left;
    }
}

void assignTypeNodetoLST(struct localSymbolTable *lst, struct typeTable *tt)
{

    struct localSymbolNode *temp = lst->head;
    while (temp != NULL){
        if (temp->typeName != NULL){
            temp->tNode = getTypeNode(tt, temp->typeName);
        }else{
            temp->tNode = NULL;
        }   
        temp = temp->next;
    }
}