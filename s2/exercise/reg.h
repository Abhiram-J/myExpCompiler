// Adding registers

#define reg_index int;
int regMax= -1;
int getReg();
void freeReg();
int codeGen(struct node* root, FILE* fp);

int var[26];
