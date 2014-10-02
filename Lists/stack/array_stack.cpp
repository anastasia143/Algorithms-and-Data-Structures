#include "array_stack.h"

ArrayStack::ArrayStack()
{
	array = new int[10000];
	for(int i = 0; i < 10000; i++)
	array[i] = 0;
	size = 0;
}
ArrayStack::~ArrayStack()
{
	delete[] array;
}

void ArrayStack::push(int value)
{
	array[size] = value;
	size++;
}

void ArrayStack::pop()
{
	if (size == 0)
	{
		cout << "Stack is empty";
		return;
	}
	size--;
	array[size] = NULL;
}

int ArrayStack::top()
{
	return array[size - 1];
}
