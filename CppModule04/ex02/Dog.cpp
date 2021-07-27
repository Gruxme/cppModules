#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : Animal("Dog"), _brain(new Brain())
{
	std::cout << "Dog Constructor called!\n";
}

Dog::Dog( const Dog & src ) : Animal("Cat")
{
	this->operator=(src);
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog Destructor called!\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &	Dog::operator=( Dog const & rhs )
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

void	Dog::makeSound() const
{
	std::cout << "Woof Woof\n";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

Brain*	Dog::getBrain( void )
{
	return this->_brain;
}

/* ************************************************************************** */
