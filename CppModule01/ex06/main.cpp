/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 09:49:41 by abiari            #+#    #+#             */
/*   Updated: 2021/07/13 10:53:31 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

level	levelType(std::string const& type)
{
	if (type == "DEBUG")
		return debug;
	if (type == "INFO")
		return info;
	if (type == "WARNING")
		return warning;
	if (type == "ERROR")
		return error;
	return notImportant;
}

int	main( int argc, const char **argv )
{
	Karen	karen;
	
	if (argc != 2)
	{
		std::cout << "Only takes one parameter\n";
		return 1;
	}
	else
	{
		switch (levelType(argv[1]))
		{
		case debug:
			karen.complain("DEBUG");
			karen.complain("INFO");
			karen.complain("WARNING");
			karen.complain("ERROR");
			break;
		case info:
			karen.complain("INFO");
			karen.complain("WARNING");
			karen.complain("ERROR");
			break;
		case warning:
			karen.complain("WARNING");
			karen.complain("ERROR");
			break;
		case error:
			karen.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n\n";
			break;
		}
	}
	return 0;
}
