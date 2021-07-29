#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
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


/* ************************************************************************** */
