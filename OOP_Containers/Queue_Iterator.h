#pragma once
#include "I_Iterator.h"
#include "Queue.h"

class Queue_Iterator: I_Iterator
{
	Queue* p;
	int index;
public:
	Queue_Iterator(Queue* p, int index);
	//~Queue_Iterator();
	void next();
	void prev();
	void* get();
	bool is_equal(I_Iterator* iter);
};

