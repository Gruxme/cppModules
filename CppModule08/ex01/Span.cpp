#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span( unsigned int N ) : _intList() ,_maxSize(N)
{
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


/* ************************************************************************** */
