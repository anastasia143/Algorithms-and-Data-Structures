#ifndef STACK_H
#define LISTS_STACK_STACK_H
#include <iostream>
#include <stdlib.h>

using namespace std;

class Stack
{
public:
	virtual void push(int value) = 0;
	virtual void pop() = 0;
	virtual int top() = 0;
	bool empty()
	{
		return (size == 0);
	}
	int get_size()
	{
		return size;
	}

protected:
	int size;
};

#endif // STACK_H
