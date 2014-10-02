#ifndef LIST_H
#define LIST_H
#include <iostream>

using namespace std;

class List
{
public:
	virtual void add(int value) = 0;
	virtual void remove(int value) = 0;
	virtual void print() = 0;
	virtual bool check(int value) = 0;
};

#endif // LIST_H
