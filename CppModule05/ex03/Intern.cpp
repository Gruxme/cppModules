#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern(Intern const & src)
{
	this->operator=(src);
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &		Intern::operator=( Intern const & rhs )
{
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

Form*	Intern::makeForm( std::string name, std::string target )
{
	std::string	formsNames[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	Form* (*forms[3])(std::string target);
	forms[0] = ShrubberyCreationForm::make;
	forms[1] = RobotomyRequestForm::make;
	forms[2] = PresidentialPardonForm::make;

	for (int i = 0; i < 3; i++)
	{
		if (name == formsNames[i])
		{
			std::cout << "Intern creates " + name << std::endl;
			return forms[i](target);
		}
	}
	throw Intern::FormNotFound();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/*
** --------------------------------- EXCEPTIONS ---------------------------------
*/

Intern::FormNotFound::FormNotFound() throw() {}
Intern::FormNotFound::~FormNotFound() throw() {}
const char* Intern::FormNotFound::what() const throw()
{
	return "No such Form found!";
}

/* ************************************************************************** */
