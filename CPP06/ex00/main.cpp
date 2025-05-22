#include "ScalarConverter.hpp"

int main (int argc, char **argv)
{
	std::string string = argv[1].c_str();

	try
		ScalarConverter::convert(string);
	catch (const std::exception &e)
		std::cerr << e.what() << std::endl;
}