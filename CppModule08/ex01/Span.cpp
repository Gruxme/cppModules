#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span( unsigned int N ) : _intList() ,_maxSize(N)
{
}

Span::Span(Span const & src)
{
	this->operator=(src);
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span & Span::operator=(Span const & src)
{
	this->_maxSize = src._maxSize;
	this->_intList = src._intList;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Span::addNumber( int nbr )
{
	if (_intList.size() < this->_maxSize)
		_intList.push_back(nbr);
	else
		throw Span::containerFull();
}

void	Span::addRandomRange( unsigned int n )
{
	int currentSize = this->_intList.size();
	srand(time(NULL));
	for (size_t i = 0; i < n; i++)
	{
		if (i + currentSize < this->_maxSize)
			this->_intList.push_back(rand());
		else
			throw Span::containerFull();
	}
	
}

int		Span::shortestSpan( void )
{
	if (this->_intList.size() <= 1)
		throw Span::noSpanAvailable();
	int shortest = abs(this->_intList[1] - this->_intList[0]);
	for (unsigned int i = 0; i < Span::_maxSize; i++)
	{
		for (unsigned int j = i + 1; j < Span::_maxSize; j++)
		{
			if (abs(this->_intList[j] - this->_intList[i]) < shortest)
				shortest = abs(this->_intList[j] - this->_intList[i]);
		}
	}
	return shortest;
}

int		Span::longestSpan( void )
{
	if (this->_intList.size() <= 1)
		throw Span::noSpanAvailable();
	int max = *std::max_element(this->_intList.begin(), this->_intList.end());
	int min = *std::min_element(this->_intList.begin(), this->_intList.end());
	return (max - min);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/*
** --------------------------------- EXCEPTIONS ---------------------------------
*/

Span::noSpanAvailable::noSpanAvailable() throw() {}
Span::noSpanAvailable::~noSpanAvailable() throw() {}
const char* Span::noSpanAvailable::what() const throw()
{
	return "Not enough elements to find a span!";
}

Span::containerFull::containerFull() throw() {}
Span::containerFull::~containerFull() throw() {}
const char* Span::containerFull::what() const throw()
{
	return "Container Full";
}
/* ************************************************************************** */
