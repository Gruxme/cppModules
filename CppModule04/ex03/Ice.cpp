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
