#include "NodeList.h"
#include <iostream>
using namespace std;

int main(void) {
	NodeList* list = new NodeList();

	list->insertFront(8);

	NodeList::Iterator p = list->begin();
	cout << *p << endl;
	list->insertBack(5);

	NodeList::Iterator q = p; 
	cout << *(++q) << endl;
	cout << (p==list->begin()) <<endl;

	list->insert(q, 3);
	*q = 7;

	list->insertFront(9);
	list->eraseBack();
	list->erase(p);
	list->eraseFront();



}
