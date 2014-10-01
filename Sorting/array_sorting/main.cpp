#include <QCoreApplication>
#include <iostream>

#include "quick_sort.h"

using namespace std;

int main()
{
	int size = 7;
	int* array = new int[size];

	for(int i = 0; i < size; i++)
	{
		array[i] = rand() % size;
		cout << array[i] << " ";
	}

	quick_sort(size, array);

	cout << endl;

	for(int i = 0; i < size; i++)
		cout << array[i] << " ";
	return 0;
}
