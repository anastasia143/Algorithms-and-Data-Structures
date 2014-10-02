#include <QCoreApplication>
#include "interface.h"

int main()
{
	List* list = new LinkedList;
	interface(list);
	delete list;
	return 0;
}
