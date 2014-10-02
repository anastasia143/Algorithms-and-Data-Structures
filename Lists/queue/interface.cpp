#include "interface.h"

void interface(Queue* queue)
{
	cout << endl << "What do you want to do with your queue?" <<
			endl << "0 - exit" <<
			endl << "1 - enqueue (add new value)" <<
			endl << "2 - dequeue (remove the value)"<<
			endl << "3 - head (get the value)" <<
			endl << "4 - check the queue of emptiness" << endl;

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
			queue->engueue(value);
			break;
		}
		case 2:
		{
			queue->dequeue();
			break;
		}
		case 3:
		{
			if (queue->empty())
				cout << "Queue is empty";
			else
				cout << "The last element in queue: " << queue->top();
			break;
		}
		case 4:
		{
			if (queue->empty())
				cout << "Queue is empty";
			else
				cout << "There are elements in queue";
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
