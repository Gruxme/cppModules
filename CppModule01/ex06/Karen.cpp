/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 10:54:17 by abiari            #+#    #+#             */
/*   Updated: 2021/07/13 10:54:18 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Karen::Karen()
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Karen::~Karen()
{
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Karen::complain( std::string level )
{
	std::string	levelType[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	KarenFisher KarenFunctions[4] = {&Karen::_debug, &Karen::_info, &Karen::_warning, &Karen::_error};

	for (int i = 0; i < 4; i++)
	{
		if (levelType[i] == level)
		{
			(this->*KarenFunctions[i])();
			return ;
		}
	}
}

void	Karen::_debug( void )
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI just love it!\n\n";
}

void	Karen::_info(void)
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon cost more money.\n";
	std::cout << "You don’t put enough! If you did I would not have to ask for it!\n\n";
}

void	Karen::_warning(void)
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming here for years and you just started working here last month.\n\n";
}

void	Karen::_error(void)
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable, I want to speak to the manager now.\n\n";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
