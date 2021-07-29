#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern	povre;
	Form* shrubberyForm;
	Form* robotomyForm;
	Form* presidentialPardonForm;
	Bureaucrat	bureaucrat1("qaid", 1);

	try
	{
		shrubberyForm = povre.makeForm("robotomy request", "Garden");
		robotomyForm = povre.makeForm("shrubbery creation", "Well");
		presidentialPardonForm = povre.makeForm("presidential pardon", "Abmoula");
		shrubberyForm->beSigned(bureaucrat1);
		robotomyForm->beSigned(bureaucrat1);
		presidentialPardonForm->beSigned(bureaucrat1);
		bureaucrat1.executeForm(*shrubberyForm);
		bureaucrat1.executeForm(*robotomyForm);
		bureaucrat1.executeForm(*presidentialPardonForm);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	std::cout << bureaucrat1 << std::endl;
	std::cout << *shrubberyForm << std::endl;
	std::cout << *robotomyForm << std::endl;
	std::cout << *presidentialPardonForm << std::endl;
	return 0;
}
