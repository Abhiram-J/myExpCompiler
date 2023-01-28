struct labelNode{
	char* labelName;
	int address;
	struct labelNode* next;
};

struct labelAddressTable{
	struct labelNode *head;
};

void addLabel(struct labelAddressTable *lat, char* label_name, int addr);

int searchLabel(struct labelAddressTable *lat,char* label);

void printLabelTable(struct labelAddressTable *lat);
