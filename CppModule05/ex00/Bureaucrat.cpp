#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade = grade;
}

// Bureaucrat::Bureaucrat( const Bureaucrat & src )
// {
// }


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

// Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
// {
// 	if ( this != &rhs )
// 	{
// 		this->_grade = _grade;
// 	}
// 	return *this;
// }

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() + ", bureaucrat grade " << i.getGrade();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Bureaucrat::incGrade( void )
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void	Bureaucrat::decGrade( void )
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const	Bureaucrat::getName( void ) const
{
	return this->_name;
}

int					Bureaucrat::getGrade( void ) const
{
	return this->_grade;
}

/* ************************************************************************** */
