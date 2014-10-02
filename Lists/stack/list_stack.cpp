#include "list_stack.h"

ListElement *create_list_element(int value, ListElement *pemp)
{
	ListElement *temp = new ListElement;
	temp->value = value;
	temp->next = pemp;
	return temp;
}

ListStack::ListStack()
{
	size = 0;
	head = NULL;
}

ListStack::~ListStack()
{
	ListElement *temp = head;
	while(temp != NULL)
	{
		temp = head->next;
		delete head;
		head = temp;
	}
}

void ListStack::push(int value)
{
	ListElement *pemp = create_list_element(value, NULL);
	if (size == 0)
		head = pemp;
	else
	{
		ListElement *temp = head;
		while(temp->next != NULL)
			temp = temp->next;
		temp->next = pemp;
	}
	size++;
}

void ListStack::pop()
{
	if (size == 0)
		return;
	else if (size == 1)
	{
		ListElement *temp = head;
		head = NULL;
		delete temp;
		size--;
	}
	else
	{
		ListElement *temp = head;
		while(temp->next->next != NULL)
			temp = temp->next;
		ListElement *pemp = temp->next;
		temp->next = NULL;
		delete pemp;
		size--;
	}
}

int ListStack::top()
{
	ListElement *temp = head;
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	return temp->value;
}

