/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 10:55:22 by abiari            #+#    #+#             */
/*   Updated: 2021/07/16 23:02:06 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main( void )
{
	FragTrap	Frag("spoody");
	ClapTrap	Clap("Qbeast");

	Clap.attack("student");
	Clap.takeDamage(7);
	Clap.beRepaired(5);
	std::cout << Clap << std::endl;

	Frag.attack("piscineux");
	Frag.takeDamage(7);
	Frag.beRepaired(5);
	Frag.highFivesGuy();
	std::cout << Frag << std::endl;
	return 0;
}
