// #include "symbolTable.h"

void printClassTable(struct classTable *ct)
{
    struct classNode *temp = ct->head;
    while (temp != NULL){
        printf("Class Name: %s \t", temp->name);
        temp = temp->next;
    }
}

void printClassNode ( struct classNode* CNode){
    printf("Class Name: %s \n\n", CNode->name);
    // printf("Class Size: %d \t", CNode->size);
    printf("Class Field List: \n");
    printFieldList(CNode->fieldList);newl;
    printf("Class Function List: \n");
    printMemberFuncList(CNode->funcList);
}

int checkDuplicateClassorType(struct classTable *ct, struct typeTable *tt)
{
    for (   struct classNode *CNode = ct->head; CNode != NULL; CNode = CNode->next){
        for (struct typeNode* TNode = tt->head ; TNode != NULL; TNode = TNode->next){
            if (strcmp(CNode->name, TNode->name) == 0){
                return 1;
            }
        }
    }
    return 0;
}

void joinClassNode(struct classNode* CNode1, struct classNode* CNode2){
    struct classNode* temp = CNode1;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = CNode2;
}

struct classNode* createClassNode(char *name, struct fieldNode *FNode, struct memberFuncNode *MNode){
    struct classNode* CNode = (struct classNode*)malloc(sizeof(struct classNode));
    CNode->name = name;
    CNode->fieldList = FNode;
    CNode->funcList = MNode;
    CNode->parentClassNode = NULL;
    CNode->next = NULL;

    int size = 0;
    struct fieldNode *fNode = FNode;
    while (fNode != NULL)
    {
        fNode->fieldIndex = size++;
        fNode = fNode->next;
    }
    CNode->fieldCount = size;



    size = 0;
    struct memberFuncNode *mNode = MNode;
    while (mNode != NULL)
    {
        mNode-> methodIndex = size++;
        mNode = mNode->next;
    }
    CNode->methodCount = size;

    // check duplicates

    for (struct fieldNode *fNode1 = FNode; fNode1 != NULL; fNode1 = fNode1->next){
        for (struct fieldNode *fNode2 = fNode1->next; fNode2 != NULL; fNode2 = fNode2->next){
            if (strcmp(fNode1->name, fNode2->name) == 0){
                yyerror("field field error");
            }
        }
    }

    for (struct memberFuncNode *mNode1 = MNode; mNode1 != NULL; mNode1 = mNode1->next){
        for (struct memberFuncNode *mNode2 = mNode1->next; mNode2 != NULL; mNode2 = mNode2->next){
            if (strcmp(mNode1->name, mNode2->name) == 0){
                yyerror("method method error");
            }
        }
    }

    for (  struct fieldNode *fNode = FNode; fNode != NULL; fNode = fNode->next){
        for (struct memberFuncNode *mNode = MNode; mNode != NULL; mNode = mNode->next){
            if (strcmp(fNode->name, mNode->name) == 0){
                yyerror("field method error");
            }
        }
    }

    
    return CNode;
}

struct memberFuncNode* createMemberFuncNode(int type, char *name, struct paramNode *PNode, char* typeName){
    struct memberFuncNode* MNode = (struct memberFuncNode*)malloc(sizeof(struct memberFuncNode));
    MNode->type = type;
    MNode->name = name;
    MNode->paramList = PNode;
    MNode->typeName = typeName;
    MNode->next = NULL;
    return MNode;
}

void addClassNode(struct classTable *ct, struct classNode *CNode){
    if (ct->head == NULL){
        ct->head = CNode;
        return;
    }
    struct classNode* temp = ct->head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = CNode;
}

struct classNode* getClassNode(struct classTable *ct, char *name){
    if (ct == NULL){
        return NULL;
    }
    struct classNode* temp = ct->head;
    while (temp != NULL){
        if (strcmp(temp->name, name) == 0){
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

int checkFuncDeclarationFromCT ( struct memberFuncNode* funcList, char* funcName, struct paramNode* paramList, int type, char* tName){
    struct memberFuncNode* temp = funcList;
    argPushed = 0;
    while (temp != NULL){
        if (strcmp(temp->name, funcName) == 0){
            if (temp->type != type){
                return 1;
            }
            if (type == noType && strcmp(temp->typeName, tName) != 0){
                return 1;
            }
            struct paramNode *temp1 = temp->paramList;
            struct paramNode *temp2 = paramList;
            while (temp1 != NULL && temp2 != NULL){
                if (temp1->type != temp2->type || strcmp(temp1->name, temp2->name) != 0){
                    return 1;
                }
                argPushed++;
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            if (temp1 != NULL || temp2 != NULL){
                return 1;
            }
            return 0;
        }
        temp = temp->next;
    }
    return 1;
}

int getFuncLabelforMemberFunc(struct memberFuncNode* funcList, char* funcName){
    struct memberFuncNode* temp = funcList;

    while (temp != NULL){
        if (strcmp(temp->name, funcName) == 0){
            return temp->fLabel;
        }
        temp = temp->next;
    }
    return -1;
}

void joinMemberFuncNode(struct memberFuncNode* MNode1, struct memberFuncNode* MNode2){
    struct memberFuncNode* temp = MNode1;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = MNode2;
}

void printFieldList (struct fieldNode* fNode){
    struct fieldNode* temp = fNode;
    while (temp != NULL){
        printf("Field Name: %s \n", temp->name);
        temp = temp->next;
    }
}

void printMemberFuncList (struct memberFuncNode* mNode){
    struct memberFuncNode* temp = mNode;
    while (temp != NULL){
        printf("Member Function Name: %s\n", temp->name);
        temp = temp->next;
    }
}

struct fieldNode* getFieldNode(struct classTable* ct, char* className, char* fieldName){
    struct classNode* CNode = getClassNode(ct, className);
    struct fieldNode* temp = CNode->fieldList;
    while (temp != NULL){
        if (strcmp(temp->name, fieldName) == 0){
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

char* checkArgListforFieldFunc(struct argNode* argList, char* funcName, struct classTable* ct, char* className,char* currentClassName){
    struct classNode* CNode = getClassNode(ct, className);
    if (CNode == NULL){
        struct fieldNode* FNode = getFieldNode(ct, currentClassName, className); // className is an object of class
        if(FNode == NULL){ // className is a global variable
            // exit(0);
            struct globalSymbolNode* gNode = globalLookup(gst, className);
            className = gNode->typeName;
        }else{
        className = FNode->typeName;
        }
        CNode = getClassNode(ct, className);
    }
    struct memberFuncNode* funcList = CNode->funcList;
    struct argNode* temp = argList;
    while ( funcList != NULL){
        if (strcmp(funcList->name, funcName) == 0){
            struct paramNode* paramList = funcList->paramList;
            while (temp != NULL && paramList != NULL){
                if (temp->arg->type != paramList->type){
                    return NULL;
                }
                temp = temp->next;
                paramList = paramList->next;
            }
            if (temp != NULL || paramList != NULL){
                return NULL;
            }
            return className;
        }
        funcList = funcList->next;
    }
    return NULL;
}

int getFuncLabelfromct(struct classTable* ct, char* className, char* funcName){
    struct classNode* CNode = getClassNode(ct, className);
    struct memberFuncNode* funcList = CNode->funcList;
    struct memberFuncNode* temp = funcList;
    while (temp != NULL){
        if (strcmp(temp->name, funcName) == 0){
            return temp->fLabel;
        }
        temp = temp->next;
    }
    return -1;
}


struct classNode* getClassNodefromgst(struct classTable* ct, char* name){
    struct classNode* temp = ct->head;
    while (temp != NULL){
        if (strcmp(temp->name, name) == 0){
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

int findTypeRec(char *typeName, struct treeNode *root)
{
    struct classNode* cNode = getClassNode(ct, typeName);

    if ( cNode != NULL){
        struct fieldNode* temp = cNode->fieldList;
        while (temp != NULL){           // checking for field match in class
            if (strcmp(temp->name, root->varname) == 0){
                if (root->left != NULL){
                    root->cNode = getClassNode(ct,temp->typeName);
                    if ( root -> cNode != NULL) root->nodetype = clasNode; 
                    root->tNode = getTypeNode(tt,temp->typeName);
                    if ( root -> tNode != NULL) root->nodetype = tipeNode;
                    if ( root -> tNode == NULL && root -> cNode == NULL) yyerror("no tipe or clas node found");
                    root->type = findTypeRec(temp->typeName, root->left);
                    return root->type;
                }else{
                    root->type = temp->type;
                    return temp->type;
                }
            }
            temp = temp->next;
        }

        struct memberFuncNode* temp1 = cNode->funcList;  // checking for func match in class

        while (temp1 != NULL){      
            if (strcmp(temp1->name, root->varname) == 0){
                if (root->left != NULL){
                    root->cNode = cNode;
                    root->type = findTypeRec(temp->typeName, root->left);
                    return root->type;
                }else{
                    root->type = temp1->type;
                    return temp1->type;
                }
            }
            temp1 = temp1->next;
        }
        yyerror("Field not defined1");
    }   

    struct typeNode *tNode = getTypeNode(tt, typeName);
    
    if ( tNode != NULL){
        struct fieldNode* temp = tNode->fieldList;
        while (temp != NULL){
            if (strcmp(temp->name, root->varname) == 0){
                if (root->left != NULL){
                    root->tNode = tNode;
                    root->nodetype = tipeNode;
                    root->type = findTypeRec(temp->typeName, root->left);
                    return root->type;
                }else{
                    root->type = temp->type;
                    return temp->type;
                }
            }
            temp = temp->next;
        }
        yyerror("Field not defined2");
    }
    yyerror("error in findTypeRec");

}

void assignDetailsToFieldNode(struct treeNode* root){

    if ( root->nodetype == selfNode ){
        struct classNode* cNode = getClassNode(ct, root->varname);
        root->cNode = cNode;
        root->type = findTypeRec(cNode->name, root->left);
        return;
    }
    struct globalSymbolNode* gNode = globalLookup(gst, root->varname); // if global
    // printf(" %s ", root->varname);
    if ( gNode != NULL){

        struct classNode* cNode = getClassNode(ct,gNode->typeName); // if global but class
        root->globalSymbolTableEntry = gNode;

        if ( cNode != NULL){
            root->cNode = cNode;
            root->nodetype = clasNode;
            root->type = findTypeRec(cNode->name, root->left);
            return;

        }

        struct typeNode* tNode = getTypeNode(tt, gNode->typeName);      // if global but type
        if ( tNode != NULL){
            root->tNode = tNode;
            root->nodetype = tipeNode;
            root->type = findTypeRec( tNode->name, root->left);
            return;

        }
    }


    struct localSymbolNode* lNode = localLookup(lst, root->varname); // if local

    if ( lNode !=NULL){
        struct typeNode* tNode = getTypeNode(tt, lNode->typeName);      // if local but type
        root->localSymbolTableEntry = lNode;

        if ( tNode != NULL){
            root->tNode = tNode;
            root->nodetype = tipeNode;
            root->type = findTypeRec(tNode->name, root->left);
        return;

        }

    }
   
    yyerror("not expected here");

}