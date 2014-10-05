#include <QCoreApplication>
#include "interface.h"
#include "hash_functions/hash_function_chars_and_degrees.h"

int main()
{
	HashFunction* hash_function = new HashFunctionCharsAndDegrees;
	HashTable* table = new HashTable(100, hash_function);

	interface(table);

	return 0;
}
