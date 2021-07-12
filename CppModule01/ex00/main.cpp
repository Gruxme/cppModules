/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 14:18:46 by abiari            #+#    #+#             */
/*   Updated: 2021/07/12 14:27:27 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	Zombie*	returnedInstance;

	returnedInstance = newZombie("Lurker");
	returnedInstance->announce();
	delete returnedInstance;
	randomChump("Creeper");
	return 0;
}
