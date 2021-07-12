#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{

	public:

		HumanA( std::string name, Weapon& type ) : _weapon(type), _name(name) {}
		~HumanA();
		void	attack( void );

	private:

	Weapon&	_weapon;
	std::string	_name;
	
	HumanA();
};

#endif /* ********************************************************** HUMANA_H */
