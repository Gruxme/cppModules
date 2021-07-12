/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 13:09:57 by abiari            #+#    #+#             */
/*   Updated: 2021/07/12 14:23:37 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{

	public:

		Zombie( std::string name);
		~Zombie();
		std::string	getName( void );
		void		announce( void );
	private:
		std::string	_name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif /* ********************************************************** ZOMBIE_H */
