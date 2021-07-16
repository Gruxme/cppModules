/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 23:05:29 by abiari            #+#    #+#             */
/*   Updated: 2021/07/16 23:36:32 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap()
{
}

DiamondTrap::DiamondTrap( std::string name) : ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap constructor called! \n";
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDmg = FragTrap::_attackDmg;
	
}

DiamondTrap::DiamondTrap( const DiamondTrap & src )
{
	this->operator=(src);
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

void DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount)
{

	std::cout << "DiamondTrap " << this->_name << " takes " << amount << " damage!\n";
}

void DiamondTrap::beRepaired(unsigned int amount)
{
	std::cout << "DiamondTrap " << this->_name << " restores " << amount << " hit points!\n";
}

void	DiamondTrap::guardGate( void )
{
	ScavTrap::guardGate();
}

void	DiamondTrap::highFivesGuy( void )
{
	FragTrap::highFivesGuy();
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "My name is : " << this->_name << " and my ClapTrap is : " << ClapTrap::_name << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
