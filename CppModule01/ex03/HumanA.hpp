#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{

	public:

		HumanA();
		HumanA( std::string name, Weapon type );
		~HumanA();
		void	attack( void );

	private:

	Weapon		_weapon;
	std::string	_name;
};

#endif /* ********************************************************** HUMANA_H */
