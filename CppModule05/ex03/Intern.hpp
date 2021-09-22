#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include <exception>
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

class ShrubberyCreationForm;
class PresidentialPardonForm;
class RobotomyRequestForm;

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );

		Form*	makeForm(std::string name, std::string target);

		class FormNotFound : public std::exception
		{
			public:

				FormNotFound() throw();
				virtual ~FormNotFound() throw();
				virtual const char* what() const throw();
		};
	private:

};

#endif /* ********************************************************** INTERN_H */
