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
		virtual ~Span();

		void	addNumber( int nbr );
		int		shortestSpan( void );
		int		longestSpan( void );

		class noSpanAvailable : public std::exception
		{
			public:
				noSpanAvailable() throw() {}
				virtual ~noSpanAvailable() throw() {}
				virtual const char* what() const throw()
				{
					return "Not enough elements to find a span!";
				}
		};
		class containerFull : public std::exception
		{
			public:
				containerFull() throw() {}
				virtual ~containerFull() throw() {}
				virtual const char* what() const throw()
				{
					return "Container Full";
				}
		};
		
	private:
		std::vector<int> _intList;
		unsigned int	_maxSize;
};

#endif /* ************************************************************ SPAN_H */
