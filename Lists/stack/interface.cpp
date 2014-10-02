#include "interface.h"

Stack* create_stack(int command)
{
	if(command == 2)
		return new ArrayStack;
	else
		return new ListStack;
}

void interface(Stack* stack)
{
	cout << endl << "What do you want to do with your stack?" <<
			endl << "0 - exit" <<
			endl << "1 - push (add new value)" <<
			endl << "2 - pop (remove the last value)"<<
			endl << "3 - top (get the last value)" <<
			endl << "4 - check the stack of emptiness" <<
			endl << "5 - calculate the expression" <<
			endl << "(Attention! If you enter the 5th command, all elements in stack will be removed)" << endl << endl;

	int command = 8;
	cout << "Enter command: ";
	cin >> command;
	while (command != 0)
	{
		switch(command)
		{
		case 1:
		{
			int value = 0;
			cout << "Enter value for adding: ";
			cin >> value;
			stack->push(value);
			break;
		}
		case 2:
		{
			stack->pop();
			break;
		}
		case 3:
		{
			if (stack->empty())
				cout << "Stack is empty";
			else
				cout << "The last element in stack: " << stack->top();
			break;
		}
		case 4:
		{
			if (stack->empty())
				cout << "Stack is empty";
			else
				cout << "There are elements in stack";
			break;
		}
		default:
		{
			command = 0;
			break;
		}
		}

		cout << endl << endl <<  "Enter command: ";
		cin >> command;
	}
}
