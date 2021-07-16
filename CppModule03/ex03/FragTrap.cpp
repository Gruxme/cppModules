/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 23:05:33 by abiari            #+#    #+#             */
/*   Updated: 2021/07/16 23:18:06 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap()
{
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called!\n";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDmg = 30;
}

FragTrap::FragTrap( const FragTrap & src )
{
	this->operator=(src);
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called!\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

void FragTrap::attack(std::string const &target)
{
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDmg << " points of damage!\n";
}

void FragTrap::takeDamage(unsigned int amount)
{

	std::cout << "FragTrap " << this->_name << " takes " << amount << " damage!\n";
}

void FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FragTrap " << this->_name << " restores " << amount << " hit points!\n";
}

void	FragTrap::highFivesGuy( void )
{
	std::cout << "high fives here mofos!\n";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
