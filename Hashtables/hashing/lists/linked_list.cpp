#include "linked_list.h"

ListElement *create_list_element(char* value, int max_string_length, ListElement *pemp)
{
	ListElement *temp = new ListElement;
	temp->value = new char[max_string_length];
	int str_len = strlen(value);
	for (int k = 0; k < str_len; k++)
		temp->value[k] = value[k];
	for (int k = str_len; k < max_string_length; k++)
		temp->value[k] = '\0';

	temp->next = pemp;
	temp->count = 0;
	return temp;
}

LinkedList::LinkedList()
{
	size = 0;
	head = NULL;
	max_string_length = 100;
}

LinkedList::LinkedList(int max_element_length)
{
	size = 0;
	head = NULL;
	max_string_length = max_element_length;
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

void LinkedList::add(char* value)
{
	if (size == 0)
	{
		ListElement* temp = create_list_element(value, max_string_length,NULL);
		head = temp;
	}
	else
	{
		ListElement* temp = head;
		while(temp->next != NULL)
			temp = temp->next;
		ListElement* pemp = create_list_element(value, max_string_length, NULL);
		temp->next = pemp;
	}
	size++;
	return;
}

void LinkedList::remove(char* value)
{
	if (size == 0)
	{
		cout << "List is empty" << endl;
		return;
	}

	while (is_equal(head->value, value))
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
		if (is_equal(temp->next->value, value))
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
	{
		//cout << "List is empty";
	}
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

bool LinkedList::check(char* value)
{
	if (size != 0)
	{
		ListElement* temp = head;
		while(temp != NULL)
		{
			if (is_equal(temp->value, value))
				return true;
			temp = temp->next;
		}
	}
	return false;
}

bool is_equal(char* str1, char* str2)
{
	if(strlen(str1) == strlen(str2))
	{
		int len = strlen(str1);
		for (int i = 0; i < len; i++)
		{
			if(str1[i] != str2[i])
				return false;
		}
		return true;
	}
	return false;
}
