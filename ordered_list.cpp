#include "Node.h"
#include "OL.h"
#include <iostream>

int main() {
	OL* newList = new OL();
	newList->insert(1);
	newList->insert(3);
	newList->insert(2);
	newList->insert(5);
	newList->insert(2);
	newList->insert(1);
	newList->remove(2);
	newList->remove(6);
	newList->remove(1);
	newList->print();	
}
