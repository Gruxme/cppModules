/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 21:56:31 by abiari            #+#    #+#             */
/*   Updated: 2021/07/12 21:56:32 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
