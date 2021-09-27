#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <exception>
# include <algorithm>
# include <vector>
# include <cstdlib>

class Span
{

	public:

		Span( unsigned int N );
		Span( Span const & src );
		virtual ~Span();
		Span & operator=(Span const & src);
		void	addNumber( int nbr );
		void	addRandomRange( unsigned int n );
		int		shortestSpan( void );
		int		longestSpan( void );

		class noSpanAvailable : public std::exception
		{
			public:
				noSpanAvailable() throw();
				virtual ~noSpanAvailable() throw();
				virtual const char* what() const throw();
		};
		class containerFull : public std::exception
		{
			public:
				containerFull() throw();
				virtual ~containerFull() throw();
				virtual const char* what() const throw();
		};
		
	private:
		std::vector<int> _intList;
		unsigned int	_maxSize;
};

#endif /* ************************************************************ SPAN_H */
