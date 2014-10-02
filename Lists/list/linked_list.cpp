#include "linked_list.h"

ListElement *create_list_element(int value, ListElement *pemp)
{
	ListElement *temp = new ListElement;
	temp->value = value;
	temp->next = pemp;
	return temp;
}

LinkedList::LinkedList()
{
	size = 0;
	head = NULL;
}

LinkedList::~LinkedList()
{
	ListElement *temp = head;
	while(temp != NULL)
	{
		temp = head->next;
		delete head;
		head = temp;
	}
}

void LinkedList::add(int value)
{
	if (size == 0)
	{
		ListElement* temp = create_list_element(value, NULL);
		head = temp;
	}
	else
	{
		ListElement* temp = head;
		while(temp->next != NULL)
			temp = temp->next;
		ListElement* pemp = create_list_element(value, NULL);
		temp->next = pemp;
	}
	size++;
	return;
}

void LinkedList::remove(int value)
{
	if (size == 0)
	{
		cout << "List is empty" << endl;
		return;
	}

	while (head->value == value)
	{
		if (size == 1)
		{
			ListElement *pemp = head;
			head = NULL;
			delete pemp;
			size--;
			return;
		}
		else
		{
			ListElement *pemp = head;
			head = head->next;
			delete pemp;
			size--;
		}
	}

	ListElement* temp = head;
	while (temp->next != NULL)
	{
		if (temp->next->value == value)
		{
			ListElement *pemp = temp->next;
			temp->next = temp->next->next;
			delete pemp;
			size--;
		}
		else
		{
			temp = temp->next;
		}
	}
}

void LinkedList::print()
{
	if (size == 0)
		cout << "List is empty";
	else
	{
		ListElement* temp = head;
		while(temp != NULL)
		{
			cout << temp->value << " ";
			temp = temp->next;
		}
		cout << endl;
	}
}

bool LinkedList::check(int value)
{
	if (size != 0)
	{
		ListElement* temp = head;
		while(temp != NULL)
		{
			if (temp->value == value)
				return true;
			temp = temp->next;
		}
	}
	return false;
}
