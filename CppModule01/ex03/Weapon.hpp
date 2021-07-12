/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 19:44:05 by abiari            #+#    #+#             */
/*   Updated: 2021/07/12 20:02:32 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{

	public:

		Weapon();
		Weapon( std::string type);
		~Weapon();
		const std::string&	getType( void );
		void	setType( std::string type );

	private:
		std::string	_type;
};

#endif /* ********************************************************** WEAPON_H */
