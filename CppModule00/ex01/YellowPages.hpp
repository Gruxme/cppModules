/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   YellowPages.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 09:03:17 by abiari            #+#    #+#             */
/*   Updated: 2021/07/11 11:30:29 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef YELLOWPAGES_HPP
# define YELLOWPAGES_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact
{

	public:

		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickname(void);
		std::string	getPhoneNumber(void);
		std::string	getDarkestSecret();
		void		setFirstName(std::string value);
		void		setLastName(std::string value);
		void		setNickname(std::string value);
		void		setPhoneNumber(std::string value);
		void		setDarkestSecret(std::string value);

	private:

	std::string	_FirstName;
	std::string	_LastName;
	std::string	_Nickname;
	std::string	_PhoneNumber;
	std::string	_DarkestSecret;

};

class YellowPages
{

	public:

		YellowPages();
		Contact*	getContact(int const index);
		void		setContact(int const index);
		static int	getContactsFilled(void);

	private:

	Contact		_Contacts[8];
	static int	_ContactsFilled;
};

#endif /* ***************************************************** YELLOWPAGES_H */
