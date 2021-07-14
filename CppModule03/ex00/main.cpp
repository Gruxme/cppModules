/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 10:55:22 by abiari            #+#    #+#             */
/*   Updated: 2021/07/14 11:00:22 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap	Instance("spoody");

	Instance.attack("piscineux");
	Instance.takeDamage(7);
	Instance.beRepaired(5);
	return 0;
}
