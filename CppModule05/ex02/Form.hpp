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

		Form( std::string const name, std::string const target, int const signGrade, int const execGrad );
		Form( Form const & src );
		virtual ~Form();

		Form &		operator=( Form const & rhs );

		std::string const	getName( void ) const;
		std::string const	getTarget( void ) const;
		bool				getIsSigned( void ) const;
		int					getSignGrade( void ) const;
		int					getExecGrade( void ) const;

		Form &		beSigned(Bureaucrat& b);
		virtual void		execute( Bureaucrat const & executor ) const = 0;

		class GradeTooHighException : public std::exception
		{
			public:

				GradeTooHighException() throw();
				virtual ~GradeTooHighException() throw();
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:

				GradeTooLowException() throw();
				virtual ~GradeTooLowException() throw();
				virtual const char* what() const throw();
		};
		class FormNotSigned : public std::exception
		{
			public:

				FormNotSigned() throw();
				virtual ~FormNotSigned() throw();
				virtual const char* what() const throw();
		};

	private:
		std::string const	_name;
		std::string const	_target;
		bool				_isSigned;
		int const 			_signGrade;
		int const 			_execGrade;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */
