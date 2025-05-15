#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	std::cout << std::endl << "   *** NOTE: \"Nicole\" is always assigned to _target variable." << std::endl << std::endl;

		std::cout << " ** EXPECTED OUTPUT: PRESIDIENTIAL PARDON FORM CREATED **" << std::endl;
		Intern intern;
		AForm *intern_ppf;
		intern_ppf = intern.makeForm("PresidentialPardonForm", "Nicole");
		std::cout << std::endl;		
		std::cout << *intern_ppf;
		std::cout << std::endl;
		delete intern_ppf;


		std::cout << " ** EXPECTED OUTPUT: ROBOTOMY REQUEST FORM CREATED **" << std::endl;
		AForm *intern_rrf;
		intern_rrf = intern.makeForm("RobotomyRequestForm", "Nicole");
		std::cout << std::endl;		
		std::cout << *intern_rrf;
		std::cout << std::endl;
		delete intern_rrf;


		std::cout << " ** EXPECTED OUTPUT: SHRUBBERY CREATION FORM CREATED **" << std::endl;
		AForm *intern_scf;
		intern_scf = intern.makeForm("ShrubberyCreationForm", "Nicole");
		std::cout << std::endl;		
		std::cout << *intern_scf;
		std::cout << std::endl;
		delete intern_scf;

		std::cout << " ** EXPECTED OUTPUT: SHRUBBERY CREATION FORM CREATED **" << std::endl;
		AForm *intern_nourgh;
		intern_nourgh = intern.makeForm("NourghhhForm", "Nicole");
		std::cout << std::endl;		
		std::cout << *intern_nourgh;
		std::cout << std::endl;

	return (0);
}