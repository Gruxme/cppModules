/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 13:10:01 by abiari            #+#    #+#             */
/*   Updated: 2021/07/12 14:27:59 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Zombie::Zombie( std::string name ) : _name(name) {}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Zombie::~Zombie()
{
	std::cout << this->_name << " zombie killed!\n";
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Zombie::announce( void )
{
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ...\n";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Zombie::getName( void )
{
	return this->_name;
}

/* ************************************************************************** */
