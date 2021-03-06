/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 21:56:28 by abiari            #+#    #+#             */
/*   Updated: 2021/07/12 21:56:29 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
