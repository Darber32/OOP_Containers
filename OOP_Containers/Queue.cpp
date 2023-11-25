#include "Queue.h"
#include "Queue_Iterator.h"

void Queue::push(double data)
{
	Data* d = new Data;
	d->data = data;
	d->next = NULL;
	if (head == NULL)
	{
		head = d;
		tail = d;
	}
	else
	{
		tail->next = d;
		tail = d;
	}
	size++;
}

double Queue::pop()
{
	if (head == NULL)
		return INT_MIN;
	int tmp = head->data;
	if (head == tail)
		tail = NULL;
	Data* d = head;
	head = head->next;
	delete d;
	size--;
	return tmp;
}

I_Iterator* Queue::begin()
{
	Queue_Iterator* a = new Queue_Iterator(this, 0);
	return (I_Iterator*)a;
}

I_Iterator* Queue::end()
{
	Queue_Iterator* a = new Queue_Iterator(this,size);
	return (I_Iterator*)a;
}

bool Queue::empty()
{
	return head == nullptr;
}

int Queue::get_size()
{
	return size;
}

double* Queue::get_data(int index)
{
	Data* cur = head;
	if (index > 0)
		for (int i = 0; i < index and cur->next != nullptr; i++)
			cur = cur->next;
	return &cur->data;
}
