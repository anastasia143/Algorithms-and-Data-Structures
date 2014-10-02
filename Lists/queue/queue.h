#ifndef QUEUE_H
#define QUEUE_H

class Queue
{
public:
	virtual void engueue(int value) = 0;
	virtual void dequeue() = 0;
	virtual int top() = 0;
	bool empty()
	{
		return (size == 0);
	}
	int get_size()
	{
		return size;
	}
protected:
	int size;
};

#endif // QUEUE_H
