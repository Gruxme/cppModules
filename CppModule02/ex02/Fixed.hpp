/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 15:50:38 by abiari            #+#    #+#             */
/*   Updated: 2021/07/13 20:54:22 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{

	public:
		Fixed();
		Fixed( int const nbr );
		Fixed( float const nbr );
		Fixed( Fixed const & src );
		~Fixed();

		Fixed &		operator=( Fixed const & rhs );
		
		bool		operator>( Fixed const & rhs );
		bool		operator<( Fixed const & rhs );
		bool		operator<=( Fixed const & rhs );
		bool		operator>=( Fixed const & rhs );
		bool		operator==( Fixed const & rhs );
		bool		operator!=( Fixed const & rhs );

		Fixed &		operator+( Fixed const & rhs );
		Fixed &		operator-( Fixed const & rhs );
		Fixed &		operator*( Fixed const & rhs );
		Fixed &		operator/( Fixed const & rhs );

		Fixed &		operator++();
		Fixed &		operator--();
		Fixed		operator++( int );
		Fixed		operator--( int );
		
		int			getRawBits( void ) const;
		void		setRawBits( int const raw );
		float		toFloat( void ) const;
		int			toInt( void ) const;
		static Fixed &	min( Fixed& value1, Fixed& value2 );
		static Fixed &	min( Fixed& const value1, Fixed& const value2 );
		static Fixed &	max( Fixed& value1, Fixed& value2 );
		static Fixed &	max( Fixed& const value1, Fixed& const value2 );
		
	private:

		int					_fixedPointValue;
		static const int	_fractionalBitsNumber = 8;
};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif /* *********************************************************** FIXED_H */
