#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include "list.h"


struct ListElement
{
	int value;
	ListElement *next;
};

ListElement *create_list_element(int value, ListElement *pemp);

class LinkedList : public List
{
public:
	LinkedList();
	~LinkedList();
	void add(int value);
	void remove(int value);
	void print();
	bool check(int value);
protected:
	ListElement* head;
	int size;
};

#endif // LINKED_LIST_H
