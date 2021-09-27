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
	it = std::find(toSearch.begin(), toSearch.end(), toFind);
	if (*it != toFind)
		throw std::string("Not found");
	std::cout << "Found: " << toFind << std::endl;
}
