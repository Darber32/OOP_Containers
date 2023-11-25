#include "Queue_Iterator.h"

Queue_Iterator::Queue_Iterator(Queue* p, int index)
{
	this->p = p;
	this->index = index;
}

void Queue_Iterator::next()
{
	index++;
}

void Queue_Iterator::prev()
{
	index--;
}

void* Queue_Iterator::get()
{
	return p->get_data(index);
}

bool Queue_Iterator::is_equal(I_Iterator* iter)
{
	Queue_Iterator* new_iter = (Queue_Iterator*)iter;
	return (this->p == new_iter->p and this->index == new_iter->index);
}
