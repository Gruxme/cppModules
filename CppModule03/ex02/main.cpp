/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 10:55:22 by abiari            #+#    #+#             */
/*   Updated: 2021/07/14 17:35:14 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main( void )
{
	FragTrap	Scav("spoody");
	ClapTrap	Clap("Qbeast");

	Clap.attack("student");
	Clap.takeDamage(7);
	Clap.beRepaired(5);

	Scav.attack("piscineux");
	Scav.takeDamage(7);
	Scav.beRepaired(5);
	Scav.highFivesGuy();
	return 0;
}
