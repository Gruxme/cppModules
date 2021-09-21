#include "Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice( const Ice & src ) : AMateria("ice")
{
	this->operator=(src);
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Ice & Ice::operator=(Ice const &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria*	Ice::clone() const
{
	AMateria* returnObj = new Ice();

	return returnObj;
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoot an ice bolt at " + target.getName() + " *\n"; 
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
