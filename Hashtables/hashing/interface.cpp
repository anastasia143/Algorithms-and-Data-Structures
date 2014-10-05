#include "interface.h"

void interface(HashTable* table)
{
	cout << "You have commands: "
		 << endl << "0 - exit"
		 << endl << "1 - add value"
		 << endl << "2 - remove value"
		 << endl << "3 - check availability value in the table"
		 << endl << "4 - print table"
		 << endl << endl;
	int command  = 1;

	cout << endl << "Enter command: ";
	cin >> command;

	char* str = new char[100];
	clear(str);

	while(command != 0)
	{
		switch(command)
		{
		case 1:
		{
			cout << "Enter string for adding: ";
			cin >> str;
			table->add_string(str);
		break;
		}
		case 2:
		{
			cout << "Enter string for removing: ";
			cin >> str;
			table->remove_string(str);
			break;
		}
		case 3:
		{
			cout << "Enter string for checking: ";
			cin >> str;
			if (table->check_existence(str))
				cout << "True.";
			else
				cout << "False.";
			cout << endl;
			break;
		}
		case 4:
		{
			table->print();
		}
		default:
		{
			command = 0;
			break;
		}
		}
		cout << endl << "Enter command: ";
		cin >> command;
		clear(str);
	}

}

void clear(char* str)
{
	for(int i = 0; i < 100; i++)
		str[i] = '\n';
}
