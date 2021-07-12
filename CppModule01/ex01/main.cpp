/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 14:18:46 by abiari            #+#    #+#             */
/*   Updated: 2021/07/12 14:57:28 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	Zombie*	horde;
	
	horde = zombieHorde(6, "Lurker");
	for (int i = 0; i < 6; i++)
	{
		horde[i].announce();
	}
	
	delete [] horde;
	return 0;
}
