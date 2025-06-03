#include "ScalarConverter.hpp"

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "ERROR: Invalid Input." << std::endl;
		return(0);
	}
	std::string string = argv[1];
	std::cout << "String: " << string << std::endl;

	try {
		ScalarConverter::convert(string);
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}