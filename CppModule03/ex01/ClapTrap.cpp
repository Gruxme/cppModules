/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:03:10 by abiari            #+#    #+#             */
/*   Updated: 2021/07/14 17:17:21 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap constructor called\n";
}

ClapTrap::ClapTrap( std::string name ) : _name(name)
{
	std::cout << "ClapTrap constructor called!\n";
	this->_hitPoints = 10;
	this->_attackDmg = 0;
	this->_energyPoints = 10;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	this->operator=(src);
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called!\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->_attackDmg = rhs._attackDmg;
		this->_energyPoints = rhs._energyPoints;
		this->_hitPoints = rhs._hitPoints;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i )
{
	o << i.getName() + " ";
	o << i.getHitPoints() << " ";
	o << i.getEnergyPoints() << " ";
	o << i.getAttackDmg() << " ";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDmg << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{

	std::cout << "ClapTrap " << this->_name << " takes " << amount << " damage!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " restores " << amount << " hit points!\n";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string ClapTrap::getName() const
{
	return this->_name ;
}

unsigned int ClapTrap::getHitPoints() const
{
	return this->_hitPoints ;
}

unsigned int ClapTrap::getEnergyPoints() const
{
	return this->_energyPoints ;
}

unsigned int ClapTrap::getAttackDmg() const
{
	return this->_attackDmg ;
}

void ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void ClapTrap::setHitPoints(unsigned int amount)
{
	this->_hitPoints = amount;
}

void ClapTrap::setEnergyPoints(unsigned int amount)
{
	this->_energyPoints = amount;
}

void ClapTrap::setAttackDmg(unsigned int amount)
{
	this->_attackDmg = amount;
}

/* ************************************************************************** */
