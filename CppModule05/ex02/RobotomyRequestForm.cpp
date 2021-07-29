#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form("RobotomyRequestform", target, 72, 45)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
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

void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
	if (executor.getGrade() > this->getExecGrade())
		throw Form::GradeTooLowException();
	else if (this->getIsSigned() == false)
		throw Form::FormNotSigned();
	else
	{
		if (rand() % 2 == 1)
		{
			std::cout << "* RAT-TAT-TAT-TAT *\n";
			std::cout << this->getTarget() << " has been robotomized successfully\n";
		}
		else
			std::cout << "Failed to robotomize " + this->getTarget() << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
