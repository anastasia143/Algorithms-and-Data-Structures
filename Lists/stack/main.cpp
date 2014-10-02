#include <QCoreApplication>
#include <iostream>

#include "interface.h"

using namespace std;

int main()
{
	cout << "What kind of stack do you want to create?" <<
	endl << "1 - List Stack" <<
	endl << "2 - Array Stack" << endl;

	int command = 0;
	cin >> command;

	Stack* stack = create_stack(command);
	interface(stack);
	delete stack;

	return 0;
}
