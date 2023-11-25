#include "Array.h"
#include "Array_Iterator.h"

void Array::push(double data)
{
	double* new_data = new double[size + 1];
	for (int i = 0; i < size; i++)
		new_data[i] = this->data[i];
	if (this->data != nullptr)
		delete[] this->data;
	this->data = new_data;
	this->data[size++] = data;
}

double Array::pop()
{
	if (size > 0)
	{
		double tmp = data[size - 1];
		double* new_data = new double[size - 1];
		for (int i = 0; i < size - 1; i++)
			new_data[i] = data[i];
		delete[] data;
		data = new_data;
		size--;
		if (size == 0)
			data = nullptr;
		return tmp;
	}
}

I_Iterator* Array::begin()
{
	Array_Iterator * a = new Array_Iterator(this, 0);
	return (I_Iterator*)a;
}

I_Iterator* Array::end()
{
	Array_Iterator * a = new Array_Iterator(this, size);
	return (I_Iterator*)a;
}

bool Array::empty()
{
	return data == nullptr;
}

int Array::get_size()
{
	return size;
}

double* Array::get_data()
{
	return data;
}
