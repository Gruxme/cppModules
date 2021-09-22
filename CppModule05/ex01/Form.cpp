#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form( std::string const name, int const signGrade, int const execGrade ) : _name(name), _isSigned(0), _signGrade(signGrade), _execGrade(execGrade)
{
	if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
	else if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
}

// Form::Form( const Form & src )
// {
// }


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	if (i.getIsSigned() == true)
		o << i.getName() + " needs grade: " << i.getExecGrade() << " to be executed and grade: " << i.getSignGrade() << " to be signed and is currently signed!";
	else
		o << i.getName() + " needs grade: " << i.getExecGrade() << " to be executed and grade: " << i.getSignGrade() << " to be signed and is currently not signed!";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

Form &		Form::beSigned(Bureaucrat& b)
{
	if (b.getGrade() > this->_signGrade)
	{
		b.signForm(*this);
		throw Form::GradeTooLowException();
	}
	b.signForm(*this);
	this->_isSigned = 1;
	return *this;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const	Form::getName( void ) const
{
	return this->_name;
}

bool				Form::getIsSigned( void ) const
{
	return this->_isSigned;
}

int					Form::getSignGrade( void ) const
{
	return this->_signGrade;
}

int					Form::getExecGrade( void ) const
{
	return this->_execGrade;
}

/*
** --------------------------------- EXCEPTIONS ---------------------------------
*/

Form::GradeTooHighException::GradeTooHighException() throw() {}
Form::GradeTooLowException::GradeTooLowException() throw() {}

Form::GradeTooHighException::~GradeTooHighException() throw() {}
Form::GradeTooLowException::~GradeTooLowException() throw() {}

const char*		Form::GradeTooHighException::what() const throw()
{
	return "Grade is too High!";
}
const char*		Form::GradeTooLowException::what() const throw()
{
	return "Grade is too Low!";
}
/* ************************************************************************** */
