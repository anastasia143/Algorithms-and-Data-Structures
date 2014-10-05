#ifndef LIST_H
#define LIST_H
#include <iostream>

using namespace std;

class List
{
public:
	virtual void add(char* value) = 0;
	virtual void remove(char* value) = 0;
	virtual void print() = 0;
	virtual bool check(char* value) = 0;
	int get_size()
	{
		return size;
	}

protected:
	int size;

};

#endif // LIST_H
