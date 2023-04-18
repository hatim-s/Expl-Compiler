#include "headers.h"

typedef struct labelElement{
	char* label_name;
	int address;
	struct labelElement *next;
} labelElement;

typedef struct labelAddressTable{
	struct labelElement *head;
} labelAddressTable;


int pass = 1, address = -7;
labelAddressTable *table;

void addLabelToTable(labelAddressTable *table, char* label_name, int address);
int searchLabel(labelAddressTable *table, char* label);