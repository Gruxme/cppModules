#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	Form* shrubberyForm = new ShrubberyCreationForm("Garden");
	Form* robotomyForm = new RobotomyRequestForm("Well");
	Form* presidentialPardonForm = new PresidentialPardonForm("Abmoula");
	Bureaucrat	bureaucrat1("qaid", 1);

	try
	{
		shrubberyForm->beSigned(bureaucrat1);
		robotomyForm->beSigned(bureaucrat1);
		presidentialPardonForm->beSigned(bureaucrat1);
		bureaucrat1.executeForm(*shrubberyForm);
		bureaucrat1.executeForm(*robotomyForm);
		bureaucrat1.executeForm(*presidentialPardonForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	std::cout << bureaucrat1 << std::endl;
	std::cout << *shrubberyForm << std::endl;
	std::cout << *robotomyForm << std::endl;
	std::cout << *presidentialPardonForm << std::endl;
	return 0;
}

