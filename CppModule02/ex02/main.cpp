/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 15:44:07 by abiari            #+#    #+#             */
/*   Updated: 2021/07/14 08:37:07 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed c(4.2f);
	Fixed d(13.37f);
	
	std::cout << "Increment/decrement Operators\n";
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << "\nArithmetic Operators\n";
	std::cout << "nbr1: " << c << std::endl;
	std::cout << "nbr2: " << d << std::endl;
	std::cout << "nbr1 + nbr2 :" << c + d << std::endl;
	c = Fixed(4.2f);
	d = Fixed(13.37f);
	std::cout << "nbr2 - nbr1 :" << d - c << std::endl;
	c = Fixed(4.2f);
	d = Fixed(13.37f);
	std::cout << "nbr2 * nbr1 :" << d * c << std::endl;
	c = Fixed(4.2f);
	d = Fixed(13.37f);
	std::cout << "nbr2 / nbr1 :" << d / c << std::endl;
	
	std::cout << "\nComparison Operators\n";
	c = Fixed(4.2f);
	d = Fixed(13.37f);
	std::cout << "nbr1 > nbr2 :" << (c > d) << std::endl;
	c = Fixed(4.2f);
	d = Fixed(13.37f);
	std::cout << "nbr1 < nbr2 :" << (c < d) << std::endl;
	c = Fixed(4.2f);
	d = Fixed(13.37f);
	std::cout << "nbr1 >= nbr2 :" << (c >= d) << std::endl;
	c = Fixed(4.2f);
	d = Fixed(13.37f);
	std::cout << "nbr1 <= nbr2 :" << (c <= d) << std::endl;
	c = Fixed(4.2f);
	d = Fixed(13.37f);
	std::cout << "nbr1 == nbr2 :" << (c == d) << std::endl;
	c = Fixed(4.2f);
	d = Fixed(13.37f);
	std::cout << "nbr1 != nbr2 :" << (c != d) << std::endl;
	
	c = Fixed(4.2f);
	d = Fixed(13.37f);
	std::cout << "max of nbr1 and nbr2 is :" << Fixed::max(c, d) << std::endl;
	c = Fixed(4.2f);
	d = Fixed(13.37f);
	std::cout << "min of nbr1 and nbr2 is :" << Fixed::min(c, d) << std::endl;
	
	return 0;
}
