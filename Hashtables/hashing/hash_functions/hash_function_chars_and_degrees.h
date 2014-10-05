#ifndef HASH_FUNCTION_CHARS_AND_DEGREES_H
#define HASH_FUNCTION_CHARS_AND_DEGREES_H
#include <cstring>

#include "hash_function.h"

class HashFunctionCharsAndDegrees : public HashFunction
{
public:
	int get_key(char* str);
};

#endif // HASH_FUNCTION_CHARS_AND_DEGREES_H
