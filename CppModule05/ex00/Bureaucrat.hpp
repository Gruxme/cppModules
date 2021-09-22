#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat
{
	public:

		Bureaucrat( std::string name, int grade );
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		std::string const	getName( void ) const;
		int					getGrade( void ) const;

		Bureaucrat &		operator=( Bureaucrat const & rhs );

		void	incGrade( void );
		void	decGrade( void );

		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException() throw();
				virtual ~GradeTooHighException() throw();
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException() throw();
				virtual ~GradeTooLowException() throw();
				virtual const char *what() const throw();
		};

	private:
		std::string const	_name;
		int	_grade;
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */
