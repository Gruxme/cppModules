#include "easyfind.hpp"

int main( void )
{
	srand(time(NULL));

	std::vector<int>	vect;
	for (size_t i = 0; i < 10; i++)
	{
		vect.push_back(rand() % 100);
		std::cout << vect[i] << " ";
	}
	std::cout << std::endl;
	vect.push_back(10);
	// vect.push_back(20);
	try
	{
		easyfind(vect, 10);
		easyfind(vect, 20);
		easyfind(vect, 40);
		easyfind(vect, 52);
		easyfind(vect, 83);
		easyfind(vect, 3);
		easyfind(vect, 19);
	}
	catch(std::string e)
	{
		std::cout << "Error: " << e << std::endl;
	}
	return 0;
}

