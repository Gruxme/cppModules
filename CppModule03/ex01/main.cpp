/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 10:55:22 by abiari            #+#    #+#             */
/*   Updated: 2021/07/16 22:56:32 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main( void )
{
	ScavTrap	Scav("spoody");
	ClapTrap	Clap("Qbeast");

	Clap.attack("student");
	Clap.takeDamage(7);
	Clap.beRepaired(5);
	std::cout << Clap << std::endl;

	Scav.attack("piscineux");
	Scav.takeDamage(7);
	Scav.beRepaired(5);
	Scav.guardGate();
	std::cout << Scav << std::endl;
	return 0;
}
