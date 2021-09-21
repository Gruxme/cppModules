#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria(std::string const & type) : _type(type)
{
}

AMateria::AMateria(AMateria const &src)
{
	this->operator=(src);
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria & AMateria::operator=(AMateria const & rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &	AMateria::getType( void ) const
{
	return this->_type;
}

/* ************************************************************************** */
