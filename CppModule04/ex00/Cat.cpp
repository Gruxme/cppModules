#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat Constructor called!\n";
}

Cat::Cat( const Cat & src )
{
	this->operator=(src);
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << "Cat Destructor called!\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat&	Cat::operator=(Cat const & rhs)
{
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Cat::makeSound() const
{
	std::cout << "Mgheeeeow eow\n";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
