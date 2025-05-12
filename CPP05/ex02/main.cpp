#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << std::endl << std::endl << "**********************************************************************" << std::endl;
	std::cout << "**   CASE:            Bureaucrat: \"Au\", Grade 100                   **" << std::endl;
	std::cout << "**                    Form: \"Form 1A\", min sign Grade 100           **" << std::endl;
	std::cout << "**                                                                  **" << std::endl;
	std::cout << "**   EXPECTED OUTPUT: Print form info & form signed by Bureaucrat   **" << std::endl;
	std::cout << "**********************************************************************" << std::endl << std::endl;

		Bureaucrat a("Au", 100);
		std::cout << a;
		std::cout << std::endl << "** FORM CLASS '<<' OVERLOAD OPERATOR CALLED **" << std::endl;
		Form f1a("Form 1A", 100, 120);
		std::cout << f1a;
		std::cout << std::endl << "** FUNCTION signForm() CALLED **" << std::endl;
		a.signForm(f1a);

	std::cout << std::endl << std::endl << "****************************************************************************" << std::endl;
	std::cout << "**   CASE:            Bureaucrat: \"Beau\", Grade 3                         **" << std::endl;
	std::cout << "**                    Form: \"Form 2A\", signGrade 2                        **" << std::endl;
	std::cout << "**                                                                        **" << std::endl;
	std::cout << "**   EXPECTED OUTPUT: Print bureau & form info, form not signed-lowgrade  **" << std::endl;
	std::cout << "****************************************************************************" << std::endl << std::endl;

		Bureaucrat b("Beau", 3);
		std::cout << b;
		std::cout << std::endl << "** FORM CLASS '<<' OVERLOAD OPERATOR CALLED **" << std::endl;
		Form f2a("Form 2A", 2, 120);
		std::cout << f2a;
		std::cout << std::endl << "** FUNCTION signForm() CALLED **" << std::endl;
		b.signForm(f2a);

		std::cout << std::endl << "** FORM CLASS '<<' OVERLOAD OPERATOR CALLED **" << std::endl;
		std::cout << f2a;	

	std::cout << std::endl << std::endl << "*****************************************************************************" << std::endl;
	std::cout << "**   CASE:            Bureaucrat: \"Neau\", Grade 1                          **" << std::endl;
	std::cout << "**                    Form: \"Form 2A\", signGrade 2                         **" << std::endl;
	std::cout << "**                                                                         **" << std::endl;
	std::cout << "**   EXPECTED OUTPUT: Print bureau & form info, form signed by Bureaucrat  **" << std::endl;
	std::cout << "*****************************************************************************" << std::endl << std::endl;

		Bureaucrat n("Neau", 1);
		std::cout << n;

		std::cout << std::endl << "** FORM CLASS '<<' OVERLOAD OPERATOR CALLED **" << std::endl;
		std::cout << f2a;

		std::cout << std::endl << "** FUNCTION signForm() CALLED **" << std::endl;
		n.signForm(f2a);

		std::cout << std::endl << "** FORM CLASS '<<' OVERLOAD OPERATOR CALLED **" << std::endl;
		std::cout << f2a;	
}