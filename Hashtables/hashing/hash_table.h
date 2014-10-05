#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include "lists/linked_list.h"
#include "hash_functions/hash_function_chars_and_degrees.h"

const int ARRAY_SIZE = 177;

class HashTable
{
public:
	HashTable(int max_element_length, HashFunction* function);
	~HashTable();
	void add_string(char* str);
	void remove_string(char* str);
	bool check_existence(char* str);
	void print();
private:
	LinkedList hash_array[ARRAY_SIZE];
	int max_string_length;
	HashFunction* hash_function;
	int elements_count;
};

#endif // HASH_TABLE_H
