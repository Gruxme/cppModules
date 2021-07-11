/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   YellowPages.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 09:03:14 by abiari            #+#    #+#             */
/*   Updated: 2021/07/11 17:02:35 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "YellowPages.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

YellowPages::YellowPages()
{
	for (int i = 0; i < 8; i++)
	{
		this->getContact(i)->setFirstName("");
		this->getContact(i)->setLastName("");
		this->getContact(i)->setNickname("");
		this->getContact(i)->setPhoneNumber("");
		this->getContact(i)->setDarkestSecret("");
	}
	
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Contact::getFirstName(void)
{
	return (this->_FirstName);
}

std::string	Contact::getLastName(void)
{
	return (this->_LastName);
}

std::string	Contact::getNickname(void)
{
	return (this->_Nickname);
}

std::string	Contact::getPhoneNumber(void)
{
	return (this->_PhoneNumber);
}

std::string	Contact::getDarkestSecret(void)
{
	return (this->_DarkestSecret);
}

void		Contact::setFirstName(std::string value)
{
	this->_FirstName = value;
}

void		Contact::setLastName(std::string value)
{
	this->_LastName = value;
}

void		Contact::setNickname(std::string value)
{
	this->_Nickname = value;
}

void		Contact::setPhoneNumber(std::string value)
{
	this->_PhoneNumber = value;
}

void		Contact::setDarkestSecret(std::string value)
{
	this->_DarkestSecret = value;
}

int			YellowPages::getContactsFilled()
{
	return YellowPages::_ContactsFilled;
}

Contact*	YellowPages::getContact(int const index)
{
	return (&this->_Contacts[index]);
}

void		YellowPages::setContact(int const index)
{
	std::string	buff;

	buff.empty();
	std::cout << "\033[1;33mEnter first name: \033[0m" << std::endl;
	getline(std::cin, buff);
	this->getContact(index)->setFirstName(buff);
	std::cout << "\033[1;33mEnter last name: \033[0m" << std::endl;
	getline(std::cin, buff);
	this->getContact(index)->setLastName(buff);
	std::cout << "\033[1;33mEnter nickname: \033[0m" << std::endl;
	getline(std::cin, buff);
	this->getContact(index)->setNickname(buff);
	std::cout << "\033[1;33mEnter phone number: \033[0m" << std::endl;
	getline(std::cin, buff);
	this->getContact(index)->setPhoneNumber(buff);
	std::cout << "\033[1;33mEnter darkest secret: \033[0m" << std::endl;
	getline(std::cin, buff);
	this->getContact(index)->setDarkestSecret(buff);
	YellowPages::_ContactsFilled++;

}

/*
** --------------------------------- NON-MEMBERS ---------------------------------
*/

int	YellowPages::_ContactsFilled = 0;

/* ************************************************************************** */
