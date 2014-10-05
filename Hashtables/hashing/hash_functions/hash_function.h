#ifndef HASH_FUNCTION_H
#define HASH_FUNCTION_H

class HashFunction
{
public:
	virtual int get_key(char* str) = 0;
};

#endif // HASH_FUNCTION_H
