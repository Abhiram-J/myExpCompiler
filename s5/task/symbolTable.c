// #include "globalSymbolTable.h"

struct globalSymbolNode *Lookup(struct globalSymbolTable *gst, char *name)
{
    struct globalSymbolNode *temp = gst->head;
    while (temp != NULL)
    {
        if (strcmp(temp->name, name) == 0)
        {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

struct globalSymbolNode *createGlobalSymbolNode(char *name, int type, int size)
{
    struct globalSymbolNode *node = (struct globalSymbolNode *)malloc(sizeof(struct globalSymbolNode));
    node->name = name;
    node->type = type;
    node->size = size;
    node->binding = -1;
    node->paramList = NULL;
    node->fLabel = -1;
    node->next = NULL;
    return node;
}

void joinGlobalSymbolNode(struct globalSymbolNode *head, struct globalSymbolNode *node)
{
    struct globalSymbolNode *temp = head;
    if (temp == NULL)
    {
        head = node;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = node;
}

void printSymbolTable(struct globalSymbolTable *gst)
{
    if (gst == NULL)
    {
        printf("Symbol Table is empty");
        return;
    }
    struct globalSymbolNode *temp = gst->head;
    while (temp != NULL)
    {
        printf("%s\t%d\t%d\t%d\t%d\n", temp->name, temp->type, temp->size, temp->binding, temp->fLabel);
        temp = temp->next;
    }
}

void assignBinding(struct globalSymbolTable *gst)
{
    struct globalSymbolNode *temp = gst->head;
    while (temp != NULL){
        if ( temp -> fLabel == -1){
        temp->binding = globalMemLoc;
        globalMemLoc += temp->size;
        }
        temp = temp->next;
    }
}

struct localSymbolNode *localLookup(struct localSymbolTable *lst, char *name)
{
    struct localSymbolNode *temp = lst->head;
    while (temp != NULL)
    {
        if (strcmp(temp->name, name) == 0)
        {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

void findType(struct globalSymbolTable *gst, struct localSymbolTable *lst, struct treeNode *root)
{
    if (root == NULL){
        return;
    }
    struct localSymbolNode *lnode = localLookup(lst, root->varname);
    struct globalSymbolNode *gnode = Lookup(gst, root->varname);

    if (lnode != NULL){
        // printf("%d %d",node -> type,root -> type);
        root->localSymbolTableEntry = lnode;
        // printf("%d",root->symbolTableEntry->binding);
        root->type = lnode->type;
    }
    else if (gnode != NULL){
        root->globalSymbolTableEntry = gnode;
        root->type = gnode->type;
    }
    else{
        yyerror("Variable not declared");
    }
}

struct paramNode *createParamNode(char *name, int type)
{
    struct paramNode *node = (struct paramNode *)malloc(sizeof(struct paramNode));
    node->type = type;
    node->name = name;
    node->next = NULL;
    return node;
}

void joinParamNode(struct paramNode *head, struct paramNode *node)
{
    struct paramNode *temp = head;
    if (temp == NULL){
        head = node;
        return;
    }
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = node;
}

void printParamList(struct paramNode *head)
{
    struct paramNode *temp = head;
    while (temp != NULL){
        printf("%s\t%d ", temp->name, temp->type);
        temp = temp->next;
    }
    printf("\n");
}

struct localSymbolNode *createLocalSymbolNode(char *name, int type, int size){
    struct localSymbolNode *node = (struct localSymbolNode *)malloc(sizeof(struct localSymbolNode));
    node->name = name;
    node->type = type;
    node->size = size;
    node->binding = 0;
    node->next = NULL;
    return node;
}

void joinLocalSymbolNode(struct localSymbolNode *head, struct localSymbolNode *node){
    if (head == NULL){
        head = node;
        return;
    }
    struct localSymbolNode *temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = node;
}

void assignLocalBinding(struct localSymbolTable *lst)
{
    if (lst == NULL){
        printf("cannot assign binding lst null");
        return;
    }
    int currBinding = 1;
    struct localSymbolNode *temp = lst->head;
    while (temp->binding != 0){
        temp = temp->next;
    }
    while (temp != NULL){
        temp->binding = currBinding;
        currBinding += 1;
        temp = temp->next;
    }
}

void printLocalSymbolTable(struct localSymbolTable *lst)
{
    if (lst == NULL)
        return;
    struct localSymbolNode *temp = lst->head;
    while (temp != NULL){
        printf("%s\t%d\t%d\n", temp->name, temp->type, temp->binding);
        temp = temp->next;
    }
}

int checkDuplicate(struct globalSymbolNode *head){
    for (struct globalSymbolNode *temp1 = head; temp1 != NULL; temp1 = temp1->next){
        for (struct globalSymbolNode *temp2 = temp1->next; temp2 != NULL; temp2 = temp2->next){
            if (strcmp(temp1->name, temp2->name) == 0){
                return 1;
            }
        }
    }
    return 0;
}

int checkFuncDeclaration(struct globalSymbolTable *gst, char *name, struct paramNode *paramList)
{
    struct globalSymbolNode *temp = gst->head;
    while (temp != NULL){
        if (strcmp(temp->name, name) == 0){
            if (temp->fLabel < 0){
                return 1;
            }
            struct paramNode *temp1 = temp->paramList;
            struct paramNode *temp2 = paramList;
            while (temp1 != NULL && temp2 != NULL){
                if (temp1->type != temp2->type || strcmp(temp1->name, temp2->name) != 0){
                    return 1;
                }
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

int getFuncLabel(struct globalSymbolTable *gst, char *name){
    struct globalSymbolNode *temp = gst->head;
    while (temp != NULL){
        if (strcmp(temp->name, name) == 0){
            return temp->fLabel;
        }
        temp = temp->next;
    }
    return -1;
}

void freeLST(struct localSymbolNode *head){
    if (head != NULL){
        freeLST(head->next);
        free(head);
    }
}

void freeGST(struct globalSymbolNode *head){
    if (head != NULL){
        freeGST(head->next);
        free(head);
    }
}

void addParamToLST(struct localSymbolTable *lst, struct paramNode *paramList)
{
    struct paramNode *temp = paramList;

    while (temp != NULL){
        struct localSymbolNode *node = createLocalSymbolNode(temp->name, temp->type, 1);
        if (lst->head == NULL){
            lst->head = node;
        }
        else{
            joinLocalSymbolNode(lst->head, node);
        }
        temp = temp->next;
    }
}

void joinLocalSymbolTableNode(struct localSymbolTable *lst, struct localSymbolNode *node)
{
    struct localSymbolNode *head = lst->head;
    if (head == NULL){
        // printf("head null");
        lst->head = node;
        // printf("%d %d",head -> type,node -> type);
        return;
    }
    struct localSymbolNode *temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = node;
}

void printArgList(struct argNode *argList)
{
    struct argNode *temp = argList;
    while (temp != NULL && temp->arg != NULL){
        printf("%s %d\t", temp->arg->varname, temp->arg->type);
        temp = temp->next;
    }
}

void joinArgNode(struct argNode *arg1, struct argNode *arg2)
{
    if (arg1 == NULL)return;
    while (arg1->next != NULL){
        arg1 = arg1->next;
    }
    arg1->next = arg2;
}

struct argNode *createArgNode(struct treeNode *root)
{
    struct argNode *temp = (struct argNode *)malloc(sizeof(struct argNode));
    temp->arg = root;
    temp->next = NULL;
    return temp;
}

int checkArgList(struct argNode *argList, char *name, struct globalSymbolTable *gst)
{
    struct globalSymbolNode *temp = gst->head;
    while (temp != NULL){
        if (strcmp(temp->name, name) == 0){
            struct paramNode *temp1 = temp->paramList;
            struct argNode *temp2 = argList;
            for (; temp1 != NULL && temp2 != NULL; temp1 = temp1->next, temp2 = temp2->next){
                if (temp1->type != temp2->arg->type){
                    return 1;
                }
            }
            if (temp1 == NULL && temp2 == NULL)
                return 0;
            else
                return 1;
        }
        temp = temp->next;
    }
    return 1;
}

void assignLSTtoFunction(struct globalSymbolTable *gst, char *name, struct localSymbolTable *lst)
{
    struct globalSymbolNode *temp = gst->head;
    while (temp != NULL){
        if (strcmp(temp->name, name) == 0){
            temp->lst = lst;
            return;
        }
        temp = temp->next;
    }
}

void assignBindingToParam(struct localSymbolTable *lst)
{
    struct localSymbolNode *temp = lst->head;
    int length = 0;
    while (temp != NULL){
        length++;
        temp = temp->next;
    }
    temp = lst->head;
    while (temp != NULL){
        temp->binding = -1 * length;
        length--;
        temp = temp->next;
    }
}