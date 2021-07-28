#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat bureaucrat1("qaid", 1);
	Bureaucrat bureaucrat2("mqadem", 149);

	try
	{
		bureaucrat1.incGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		bureaucrat2.decGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << bureaucrat1 << std::endl;
	std::cout << bureaucrat2 << std::endl;
	return 0;
}

