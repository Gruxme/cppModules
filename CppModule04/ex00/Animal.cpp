#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal() : _type("")
{
	std::cout << "Animal Constructor called!\n";
}

Animal::Animal( std::string type ) : _type(type)
{
	std::cout << "Animal Parameterized Constructor called!\n";
}

Animal::Animal( const Animal & src )
{
	this->operator=(src);
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "Animal Destructor called!\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Animal const & i )
{
	o << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Animal::makeSound( void ) const
{
	std::cout << "NaN\n";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Animal::getType( void ) const
{
	return this->_type;
}

/* ************************************************************************** */
