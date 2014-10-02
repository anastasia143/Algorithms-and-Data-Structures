#include "list_queue.h"

ListElement *create_list_element(int value, ListElement *pemp)
{
	ListElement *temp = new ListElement;
	temp->value = value;
	temp->next = pemp;
	return temp;
}

ListQueue::ListQueue()
{
	size = 0;
	head = NULL;
	tail = NULL;
}

ListQueue::~ListQueue()
{
	ListElement *temp = head;
	while(temp != NULL)
	{
		temp = head->next;
		delete head;
		head = temp;
	}
	//delete tail;
}

void ListQueue::engueue(int value)
{
	ListElement *pemp = create_list_element(value, NULL);
	if (size == 0)
	{
		head = pemp;
		tail = pemp;
	}
	else
	{
		tail->next = pemp;
		tail = tail->next;
	}
	size++;
}

void ListQueue::dequeue()
{
	if (size == 0)
		return;
	else
	{
		if(size == 1)
			tail = head->next;
		ListElement *temp = head;
		head = head->next;
		delete temp;
		size--;
	}
}

int ListQueue::top()
{
	return head->value;
}
