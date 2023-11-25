#pragma once
#include "Array.h"
#include "I_Iterator.h"

class Array_Iterator: I_Iterator
{
private:
	Array* p;
	int index;
public:
	Array_Iterator(Array* p, int index);
	//~Array_Iterator();
	void next();
	void prev();
	void* get();
	bool is_equal(I_Iterator* iter);
};

