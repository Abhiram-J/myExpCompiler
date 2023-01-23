// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include "labelTranslator.h"


void addLabel(struct labelAddressTable* lat, char* labelName, int address){


	
	struct labelNode* node = (struct labelNode*)malloc(sizeof(struct labelNode));

    int sz = strlen(labelName)-1;
    node->labelName = (char*)malloc(sizeof(char) * (sz));
    strncpy(node->labelName,labelName,sz);
    node->labelName[sz-1] = '\0';

	node -> address = address;
	node -> next = NULL;
    // printf("%s %d",node -> labelName,node -> address);
	
	struct labelNode *temp = lat -> head;
	if(temp == NULL){
		lat -> head = node;
		return;
	}
	
	while(temp -> next != NULL){
		temp = temp -> next;
    }	
	temp -> next = node;

}

int searchLabel(struct labelAddressTable *lat, char* labelName){
	
    int sz = strlen(labelName) ;
    char* modLabelName = (char*)malloc(sizeof(char) * (sz));
    strncpy(modLabelName,labelName,sz);
    modLabelName[sz-1] = '\0';
    
    // printf("%s ",modLabelName);
	
	struct labelNode* temp = lat -> head;
	while(temp != NULL){
		if(strcmp(temp -> labelName,modLabelName) == 0){
			return temp -> address;
		}
		temp = temp -> next;
	}
	return -1;
}

void printLabelAddressTable(struct labelAddressTable *lat){
    
    struct labelNode* temp = lat -> head;
    while(temp != NULL){
        printf("%s %d\n",temp->labelName,temp->address);
        temp = temp -> next;
    }
}

