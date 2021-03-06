#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure( const Cure & src ) : AMateria("cure")
{
	this->operator=(src);
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure & Cure::operator=(Cure const &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria*	Cure::clone() const
{
	AMateria* returnObj = new Cure();

	return returnObj;
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " + target.getName() + "'s wounds *\n";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
