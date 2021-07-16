/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 10:55:22 by abiari            #+#    #+#             */
/*   Updated: 2021/07/16 23:36:57 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main( void )
{
	DiamondTrap	Diamond("spoody");

	Diamond.attack("student");
	Diamond.takeDamage(7);
	Diamond.beRepaired(5);
	Diamond.guardGate();
	Diamond.highFivesGuy();
	Diamond.whoAmI();
	std::cout << Diamond << std::endl;
	return 0;
}
