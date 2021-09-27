#include "Span.hpp"

int main()
{
	Span sp = Span(10);

	
	// sp.addNumber(5);
	
	try
	{
		sp.addRandomRange(10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
}
