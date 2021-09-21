/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 21:05:21 by abiari            #+#    #+#             */
/*   Updated: 2021/09/19 17:39:21 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main( int argc, char **argv )
{
	if (argc != 4)
	{
		std::cout << "Usage: File stringToReplace stringToreplaceItWith\n";
		return 1;
	}
	else
	{
		std::string		out;
		std::string		line;
		std::ifstream	ifs(argv[1]);
		if (ifs.fail())
		{
			std::cout << argv[1] << "no such file\n";
			return 1;
		}
		std::ofstream	ofs(out.append(argv[1]).append(".replace"));
		while (!ifs.eof())
		{
			getline(ifs, line);
			size_t	a = line.find(argv[2], 0);
			while (a != std::string::npos)
			{
				line.replace(a, strlen(argv[2]), argv[3]);
				a = (int)line.find(argv[2], a + 1);
			}
			ofs << line + "\n";
		}
		ifs.close();
		ofs.close();
	}
	return 0;
}
