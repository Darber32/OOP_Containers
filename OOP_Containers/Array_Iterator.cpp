#include "Array_Iterator.h"


Array_Iterator::Array_Iterator(Array* p, int index)
{
	this->p = p;
	this->index = index;
}



void Array_Iterator::next()
{
	index++;
}

void Array_Iterator::prev()
{
	index--;
}

void* Array_Iterator::get()
{
	return &p->get_data()[index];
}

bool Array_Iterator::is_equal(I_Iterator* iter)
{
	Array_Iterator* new_iter = (Array_Iterator*)iter;
	return (this->p == new_iter->p and this->index == new_iter->index);
}
