#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &other) {*this = other;}

Intern &Intern::operator=(Intern const &other)
{
	(void) other;
	return (*this);
}

Intern::~Intern() {}

AForm *Intern::makeForm(std::string formName, std::string formTarget)
{
	std::string form_types[] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};

	int i = 0;
	while (i <= 2 && formName != form_types[i])
		i++;

	switch (i)
	{
		case 0:
			std::cout << "Intern creates " << formName << std::endl;
			return (new PresidentialPardonForm(formTarget));
		case 1:
			std::cout << "Intern creates " << formName << std::endl;
			return (new RobotomyRequestForm(formTarget));
		case 2:
			std::cout << "Intern creates " << formName << std::endl;
			return (new ShrubberyCreationForm(formTarget));
		default:
			std::cout << "Form name \"" << formName << "\" does not exist." << std::endl;
			return NULL;
	}	
}