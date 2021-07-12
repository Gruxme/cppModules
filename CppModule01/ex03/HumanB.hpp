#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{

	public:

		HumanB();
		HumanB( std::string name );
		~HumanB();
		void	attack( void );
		void	setWeapon( Weapon& type );

	private:

		Weapon*		_weapon;
		std::string	_name;

};

#endif /* ********************************************************** HUMANB_H */
