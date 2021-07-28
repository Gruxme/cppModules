#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

	public:

		Form( std::string const name, int const signGrade, int const execGrad );
		Form( Form const & src );
		~Form();

		Form &		operator=( Form const & rhs );

		std::string const	getName( void ) const;
		bool				getIsSigned( void ) const;
		int					getSignGrade( void ) const;
		int					getExecGrade( void ) const;

		Form &		beSigned(Bureaucrat& b);

		class GradeTooHighException : public std::exception
		{
			public:

				GradeTooHighException() throw() {}
				virtual ~GradeTooHighException() throw() {}
				virtual const char* what() const throw() { return "Grade is too High!"; }
		};
		class GradeTooLowException : public std::exception
		{
			public:

				GradeTooLowException() throw() {}
				virtual ~GradeTooLowException() throw() {}
				virtual const char* what() const throw() { return "Grade is too Low!"; }
		};

	private:
		std::string const	_name;
		bool				_isSigned; //initialize to zero
		int const 			_signGrade;
		int const 			_execGrade;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */
