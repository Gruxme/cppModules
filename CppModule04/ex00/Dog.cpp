#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog Constructor called!\n";
}

Dog::Dog( const Dog & src )
{
	this->operator=(src);
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "Dog Destructor called!\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog&	Dog::operator=(Dog const & rhs)
{
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Dog::makeSound() const
{
	std::cout << "Woof Woof\n";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
