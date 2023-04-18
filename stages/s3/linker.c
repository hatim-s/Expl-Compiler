#include "linker.h"

void addLabelToTable(labelAddressTable *table, char* label_name, int address){
	*(label_name + strlen(label_name) - 2) = '\0';
	
	labelElement* elem = (labelElement*) malloc (sizeof(labelElement));

	elem->label_name = (char*) malloc (sizeof(char));
	strcpy (elem->label_name, label_name);
	elem->address = address, elem->next = NULL;
	
	labelElement *temp = table->head;
    if(temp != NULL) {
        while(temp->next != NULL) temp = temp->next;
        temp->next = elem;
    }
	else table->head = elem;
}

int searchLabel (labelAddressTable *table, char* label) {	
	char* label_name = (char*) malloc (sizeof(char));
	strcpy (label_name, label);
	*(label_name + strlen (label_name) - 1) = '\0';
	
	labelElement *temp = table->head;
	while (temp != NULL) {
		if (strcmp(temp->label_name, label_name) == 0)
			return temp->address;
		temp = temp->next;
	}
	return -1;
}