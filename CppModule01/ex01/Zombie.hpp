/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 13:09:57 by abiari            #+#    #+#             */
/*   Updated: 2021/07/12 15:33:13 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{

	public:

		Zombie( void );
		~Zombie();
		void		setZombieName( std::string name );
		std::string	getName( void );
		void		announce( void );
	private:
		std::string	_name;
};

Zombie* zombieHorde( int N, std::string name );

#endif /* ********************************************************** ZOMBIE_H */
