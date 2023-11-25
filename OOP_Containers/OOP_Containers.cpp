#include <iostream>
#include "I_Iterable.h"
#include "I_Iterator.h"
#include "Array.h"
#include "Array_Iterator.h"
#include "Queue.h"
#include "Queue_Iterator.h"

int main()
{
	Array a;
	a.push(1.2);
	a.push(2.3);
	a.push(13.7);
	a.push(0.5);
	for (I_Iterator* i = a.begin(); !i->is_equal(a.end()); i->next())
		std::cout << *(double*)i->get() << " ";
	std::cout << std::endl;
	Queue b;
	b.push(1.2);
	b.push(2.3);
	b.push(13.7);
	b.push(0.5);
	for (I_Iterator* i = b.begin(); !i->is_equal(b.end()); i->next())
		std::cout << *(double*)i->get() << " ";
	return 0;
}