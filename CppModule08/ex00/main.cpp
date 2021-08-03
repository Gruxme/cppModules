#include "easyfind.hpp"

int main( void )
{
	std::vector<int>	vect = {1, 2, 54, 544, 99, 536, 10};
	try
	{
		easyfind(vect, 10);
		easyfind(vect, 20);
	}
	catch(std::string e)
	{
		std::cout << "Error: " << e << std::endl;
	}
	return 0;
}

