#pragma once
#include "I_Iterable.h"

class Array: public I_Iterable
{
private:
	double* data = nullptr;
	int size;
public:
	void push(double data);
	double pop();
	I_Iterator* begin();
	I_Iterator* end();
	bool empty();
	int get_size();
	double* get_data();
};

