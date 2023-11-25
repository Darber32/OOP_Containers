#pragma once
#include "I_Iterable.h"

class Queue: public I_Iterable
{
private:
	class Data
	{
	public:
		double data;
		Data* next;
	};
	Data* head = nullptr, * tail = nullptr;
	int size;
public:
	void push(double data);
	double pop();
	I_Iterator* begin();
	I_Iterator* end();
	bool empty();
	int get_size();
	double* get_data(int index);
};

