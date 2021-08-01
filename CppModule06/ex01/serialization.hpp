#include <stdint.h>
#include <iostream>

struct Data
{
	int		testVar;
	char	testVar2;
};


uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
