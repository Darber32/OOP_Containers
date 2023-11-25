#pragma once
#include <iostream>

class I_Iterator
{
public:
	virtual void next() = 0;
	virtual void prev() = 0;
	virtual void* get() = 0;
	virtual bool is_equal(I_Iterator * iter) = 0;
}; 
