#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Constructor called!\n";
}

WrongCat::WrongCat( const WrongCat & src )
{
	this->operator=(src);
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called!\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat & WrongCat::operator=(const WrongCat & rhs)
{
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	WrongCat::makeSound() const
{
	std::cout << "Mgheeeeow eow (from wrong cat)\n";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
