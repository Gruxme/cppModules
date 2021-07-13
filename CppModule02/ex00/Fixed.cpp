/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 15:50:40 by abiari            #+#    #+#             */
/*   Updated: 2021/07/13 15:54:24 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->_fixedPointValue = 0;
}

Fixed::Fixed( const Fixed & src )
{
	std::cout << "Copy constructor called\n";
	// this->_fixedPointValue = src.getRawBits(); <--- This works too
	this->operator=(src);
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Assignation operator called\n";
	if ( this != &rhs )
	{
		this->_fixedPointValue = rhs.getRawBits();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return this->_fixedPointValue;
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called\n";
	this->_fixedPointValue = raw;
}

/* ************************************************************************** */
