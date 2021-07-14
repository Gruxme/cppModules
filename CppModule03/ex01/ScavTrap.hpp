/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:03:16 by abiari            #+#    #+#             */
/*   Updated: 2021/07/14 12:57:26 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap : public ClapTrap
{

	public:

		ScavTrap( std::string name );
		ScavTrap( ScavTrap const & src );
		~ScavTrap();
		
		void	guardGate( void );

	private:

		ScavTrap();
};

#endif /* ******************************************************** SCAVTRAP_H */
