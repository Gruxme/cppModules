#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() : Animal("Cat"), _brain(new Brain())
{
	std::cout << "Cat Constructor called!\n";
}

Cat::Cat( const Cat & src ) : Animal("Cat")
{
	this->operator=(src);
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat Destructor called!\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &	Cat::operator=( Cat const & rhs )
{
	this->_brain = new Brain();
	if ( this != &rhs )
	{
		this->_brain->operator=(*(rhs._brain));
	}
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

Brain*	Cat::getBrain( void )
{
	return this->_brain;
}

/* ************************************************************************** */
