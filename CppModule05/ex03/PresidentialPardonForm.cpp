#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form("RobotomyRequestform", target, 25, 5)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i )
{
	if (i.getIsSigned() == true)
		o << i.getName() + " at " + i.getTarget() + "needs Grade: " << i.getSignGrade() << " to be signed and Grade: " << i.getExecGrade() << " to be executed. Form is currently signed\n";
	else
		o << i.getName() + " at " + i.getTarget() + "needs Grade: " << i.getSignGrade() << " to be signed and Grade: " << i.getExecGrade() << " to be executed. Form is currently not signed\n";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
	if (executor.getGrade() > this->getExecGrade())
		throw Form::GradeTooLowException();
	else if (this->getIsSigned() == false)
		throw Form::FormNotSigned();
	else
	{
		std::cout << this->getTarget() + " has been pardoned by Zafod Beeblebrox\n";
	}
}

Form* PresidentialPardonForm::make( std::string target)
{
	return (new PresidentialPardonForm(target));
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
