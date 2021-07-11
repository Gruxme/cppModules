/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 09:03:04 by abiari            #+#    #+#             */
/*   Updated: 2021/07/11 17:03:18 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "YellowPages.hpp"

void	printPhoneBook(YellowPages PhoneBook)
{
	std::string firstName, lastName, nickname;

	std::cout << "\033[1;34m     index|first name| last name|  nickname|\033[0m" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		firstName = PhoneBook.getContact(i)->getFirstName();
		lastName = PhoneBook.getContact(i)->getLastName();
		nickname = PhoneBook.getContact(i)->getNickname();
		if (firstName.empty() && lastName.empty())
			continue ;
		if (firstName.length() > 10)
		{
			firstName.resize(9);
			firstName += ".";
		}
		if (lastName.length() > 10)
		{
			lastName.resize(9);
			lastName += ".";
		}
		if (nickname.length() > 10)
		{
			nickname.resize(9);
			nickname += ".";
		}
		
		std::cout << "\033[1;32m" << std::endl;
		std::cout << std::setw(10);
		std::cout << std::to_string(i + 1) << "|";
		std::cout << std::setw(10);
		std::cout << firstName << "|";
		std::cout << std::setw(10);
		std::cout << lastName << "|";
		std::cout << std::setw(10);
		std::cout << nickname << "|";
		std::cout << "\033[0m" << std::endl;
	}
}

void	printCoordinates(YellowPages PhoneBook, int index)
{
	std::cout << "\033[1;32mPhone Number: \033[0m" << PhoneBook.getContact(index)->getPhoneNumber() << std::endl;
	std::cout << "\033[1;32mDarkest Secret: \033[0m" << PhoneBook.getContact(index)->getDarkestSecret() << std::endl;
}

bool	isNumber(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) 
		it++;
    return !s.empty() && it == s.end();
}

bool	emptyPhoneBook(YellowPages PhoneBook)
{
	std::string firstName, lastName;
	for (int i = 0; i < 8; i++)
	{
		firstName = PhoneBook.getContact(i)->getFirstName();
		lastName = PhoneBook.getContact(i)->getLastName();
		if (!firstName.empty() && !lastName.empty())
			return true;
	}
	return false;
}

int	checkValidIndex(std::string	buffer)
{
	int	index = 0;
	
	while (!isNumber(buffer) || buffer.length() > 1)
	{
		std::cout << "\033[1;31mindex entered do no exist, please enter an existing index.\033[0m" << std::endl;
		getline(std::cin, buffer);
	}
	index = std::stoi(buffer);
	while (index < 1 || index > 8 || index > YellowPages::getContactsFilled())
	{
		std::cout << "\033[1;31mindex entered do no exist, please enter an existing index.\033[0m" << std::endl;
		getline(std::cin, buffer);
		index = std::stoi(buffer);
	}
	return (index);
}

int	main(void)
{
	YellowPages	PhoneBook;
	std::string	buffer;
	int 		index;

	std::cout << "\033[1;36mEnter ADD to add a contact, SEARCH to search for a contact, EXIT to exit program\033[0m" << std::endl;
	while (1)
	{
		std::cout << "\033[1;35mEnter Command: \033[0m";
		getline(std::cin, buffer);
		if (buffer.compare("ADD") == 0)
		{
			if (YellowPages::getContactsFilled() >= 8)
			{
				std::cout << "\033[1;31mPhoneBook is full, would you like to overright a contact? y/n: \033[0m";
				getline(std::cin, buffer);
				while (buffer.compare("y") != 0 && buffer.compare("n") != 0)
				{
					std::cout << "\033[1;31mtype y or n: \033[0m";
					getline(std::cin, buffer);
				}
				if (buffer.compare("y") == 0)
				{
				
					printPhoneBook(PhoneBook);
					std::cout << "\033[1;35mEnter index of contact to overright: \033[0m";
					getline(std::cin, buffer);
					index = checkValidIndex(buffer);
					PhoneBook.setContact(index - 1);
				}
			}
			else
				PhoneBook.setContact(YellowPages::getContactsFilled());
		}
		else if (buffer.compare("SEARCH") == 0)
		{
			if (!emptyPhoneBook(PhoneBook))
			{
				std::cout << "\033[1;31mPhoneBook is still empty, try adding some contacts first.\033[0m" << std::endl;
				continue ;
			}
			printPhoneBook(PhoneBook);
			std::cout << "\033[1;35menter a contact index: \033[0m" << std::endl;
			getline(std::cin, buffer);
			index = checkValidIndex(buffer);
			printCoordinates(PhoneBook, index - 1);
		}
		else if (buffer.compare("EXIT") == 0)
			return (0);
		else
			continue ;
	}
	
}
