#include "hash_function_chars_and_degrees.h"

int HashFunctionCharsAndDegrees::get_key(char* str)
{
	int len = strlen(str);
	int long long result = 50;
	int long long degree = 31;
	for (int i = 0; i < len; i++)
	{
		degree = degree * degree;
		result = result + ((int)str[i]) * degree;
	}
	if (result < 0)
			result = -result;
	int result2 = result % 29;
	return (result2);
}
