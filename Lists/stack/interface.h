#ifndef INTERFACE_H
#define INTERFACE_H

#include <iostream>

#include "list_stack.h"
#include "array_stack.h"

using namespace std;

Stack* createStack(int command);
void interface(Stack* stack);
#endif // INTERFACE_H
