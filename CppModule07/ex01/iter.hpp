#pragma once
#include <iostream>
#include <time.h>

template <typename T>
void	iter(T* array, int len, void (*func)(T const &))
{
	for (int i = 0; i < len; i++)
	{
		func(array[i]);
	}
}

template <typename T>
void	printArray(T& array)
{
	std::cout << array << " ";
}
