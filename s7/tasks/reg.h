// Adding registers

#define reg_index int;
int regMax= -1;
int getReg();
void freeReg();
int codeGen(struct treeNode* root, FILE* fp);

int var[26];


// Adding labels
#define label_index int;
int labelMax = -1;
int globalBreakLabel = -1;
int globalContinueLabel = -1;
int getLabel();

