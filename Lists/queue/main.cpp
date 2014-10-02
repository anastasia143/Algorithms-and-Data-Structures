#include <QCoreApplication>
#include "interface.h"

int main()
{
	Queue* queue = new ListQueue;
	interface(queue);
	delete queue;

	return 0;
}
