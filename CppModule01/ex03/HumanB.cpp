#include "HumanB.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

HumanB::HumanB() {}

HumanB::HumanB( std::string name ) : _name(name) {}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

HumanB::~HumanB()
{
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	HumanB::attack( void )
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void	HumanB::setWeapon( Weapon& type )
{
	this->_weapon = &type;
}

/* ************************************************************************** */
