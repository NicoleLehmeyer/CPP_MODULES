#include "Bureaucrat.hpp"

int main()
{
	std::cout << std::endl << std::endl << "*************************************************************" << std::endl;
	std::cout << "**   CASE:            \"Neau\", Grade 151                    **" << std::endl;
	std::cout << "**   EXPECTED OUTPUT: Nil construct, catch exception       **" << std::endl;
	std::cout << "*************************************************************" << std::endl << std::endl;

	try
	{
		Bureaucrat n("Neau", 151);
		std::cout << n;
	}
	catch(const std::exception &except)
	{
		std::cout << "Exception: " << except.what() << std::endl;
	}

	std::cout << std::endl << std::endl << "*************************************************************" << std::endl;
	std::cout << "**   CASE:            \"Beau\", Grade 1                      **" << std::endl;
	std::cout << "**   EXPECTED OUTPUT: Successful construct                 **" << std::endl;
	std::cout << "*************************************************************" << std::endl << std::endl;

	try
	{
		Bureaucrat b("Beau", 1);
		std::cout << b;
	}
	catch(const std::exception &except)
	{
		std::cout << "Exception: " << except.what() << std::endl;
	}


	std::cout << std::endl << std::endl << "*************************************************************" << std::endl;
	std::cout << "**   CASE:            INCREMENT - \"Beau\", Grade 1          **" << std::endl;
	std::cout << "**   EXPECTED OUTPUT: Catch exception                      **" << std::endl;
	std::cout << "*************************************************************" << std::endl << std::endl;
	try
	{
		Bureaucrat b("Beau", 1);
		std::cout << b;
		std::cout << "** Call incrementGrade() **" << std::endl;
		b.incrementGrade();
		std::cout << b;
	}
	catch(const std::exception &except)
	{
		std::cout << "Exception: " << except.what() << std::endl;
	}

	std::cout << std::endl << std::endl << "*************************************************************" << std::endl;
	std::cout << "**   CASE:            DECREMENT - \"Beau\", Grade 1          **" << std::endl;
	std::cout << "**   EXPECTED OUTPUT: Successful decrement                 **" << std::endl;
	std::cout << "*************************************************************" << std::endl << std::endl;
	try
	{
		Bureaucrat b("Beau", 1);
		std::cout << b;
		std::cout << "** Call decrementGrade() **" << std::endl;
		b.decrementGrade();
		std::cout << b;
	}
	catch(const std::exception &except)
	{
		std::cout << "Exception: " << except.what() << std::endl;
	}
}