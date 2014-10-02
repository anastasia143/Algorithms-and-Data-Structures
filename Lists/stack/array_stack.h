#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H

#include "stack.h"

class ArrayStack : public Stack
{
public:
	ArrayStack();
	~ArrayStack();
	void push(int value);
	void pop();
	int top();
protected:
	int* array;
};

#endif // ARRAY_STACK_H
