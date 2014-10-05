#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include "list.h"
#include <cstring>

struct ListElement
{
	char* value;
	int count;
	ListElement *next;
};

ListElement *create_list_element(char* value, int max_string_length, ListElement *pemp);

class LinkedList : public List
{
public:
	LinkedList();
	LinkedList(int max_element_length);
	~LinkedList();
	void add(char* value);
	void remove(char* value);
	void print();
	bool check(char* value);
private:
	ListElement* head;
	int max_string_length = 50;
};

bool is_equal(char* str1, char* str2);

#endif // LINKED_LIST_H
