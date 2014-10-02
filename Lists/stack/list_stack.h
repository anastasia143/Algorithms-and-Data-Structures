#ifndef LIST_STACK_H
#define LISTS_STACK_LIST_STACK_H

#include "stack.h"

struct ListElement
{
	int value;
	ListElement* next;
};

ListElement *create_list_element(int value, ListElement *pemp);

class ListStack : public Stack
{
public:
	ListStack();
	~ListStack();
	void push(int value);
	void pop();
	int top();
protected:
	ListElement* head;
};

#endif // LIST_STACK_H
