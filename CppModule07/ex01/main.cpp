#include "iter.hpp"

int	main(void)
{
	
	int		intArray[5] = {1, 2, 5, 844, 22};
	float	floatArray[5] = {1.0, 2.25, 5.22, 844.121, 22.42};
	char	charArray[9] = "test1337";
	
	std::cout << "int array\n";
	iter(intArray, 5, printArray);
	std::cout << "\nfloat array\n";
	iter(floatArray, 5, printArray);
	std::cout << "\nchar array\n";
	iter(charArray, 8, printArray);
	return 0;
}
