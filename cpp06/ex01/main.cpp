#include <iostream>
#include "Data.h"
#include <stdint.h>

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main()
{
	Data data;
	Data *retData;

	data.c = 'b';
	data.i = 98;
	data.d = 98.01;
	data.f = 98.01f;
	retData = deserialize(serialize(&data));
	std::cout << "char was: " << data.c <<
			  ", char is: " << retData->c << std::endl;
	std::cout << "int was: " << data.i <<
			  ", int is: " << retData->i << std::endl;
	std::cout << "float was: " << data.f <<
			  ", float is: " << retData->f << std::endl;
	std::cout << "double was: " << data.d <<
			  ", double is: " << retData->d << std::endl;
	return 0;
}
