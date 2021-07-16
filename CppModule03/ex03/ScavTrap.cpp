/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:03:13 by abiari            #+#    #+#             */
/*   Updated: 2021/07/16 23:16:38 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap()
{
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called!\n";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDmg = 20;
}

ScavTrap::ScavTrap( const ScavTrap & src )
{
	this->operator=(src);
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called!\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

void ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDmg << " points of damage!\n";
}

void ScavTrap::takeDamage(unsigned int amount)
{

	std::cout << "ScavTrap " << this->_name << " takes " << amount << " damage!\n";
}

void ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "ScavTrap " << this->_name << " restores " << amount << " hit points!\n";
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap passed into Gate guardian mode!\n";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
