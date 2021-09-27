#include "serialization.hpp"

int main(void)
{
	Data *ptr = new Data;
	uintptr_t raw;

	ptr->testVar = 42;
	ptr->testVar2 = '*';
	std::cout << "Data ptr before cast: " << ptr << std::endl;
	raw = serialize(ptr);
	std::cout << "Data ptr cast to uint: " << raw << std::endl;
	ptr = deserialize(raw);
	std::cout << "Data ptr after recast: " << ptr << std::endl;
	std::cout << ptr->testVar2 << " " << ptr->testVar << std::endl;
	return 0;
}

