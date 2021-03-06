/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 23:05:41 by abiari            #+#    #+#             */
/*   Updated: 2021/07/16 23:05:42 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

	public:

		FragTrap( std::string name);
		FragTrap( FragTrap const & src );
		~FragTrap();

		void	highFivesGuy( void );

	private:

		FragTrap();
};

#endif /* ******************************************************** FRAGTRAP_H */
