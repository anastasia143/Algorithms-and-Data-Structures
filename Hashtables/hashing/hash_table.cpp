#include "hash_table.h"

HashTable::HashTable(int max_element_length, HashFunction* function)
{
	max_string_length = max_element_length;
	hash_function = function;
	elements_count = 0;
}

HashTable::~HashTable()
{
}

void HashTable::add_string(char* str)
{
	int key = hash_function->get_key(str);
	if (hash_array[key].check(str))
	{
		cout << "This element has already added." << endl;
		return;
	}
	hash_array[key].add(str);
	bool d = hash_array[key].check(str);
	elements_count++;
}

void HashTable::remove_string(char *str)
{
	int key = hash_function->get_key(str);
	if (hash_array[key].check(str))
		hash_array[key].remove(str);
	else
	{
		cout << "There is no this element in the table." << endl;
		return;
	}
	elements_count--;
}

bool HashTable::check_existence(char* str)
{
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		if (hash_array[i].check(str))
			return true;
	}
	return false;
}

void HashTable::print()
{
	if (elements_count == 0)
	{
		cout << "Table is empty";
		return;
	}
	for(int i = 0; i < ARRAY_SIZE; i++)
		hash_array[i].print();
}
