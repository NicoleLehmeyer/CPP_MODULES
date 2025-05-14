#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	std::cout << "*NOTE: \"Nicole\" is always assigned to _target variable." << std::endl << std::endl;
	
	// std::cout << std::endl << std::endl << "**********************************************************************" << std::endl;
	// std::cout << "**   CASE:            Bureaucrat: \"Au\", Grade 100                   **" << std::endl;
	// std::cout << "**                    Form: \"Form 1A\", min sign Grade 100           **" << std::endl;
	// std::cout << "**                                                                  **" << std::endl;
	// std::cout << "**   EXPECTED OUTPUT: Form should not be created (abstract class)   **" << std::endl;
	// std::cout << "**********************************************************************" << std::endl << std::endl;

	// 	Bureaucrat a("Au", 100);
	// 	std::cout << a;
	// 	std::cout << std::endl << "** FORM CLASS '<<' OVERLOAD OPERATOR CALLED **" << std::endl;
	// 	AForm f1a("Form 1A", 100, 120);
	// 	std::cout << f1a;
	// 	std::cout << std::endl << "** FUNCTION signForm() CALLED **" << std::endl;
	// 	a.signForm(f1a);




	// std::cout << std::endl << std::endl << "****************************************************************************" << std::endl;
	// std::cout << "**   CASE:            Bureaucrat: \"Beau\", Grade 3                         **" << std::endl;
	// std::cout << "**                    Form: PresidentialPardonForm, signGr:25 execGr:5    **" << std::endl;
	// std::cout << "**                                                                        **" << std::endl;
	// std::cout << "**   EXPECTED OUTPUT: Form signed & executed                              **" << std::endl;
	// std::cout << "**   FURTHER TESTS:   Change Bureaucrat grade for too low to sign/execute **" << std::endl;	
	// std::cout << "****************************************************************************" << std::endl << std::endl;

	// 	Bureaucrat b("Beau", 3);
	// 	std::cout << b;
	// 	PresidentialPardonForm ppf("Nicole");
	// 	std::cout << ppf;
	// 	std::cout << std::endl << "** FUNCTION signForm() CALLED **" << std::endl;
	// 	b.signForm(ppf);
	// 	std::cout << std::endl << "** FUNCTION executeForm() CALLED **" << std::endl;
	// 	b.executeForm(ppf);
	// 	std::cout << std::endl << ppf;



	// std::cout << std::endl << std::endl << "****************************************************************************" << std::endl;
	// std::cout << "**   CASE:            Bureaucrat: \"Beau\", Grade 45                         **" << std::endl;
	// std::cout << "**                    Form: RobotomyRequestForm, signGr:72 execGr:45      **" << std::endl;
	// std::cout << "**                                                                        **" << std::endl;
	// std::cout << "**   EXPECTED OUTPUT: Form signed & executed                              **" << std::endl;
	// std::cout << "**   FURTHER TESTS:   Change Bureaucrat grade for too low to sign/execute **" << std::endl;
	// std::cout << "****************************************************************************" << std::endl << std::endl;

	// 	Bureaucrat b("Beau", 3);
	// 	std::cout << b;
	// 	RobotomyRequestForm rpf("Nicole");
	// 	std::cout << rpf;
	// 	std::cout << std::endl << "** FUNCTION signForm() CALLED **" << std::endl;
	// 	b.signForm(rpf);
	// 	std::cout << std::endl << "** FUNCTION executeForm() CALLED **" << std::endl;
	// 	b.executeForm(rpf);
	// 	std::cout << std::endl << rpf;



	// std::cout << std::endl << std::endl << "****************************************************************************" << std::endl;
	// std::cout << "**   CASE:            Bureaucrat: \"Beau\", Grade                          **" << std::endl;
	// std::cout << "**                    Form: ShrubberyCreationForm, signGr:145 execGr:137      **" << std::endl;
	// std::cout << "**                                                                        **" << std::endl;
	// std::cout << "**   EXPECTED OUTPUT: Form signed & executed                              **" << std::endl;
	// std::cout << "**   FURTHER TESTS:   Change Bureaucrat grade for too low to sign/execute **" << std::endl;
	// std::cout << "****************************************************************************" << std::endl << std::endl;

	// 	Bureaucrat b("Beau", 130);
	// 	std::cout << b;
	// 	ShrubberyCreationForm scf("Nicole");
	// 	std::cout << scf;
	// 	std::cout << std::endl << "** FUNCTION signForm() CALLED **" << std::endl;
	// 	b.signForm(scf);
	// 	std::cout << std::endl << "** FUNCTION executeForm() CALLED **" << std::endl;
	// 	b.executeForm(scf);
	// 	std::cout << std::endl << scf;

	return (0);
}