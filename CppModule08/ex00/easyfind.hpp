#pragma once

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <string>

template <typename T>
void	easyfind(T &toSearch, int toFind)
{
	typename T::const_iterator it;
	for (it = toSearch.cbegin(); it < toSearch.cend(); it++)
	{
		if (*it == toFind)
		{
			std::cout << "Found!" << std::endl;
			return;
		}
	}
	throw std::string("Not found");
}
