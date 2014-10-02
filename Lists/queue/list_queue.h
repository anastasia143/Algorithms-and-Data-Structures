#ifndef LIST_QUEUE_H
#define LIST_QUEUE_H

#include "queue.h"
#include "stdlib.h"

struct ListElement
{
	int value;
	ListElement* next;
};

ListElement *create_list_element(int value, ListElement *pemp);

class ListQueue : public Queue
{
public:
	ListQueue();
	~ListQueue();
	void engueue(int value);
	void dequeue();
	int top();
private:
	ListElement* head;
	ListElement* tail;
};

#endif // LIST_QUEUE_H
