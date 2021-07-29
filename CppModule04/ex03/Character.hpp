#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class Character : public ICharacter
{

	public:

		Character();
		Character( std::string name );
		Character( Character const & src );
		virtual ~Character();

		Character	&operator=( Character const & rhs );
		
		virtual std::string const	&getName() const;
		virtual void	equip(AMateria* m);
		virtual void	unequip(int idx);
		virtual void	use(int idx, ICharacter& target);
	private:
		std::string	_name;
		AMateria*	_inventory[4];
};

#endif /* ******************************************************* CHARACTER_H */
