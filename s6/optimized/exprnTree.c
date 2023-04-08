// #include <stdio.h>
// #include "exprnTree.h"

int operatorCheck(int nodeType, int lType, int rType, int lNodeType, int rNodeType)
{
    if (nodeType == readNode || nodeType == writeNode || nodeType == connectorNode || nodeType == whileNode || nodeType == doWhileNode || nodeType == ifNode || nodeType == elseNode || nodeType == breakNode || nodeType == continueNode || nodeType == repeatUntilNode)
        return 0;

    if (lType == strType && rType == strType)
    {
        if (nodeType == assignNode)
            return 0;
        else
            return 1;
    }
    if (lType == intType && rType == intType)
    {
        if (nodeType == plusNode || nodeType == minusNode || nodeType == mulNode || nodeType == divNode || nodeType == assignNode || nodeType == gtNode || nodeType == ltNode || nodeType == geNode || nodeType == leNode || nodeType == eqNode || nodeType == neNode || nodeType == modNode || nodeType == idNode)
            return 0;
        else
            return 1;
    }
    if (lType == boolType && rType == boolType)
    {
        if (nodeType == andNode || nodeType == orNode)
            return 0;
        else
            return 1;
    }
    if ( lType == noType && rType == nullType) return 0;
    if ( nodeType == assignNode && lType == rType) return 0;
    if ( lNodeType == tipeNode && rNodeType == nullNode) return 0;
    if ( lNodeType == tipeNode && rNodeType == allocNode) return 0;
    if ( lType == intType && rNodeType == initializeNode) return 0;
    return 1;
}

struct treeNode *createTree(int val, int type, char *varname, int nodeType, struct treeNode *l, struct treeNode *r, struct argNode *argList)
{

    if (l && r && operatorCheck(nodeType, l->type, r->type,l->nodetype,r->nodetype))
    {
        printf("%d %d %d\n", nodeType, l->type, r->type);
        printf("%d %d", l->nodetype, r->nodetype);
        yyerror("Type mismatch");
    }

    struct treeNode *temp = (struct treeNode *)malloc(sizeof(struct treeNode));
    temp->val = val;
    temp->varname = varname;
    temp->type = type;
    temp->nodetype = nodeType;
    temp->left = l;
    temp->right = r;
    temp->globalSymbolTableEntry = NULL;
    temp->localSymbolTableEntry = NULL;
    temp->argList = argList;
    temp->tNode = NULL;
    return temp;
}

void inorder(struct treeNode *root)
{

    if (root != NULL)
    {

        inorder(root->left);

        switch (root->nodetype)
        {
        case numNode:
            printf("%d ", root->val);
            break;
        case idNode:
            printf("%s ", (root->varname));
            break;
        case strNode:
            printf("%s ", (root->varname));
            break;
        case readNode:
            printf("Read ");
            break;
        case writeNode:
            printf("Write ");
            break;
        case plusNode:
            printf("+ ");
            break;
        case minusNode:
            printf("- ");
            break;
        case mulNode:
            printf("* ");
            break;
        case divNode:
            printf("/ ");
            break;
        case modNode:
            printf("%% ");
            break;
        case assignNode:
            printf("= ");
            break;
        case addressNode:
            printf("& ");
            break;
        case pointerNode:
            printf("* ");
            break;
        case connectorNode:
            printf(";\n");
            break;
        case returnNode:
            printf("return ");
            break;
        case gtNode:
            printf("> ");
            break;
        case ltNode:
            printf("< ");
            break;
        case geNode:
            printf(">= ");
            break;
        case leNode:
            printf("<= ");
            break;
        case eqNode:
            printf("== ");
            break;
        case neNode:
            printf("!= ");
            break;
        case andNode:
            printf("&& ");
            break;
        case orNode:
            printf("|| ");
            break;
        case ifNode:
            printf("if ");
            break;
        case elseNode:
            printf("else ");
            break;
        case whileNode:
            printf("while ");
            break;
        case breakNode:
            printf("break ");
            break;
        case continueNode:
            printf("continue ");
            break;
        case doWhileNode:
            printf("do while ");
            break;
        case repeatUntilNode:
            printf("repeat until ");
            break;
        case funcNode:
            printf("func ");
            break;
        case initializeNode:
            printf("initialize ");
            break;
        case tipeNode:
            printf("%s ", root->varname);
            break;
        case nullNode:
            printf("null ");
            break;
        case allocNode:
            printf("alloc ");
            break;
        case freeNode:
            printf("free ");
            break;
        default:
            printf("Unknown node type"); 
        }

        inorder(root->right);
    }
}

label_index getLabel()
{
    return (++labelMax);
}

reg_index getReg()
{
    if (regMax < 15)
    {
        return (++regMax);
    }
    else
    {
        yyerror("Out of registers");
    }
    return -1;
}

void freeReg()
{
    if (regMax >= 0)
    {
        regMax--;
    }
}

void pushRegisters(FILE *fp){
    for(int i=0;i<=regMax;i++){
        fprintf(fp, "PUSH R%d\n", i);
    }
}

void popRegisters(FILE *fp){
    for(int i=regMax; i>=0;i--){
        fprintf(fp, "POP R%d\n", i);
    }
}


reg_index codeGen(struct treeNode *root, FILE *fp)
{
    if (root == NULL) return -1;

    int r1, r2, idPos, label1, label2,offset;
    switch (root->nodetype)
    {
    case numNode:
        r1 = getReg();
        fprintf(fp, "MOV R%d, %d\n", r1, root->val);
        return r1;
    case strNode:
        r1 = getReg();
        fprintf(fp, "MOV R%d, %s\n", r1, root->varname); // here the value of the string is stored in as the varname
        return r1;
    case nullNode:
        r1 = getReg();
        fprintf(fp, "MOV R%d, 0\n", r1);
        return r1;
    case tipeNode:
      
        r1 = getReg();
        idPos = getBindingAddress(root);
        if ( idPos >= 4096 ){
            fprintf(fp, "MOV R%d, %d\n", r1, idPos);
        }else{
        fprintf(fp, "MOV R%d, BP\n", r1);
        if ( idPos < 0) {
        fprintf(fp, "ADD R%d, %d\n", r1, idPos-2);
        }else{
        fprintf(fp, "ADD R%d, %d\n", r1, idPos);

        }
        }

        struct treeNode* temp = root;
        while( temp -> left != NULL){
            if ( temp -> tNode == NULL){
                yyerror("tnode not found ");
            }
            struct fieldNode *fNode = temp -> tNode->fieldList;
           
            while ( fNode != NULL){
                if ( strcmp(fNode->name, temp -> left -> varname) == 0){
                    offset = fNode->fieldIndex;
                    break;
                }
                fNode = fNode->next;
            }
            r2 = getReg();
            fprintf(fp, "MOV R%d, [R%d]\n", r1, r1);
            fprintf(fp, "MOV R%d, %d\n", r2, offset);
            fprintf(fp, "ADD R%d, R%d\n", r1, r2);
            temp = temp -> left;
            freeReg();
        }
        return r1;

    case idNode:
        r1 = getReg();
        idPos = getBindingAddress(root);

        if ( idPos >= 4096){
            fprintf(fp, "MOV R%d, %d\n", r1, idPos);
        }else if ( idPos < 0){
                fprintf(fp, "MOV R%d, BP\n", r1);
                fprintf(fp, "ADD R%d, %d\n", r1, idPos - 2);
        }else{
            fprintf(fp, "MOV R%d, BP\n", r1);
            fprintf(fp, "ADD R%d, %d\n", r1, idPos);
        }
        if ( root -> left != NULL && root->left->nodetype == idNode){
                r2 = codeGen(root -> left, fp);
                fprintf(fp, "MOV R%d, [R%d]\n", r2, r2);
                fprintf(fp, "ADD R%d, R%d\n", r1, r2);
                freeReg();
        }
        if ( root -> left != NULL && root->left->nodetype != idNode){
            r2 = codeGen(root -> left, fp);
            fprintf(fp, "ADD R%d, R%d\n", r1, r2);
            freeReg();
        }
        return r1;

    case readNode:
        pushRegisters(fp);
        r1 = getReg();
        r2 = codeGen(root->left, fp);
        printHelper(fp, readCode, r1, r2);
        freeReg();
        freeReg();
        popRegisters(fp);
        return -1;
    case writeNode:
        pushRegisters(fp);
        r1 = getReg();
        r2 = codeGen(root->left, fp);
        if ( root -> left -> nodetype == tipeNode || root -> left -> nodetype == idNode){
            fprintf(fp, "MOV R%d, [R%d]\n", r2, r2);
        }
        printHelper(fp, writeCode, r1, r2);
        freeReg();
        freeReg();
        popRegisters(fp);

        return -1;
    case funcNode:
        pushRegisters(fp);
        struct argNode *temp1 = root->argList;
        while (temp1 != NULL)
        {
            r2 = codeGen(temp1->arg, fp);
            if ( temp1 -> arg ->nodetype == tipeNode || temp1 -> arg ->nodetype == idNode){
                fprintf(fp,"MOV R%d, [R%d]\n", r2, r2);
            }
            fprintf(fp, "PUSH R%d\n", r2);
            freeReg();
            temp1 = temp1->next;
        }

        fprintf(fp, "PUSH R0\n");
        fprintf(fp, "CALL F%d\n", root->val);
        fprintf(fp, "POP R0\n");

        int argLength = 0;
        temp1 = root->argList;
        while (temp1 != NULL)
        {
            fprintf(fp, "POP R0\n");
            argLength++;
            temp1 = temp1->next;
        }

        popRegisters(fp);
        r1 = getReg();
        fprintf(fp, "MOV R%d, SP\n", r1);
        fprintf(fp, "ADD R%d, %d\n", r1, argLength + regMax + 1);
        fprintf(fp, "MOV R%d, [R%d]\n", r1, r1);

        return r1;

    case returnNode:
        r1 = codeGen(root->left, fp);
        r2 = getReg();
        fprintf(fp, "MOV R%d, BP\n", r2);
        fprintf(fp, "SUB R%d, 2\n", r2);
        if ( root ->left ->nodetype == tipeNode || root ->left ->nodetype == idNode){
             fprintf(fp, "MOV R%d, [R%d]\n", r1, r1);
        }
        fprintf(fp, "MOV [R%d], R%d\n", r2, r1);
        freeReg();
        freeReg();
        return -1;
    
    case initializeNode:
        pushRegisters(fp);
        r1 = getReg();
        printHelper(fp, initializeCode, r1, -1);
        freeReg();
        popRegisters(fp);
        r1 = getReg();
        fprintf(fp, "MOV R%d, SP\n", r1);
        fprintf(fp, "ADD R%d, %d\n", r1, regMax + 5);
        fprintf(fp, "MOV R%d, [R%d]\n", r1, r1);
    
        return r1;
    case allocNode:         // work on this
        pushRegisters(fp);
        r1 = getReg();
        printHelper(fp, allocCode, r1, r2);
        freeReg();
        popRegisters(fp);
        r1 = getReg();
        fprintf(fp, "MOV R%d, SP\n", r1);
        fprintf(fp, "ADD R%d, %d\n", r1, regMax + 5);
        fprintf(fp, "MOV R%d, [R%d]\n", r1, r1);
        return r1;

    case freeNode:
        pushRegisters(fp);
        r1 = getReg();
        printHelper(fp, freeCode, r1, r2);
        freeReg();
        popRegisters(fp);
        r1 = getReg();
        fprintf(fp, "MOV R%d, SP\n", r1);
        fprintf(fp, "ADD R%d, %d\n", r1, regMax + 5);
        fprintf(fp, "MOV R%d, [R%d]\n", r1, r1);
        return r1;

    case plusNode:
        r1 = codeGen(root->left, fp);
        if ( root -> left -> nodetype == tipeNode || root -> left -> nodetype == idNode){
            fprintf(fp, "MOV R%d, [R%d]\n", r1, r1);
        }
        r2 = codeGen(root->right, fp);
        if ( root -> right -> nodetype == tipeNode || root -> right -> nodetype == idNode){
            fprintf(fp, "MOV R%d, [R%d]\n", r2, r2);
        }
        fprintf(fp, "ADD R%d, R%d\n", r1, r2);
        freeReg();
        return r1;
    case minusNode:
        r1 = codeGen(root->left, fp);
        if ( root -> left -> nodetype == tipeNode || root -> left -> nodetype == idNode){
            fprintf(fp, "MOV R%d, [R%d]\n", r1, r1);
        }
        r2 = codeGen(root->right, fp);
        if ( root -> right -> nodetype == tipeNode || root -> right -> nodetype == idNode){
            fprintf(fp, "MOV R%d, [R%d]\n", r2, r2);
        }
        fprintf(fp, "SUB R%d, R%d\n", r1, r2);
        freeReg();
        return r1;
    case mulNode:
        r1 = codeGen(root->left, fp);
        if ( root -> left -> nodetype == tipeNode || root -> left -> nodetype == idNode){
            fprintf(fp, "MOV R%d, [R%d]\n", r1, r1);
        }
        r2 = codeGen(root->right, fp);
        if ( root -> right -> nodetype == tipeNode || root -> right -> nodetype == idNode){
            fprintf(fp, "MOV R%d, [R%d]\n", r2, r2);
        }
        fprintf(fp, "MUL R%d, R%d\n", r1, r2);
        freeReg();
        return r1;
    case divNode:
        r1 = codeGen(root->left, fp);
        if ( root -> left -> nodetype == tipeNode || root -> left -> nodetype == idNode){
            fprintf(fp, "MOV R%d, [R%d]\n", r1, r1);
        }
        r2 = codeGen(root->right, fp);
        if ( root -> right -> nodetype == tipeNode || root -> right -> nodetype == idNode){
            fprintf(fp, "MOV R%d, [R%d]\n", r2, r2);
        }
        fprintf(fp, "DIV R%d, R%d\n", r1, r2);
        freeReg();
        return r1;
    case modNode:
        r1 = codeGen(root->left, fp);
        if ( root -> left -> nodetype == tipeNode || root -> left -> nodetype == idNode){
            fprintf(fp, "MOV R%d, [R%d]\n", r1, r1);
        }
        r2 = codeGen(root->right, fp);
        if ( root -> right -> nodetype == tipeNode || root -> right -> nodetype == idNode){
            fprintf(fp, "MOV R%d, [R%d]\n", r2, r2);
        }
        fprintf(fp, "MOD R%d, R%d\n", r1, r2);
        freeReg();
        return r1;
    case assignNode:
        if(root->left->nodetype == pointerNode){
            r1 = codeGen(root->left->left, fp);
            r2 = codeGen(root->right, fp);
            fprintf(fp, "MOV [R%d], R%d\n", r1, r2);
            freeReg();
            freeReg();
            return -1;
        }

        r1 = codeGen(root->left, fp);
        r2 = codeGen(root->right, fp);
        if ( root -> right -> nodetype == tipeNode || root -> right -> nodetype == idNode){
            fprintf(fp, "MOV R%d, [R%d]\n", r2, r2);
        }
        fprintf(fp, "MOV [R%d], R%d\n", r1, r2);
        freeReg();
        freeReg();
        return -1;
    case addressNode:
        r1 = getReg();
        idPos = getBindingAddress(root->left);
        if (root->left->left != NULL && root->left->right == NULL)
        {
            r2 = codeGen(root->left->left, fp);
            if (idPos >= 4096)
            {
                fprintf(fp, "MOV R%d, %d\n", r1, idPos);
                fprintf(fp, "ADD R%d, R%d\n", r1, r2);
            }
            else if (idPos < 0)
            {
                fprintf(fp, "MOV R%d, BP\n", r1);
                fprintf(fp, "ADD R%d, %d\n", r1, idPos - 2);
                fprintf(fp, "ADD R%d, R%d\n", r1, r2);
            }
            else
            {
                fprintf(fp, "MOV R%d, BP\n", r1);
                fprintf(fp, "ADD R%d, %d\n", r1, idPos);
                fprintf(fp, "ADD R%d, R%d\n", r1, r2);
            }
            freeReg();
        }
        else if (idPos >= 4096)
        {
            fprintf(fp, "MOV R%d, %d\n", r1, idPos);
        }
        else if (idPos < 0)
        {
            fprintf(fp, "MOV R%d, BP\n", r1);
            fprintf(fp, "ADD R%d, %d\n", r1, idPos - 2);
        }
        else
        {
            fprintf(fp, "MOV R%d, BP\n", r1);
            fprintf(fp, "ADD R%d, %d\n", r1, idPos);
        }
        return r1;
    case pointerNode:
        r1 = getReg();
        r2 = codeGen(root->left, fp);
        fprintf(fp, "MOV R%d, [R%d]\n", r1, r2);
        freeReg();
        return r1;
    case connectorNode:
        r1 = codeGen(root->left, fp);
        r2 = codeGen(root->right, fp);
        freeReg();
        freeReg();
        return -1;
    case gtNode:
        r1 = codeGen(root->left, fp);
          if ( root -> left -> nodetype == tipeNode || root -> left -> nodetype == idNode){
            fprintf(fp, "MOV R%d, [R%d]\n", r1, r1);
        }
        r2 = codeGen(root->right, fp);
         if ( root -> right -> nodetype == tipeNode || root -> right -> nodetype == idNode){
            fprintf(fp, "MOV R%d, [R%d]\n", r2, r2);
        }
        fprintf(fp, "GT R%d, R%d\n", r1, r2);
        freeReg();
        return r1;
    case ltNode:
        r1 = codeGen(root->left, fp);
         if ( root -> left -> nodetype == tipeNode || root -> left -> nodetype == idNode){
            fprintf(fp, "MOV R%d, [R%d]\n", r1, r1);
        }
        r2 = codeGen(root->right, fp);
         if ( root -> right -> nodetype == tipeNode || root -> right -> nodetype == idNode){
            fprintf(fp, "MOV R%d, [R%d]\n", r2, r2);
        }
        fprintf(fp, "LT R%d, R%d\n", r1, r2);
        freeReg();
        return r1;
    case eqNode:
        r1 = codeGen(root->left, fp);
        if ( root -> left -> nodetype == tipeNode || root -> left -> nodetype == idNode){
            fprintf(fp, "MOV R%d, [R%d]\n", r1, r1);
        }
    
        r2 = codeGen(root->right, fp);
        if ( root -> right -> nodetype == tipeNode || root -> right -> nodetype == idNode){
            fprintf(fp, "MOV R%d, [R%d]\n", r2, r2);
        }
    
        fprintf(fp, "EQ R%d, R%d\n", r1, r2);
        freeReg();
        return r1;
    case neNode:
        r1 = codeGen(root->left, fp);
        if ( root -> left -> nodetype == tipeNode || root -> left -> nodetype == idNode){
            fprintf(fp, "MOV R%d, [R%d]\n", r1, r1);
        }
        r2 = codeGen(root->right, fp);
         if ( root -> right -> nodetype == tipeNode || root -> right -> nodetype == idNode){
            fprintf(fp, "MOV R%d, [R%d]\n", r2, r2);
        }
        fprintf(fp, "NE R%d, R%d\n", r1, r2);
        freeReg();
        return r1;
    case geNode:
        r1 = codeGen(root->left, fp);
        if ( root -> left -> nodetype == tipeNode || root -> left -> nodetype == idNode){
            fprintf(fp, "MOV R%d, [R%d]\n", r1, r1);
        }
        r2 = codeGen(root->right, fp);
         if ( root -> right -> nodetype == tipeNode || root -> right -> nodetype == idNode){
            fprintf(fp, "MOV R%d, [R%d]\n", r2, r2);
        }
        fprintf(fp, "GE R%d, R%d\n", r1, r2);
        freeReg();
        return r1;
    case leNode:
        r1 = codeGen(root->left, fp);
        if ( root -> left -> nodetype == tipeNode || root -> left -> nodetype == idNode){
            fprintf(fp, "MOV R%d, [R%d]\n", r1, r1);
        }
        r2 = codeGen(root->right, fp);
         if ( root -> right -> nodetype == tipeNode || root -> right -> nodetype == idNode){
            fprintf(fp, "MOV R%d, [R%d]\n", r2, r2);
        }
        fprintf(fp, "LE R%d, R%d\n", r1, r2);
        freeReg();
        return r1;
    case andNode:
        r1 = codeGen(root->left, fp);
        r2 = codeGen(root->right, fp);
        fprintf(fp, "MUL R%d, R%d\n", r1, r2);
        freeReg();
        return r1;

    case orNode:
        r1 = codeGen(root->left, fp);
        r2 = codeGen(root->right, fp);
        fprintf(fp, "ADD R%d, R%d\n", r1, r2);
        freeReg();
        return r1;

    case ifNode:
        label1 = getLabel();
        r1 = codeGen(root->left, fp);
        
        fprintf(fp, "JZ R%d, L%d\n", r1, label1);
        freeReg();
        if (root->right->nodetype == elseNode)
        {
            label2 = getLabel();
            r1 = codeGen(root->right->left, fp);
            freeReg();
            fprintf(fp, "JMP L%d\n", label2);
            fprintf(fp, "L%d:\n", label1);
            r1 = codeGen(root->right->right, fp);
            freeReg();
            fprintf(fp, "L%d:\n", label2);
        }
        else
        {
            r1 = codeGen(root->right, fp);
            freeReg();
            fprintf(fp, "L%d:\n", label1);
        }
        return -1;

    case whileNode:
        label1 = getLabel();
        label2 = getLabel();
        globalBreakLabel = label2;
        globalContinueLabel = label1;
        fprintf(fp, "L%d:\n", label1);
        r1 = codeGen(root->left, fp);
        fprintf(fp, "JZ R%d, L%d\n", r1, label2);
        freeReg();
        r1 = codeGen(root->right, fp);
        fprintf(fp, "JMP L%d\n", label1);
        fprintf(fp, "L%d:\n", label2);
        freeReg();
        globalBreakLabel = -1;
        globalContinueLabel = -1;
        return -1;
    case doWhileNode:
        label1 = getLabel();
        label2 = getLabel();
        globalBreakLabel = label2;
        globalContinueLabel = label1;
        fprintf(fp, "L%d:\n", label1);
        r1 = codeGen(root->right, fp);
        freeReg();
        r1 = codeGen(root->left, fp);
        fprintf(fp, "JNZ R%d, L%d\n", r1, label1);
        fprintf(fp, "L%d:\n", label2);
        freeReg();
        globalBreakLabel = -1;
        globalContinueLabel = -1;
        return -1;
    case repeatUntilNode:
        label1 = getLabel();
        label2 = getLabel();
        globalBreakLabel = label2;
        globalContinueLabel = label1;
        fprintf(fp, "L%d:\n", label1);
        r1 = codeGen(root->right, fp);
        freeReg();
        r1 = codeGen(root->left, fp);
        fprintf(fp, "JZ R%d, L%d\n", r1, label1);
        fprintf(fp, "L%d:\n", label2);
        freeReg();
        globalBreakLabel = -1;
        globalContinueLabel = -1;
        return -1;
    case breakNode:
        fprintf(fp, "JMP L%d\n", globalBreakLabel);
        return -1;
    case continueNode:
        fprintf(fp, "JMP L%d\n", globalContinueLabel);
        return -1;
    }
}

void printHelper(FILE *fp, int printCode, int reg1, int reg2)
{

    switch (printCode)
    {
    case entryCode:
        fprintf(fp, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", 0, 2056, 0, 0, 0, 0, 0, 0);
        fprintf(fp, "MOV SP, %d\n", 4095);
        fprintf(fp, "MOV BP, %d\n", 4096);
        fprintf(fp, "PUSH R0\n");

        break;
    case exitCode:
        fprintf(fp, "MOV R0,\"Exit\"\n");
        fprintf(fp, "PUSH R0\n");
        fprintf(fp, "PUSH R0\n");
        fprintf(fp, "PUSH R0\n");
        fprintf(fp, "PUSH R0\n");
        fprintf(fp, "PUSH R0\n");
        fprintf(fp, "CALL 0\n");
        break;
    case readCode:
        fprintf(fp, "MOV R%d, \"Read\"\n", reg1);
        fprintf(fp, "PUSH R%d\n", reg1); // system call fn
        fprintf(fp, "MOV R%d, -1\n", reg1);
        fprintf(fp, "PUSH R%d\n", reg1); // arg1
        fprintf(fp, "MOV R%d, R%d\n", reg1, reg2);
        fprintf(fp, "PUSH R%d\n", reg1); // arg2
        fprintf(fp, "PUSH R%d\n", reg1); // arg3
        fprintf(fp, "PUSH R%d\n", reg1);
        fprintf(fp, "CALL 0\n");
        fprintf(fp, "POP R%d\n", reg1);
        fprintf(fp, "POP R%d\n", reg1);
        fprintf(fp, "POP R%d\n", reg1);
        fprintf(fp, "POP R%d\n", reg1);
        fprintf(fp, "POP R%d\n", reg1);
        break;
    case writeCode:
        fprintf(fp, "MOV R%d, \"Write\"\n", reg1);
        fprintf(fp, "PUSH R%d\n", reg1);
        fprintf(fp, "MOV R%d, -2\n", reg1);
        fprintf(fp, "PUSH R%d\n", reg1);
        fprintf(fp, "MOV R%d, R%d\n", reg1, reg2);
        fprintf(fp, "PUSH R%d\n", reg1);
        fprintf(fp, "PUSH R%d\n", reg1);
        fprintf(fp, "PUSH R%d\n", reg1);
        fprintf(fp, "CALL 0\n");
        fprintf(fp, "POP R%d\n", reg1);
        fprintf(fp, "POP R%d\n", reg1);
        fprintf(fp, "POP R%d\n", reg1);
        fprintf(fp, "POP R%d\n", reg1);
        fprintf(fp, "POP R%d\n", reg1);
        break;
    case initializeCode:
        fprintf(fp, "MOV R%d, \"Heapset\"\n", reg1);
        fprintf(fp, "PUSH R%d\n", reg1);
        fprintf(fp, "PUSH R%d\n", reg1);
        fprintf(fp, "PUSH R%d\n", reg1);
        fprintf(fp, "PUSH R%d\n", reg1);
        fprintf(fp, "PUSH R%d\n", reg1);
        fprintf(fp, "CALL 0\n");
        fprintf(fp, "POP R%d\n", reg1);
        fprintf(fp, "POP R%d\n", reg1);
        fprintf(fp, "POP R%d\n", reg1);
        fprintf(fp, "POP R%d\n", reg1);
        fprintf(fp, "POP R%d\n", reg1);
        break;
    case allocCode:
        fprintf(fp, "MOV R%d, \"Alloc\"\n", reg1);
        fprintf(fp, "PUSH R%d\n", reg1);
        fprintf(fp, "MOV R%d, 8\n", reg1);
        fprintf(fp, "PUSH R%d\n", reg1);
        fprintf(fp, "PUSH R%d\n", reg1);
        fprintf(fp, "PUSH R%d\n", reg1);
        fprintf(fp, "PUSH R%d\n", reg1);
        fprintf(fp, "CALL 0\n");
        fprintf(fp, "POP R%d\n", reg1);
        fprintf(fp, "POP R%d\n", reg1);
        fprintf(fp, "POP R%d\n", reg1);
        fprintf(fp, "POP R%d\n", reg1);
        fprintf(fp, "POP R%d\n", reg1);
        break;
    case freeCode:
        fprintf(fp, "MOV R%d, \"Free\"\n", reg1);
        fprintf(fp, "PUSH R%d\n", reg1);
        fprintf(fp, "MOV R%d, R%d\n", reg1, reg2);
        fprintf(fp, "PUSH R%d\n", reg1);
        fprintf(fp, "PUSH R%d\n", reg1);
        fprintf(fp, "PUSH R%d\n", reg1);
        fprintf(fp, "PUSH R%d\n", reg1);
        fprintf(fp, "CALL 0\n");
        fprintf(fp, "POP R%d\n", reg1);
        fprintf(fp, "POP R%d\n", reg1);
        fprintf(fp, "POP R%d\n", reg1);
        fprintf(fp, "POP R%d\n", reg1);
        fprintf(fp, "POP R%d\n", reg1);
        break;
    }
}

void freeTree(struct treeNode *root)
{
    if (root == NULL)
        return;
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}

int getBindingAddress(struct treeNode *root)
{
    if (root->localSymbolTableEntry != NULL)
        return root->localSymbolTableEntry->binding;
    if (root->globalSymbolTableEntry != NULL)
        return root->globalSymbolTableEntry->binding;
    return -1;
}

void codeGenForLocal(struct localSymbolNode *lst, FILE *fp)
{
    if (lst == NULL)
        return;
    struct localSymbolNode *temp = lst;
    while (temp != NULL)
    {
        fprintf(fp, "PUSH R0\n");
        temp = temp->next;
    }
}

void codeDelForLocal(struct localSymbolNode *lst, FILE *fp)
{
    if (lst == NULL)
        return;
    struct localSymbolNode *temp = lst;
    while (temp != NULL)
    {
        fprintf(fp, "POP R0\n");
        temp = temp->next;
    }
}

int evaluate(struct treeNode *root)
{
    if (root == NULL)
        return -1;
    switch (root->nodetype)
    {

    case numNode:
        return root->val;
    case idNode:
        return var[root->varname[0] - 'a'];
    case readNode:
        scanf("%d", &var[root->left->varname[0] - 'a']);
        break;
    case writeNode:
        printf("%d\n", evaluate(root->left));
        break;
    case plusNode:
        return evaluate(root->left) + evaluate(root->right);
    case minusNode:
        return evaluate(root->left) - evaluate(root->right);
    case mulNode:
        return evaluate(root->left) * evaluate(root->right);
    case divNode:
        return evaluate(root->left) / evaluate(root->right);
    case modNode:
        return evaluate(root->left) % evaluate(root->right);
    case gtNode:
        return evaluate(root->left) > evaluate(root->right);
    case ltNode:
        return evaluate(root->left) < evaluate(root->right);
    case eqNode:
        return evaluate(root->left) == evaluate(root->right);
    case leNode:
        return evaluate(root->left) <= evaluate(root->right);
    case geNode:
        return evaluate(root->left) >= evaluate(root->right);
    case neNode:
        return evaluate(root->left) != evaluate(root->right);
    case assignNode:
        var[root->left->varname[0] - 'a'] = evaluate(root->right);
        break;
    case ifNode:
        if (evaluate(root->left))
        {
            if (root->right->nodetype == elseNode)
            {
                evaluate(root->right->left);
            }
            else
            {
                evaluate(root->right);
            }
        }
        else
        {
            if (root->right->nodetype == elseNode)
            {
                evaluate(root->right->right);
            }
        }
        break;
    case whileNode:
        while (evaluate(root->left))
        {
            evaluate(root->right);
        }
        break;
    case doWhileNode:
        do
        {
            evaluate(root->right);
        } while (evaluate(root->left));
        break;
    case repeatUntilNode:
        do
        {
            evaluate(root->right);
        } while (!evaluate(root->left));
        break;
    case connectorNode:
        evaluate(root->left);
        evaluate(root->right);
    }
    return 0;
}
