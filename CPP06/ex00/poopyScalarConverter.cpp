#include "ScalarConverter.hpp"
ScalarConverter::ScalarConverter() {}
// ScalarConverter::ScalarConverter(ScalarConverter const &other) {return (*this);}
// ScalarConverter &ScalarConverter::operator=(ScalarConverter const &other) {*this = other;}
ScalarConverter::~ScalarConverter() {}

void char_convert(std::string &string)
{
	try {
		std::cout << "char: " << static_cast<char>(string.c_str()) << std::endl;
		std::cout << "int: " << static_cast<int>(string) << std::endl;
		std::cout << "float: " << static_cast<float>(string) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(string) << std::endl;
	}
	catch (const std::exception &e)
		std::cerr << e.what() << std::endl;
}

void int_convert(std::string string)
{
	int intString = atoi(string.c_str());
	try {
	std::cout << "char: " << static_cast<char>(intString) << std::endl;
	std::cout << "int: " << static_cast<int>(intString) << std::endl;
	std::cout << "float: " << static_cast<float>(intString) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(intString) << std::endl;
	}
	catch (const std::exception &e)
		std::cerr << e.what() << std::endl;	
}

void double_convert(std::string string)
{
	try
		double doubleString = atof(string);
	catch (const std::exception &e)
		std::cerr << e.what() << std::endl;
	
	try {
	std::cout << "char: " << static_cast<char>(doubleString) << std::endl;
	std::cout << "int: " << static_cast<int>(doubleString) << std::endl;
	std::cout << "float: " << static_cast<float>(doubleString) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(doubleString) << std::endl;
	}
	catch (const std::exception &e)
		std::cerr << e.what() << std::endl;	
}

void float_convert(std::string string)
{
	std::size_t fullstop = string.find('.');
	if (fullstop == std::string::npos)
	{
		throw (ErrorInvalidArgument());
	}

	try
		float floatString = std::stof(string);
	catch (const std::exception &e)
		std::cerr << e.what() << std::endl;
	
	try {
	std::cout << "char: " << static_cast<char>(floatString) << std::endl;
	std::cout << "int: " << static_cast<int>(floatString) << std::endl;
	std::cout << "float: " << static_cast<float>(floatString) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(floatString) << std::endl;
	}
	catch (const std::exception &e)
		std::cerr <<e.what() << std::endl;	
}

void pseudoNan_convert(std::string string)
{
	if (string[0] == '+')
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (string[0] == '-')
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	else //nan
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
}

void ScalarConverter::convert(std::string const &literal) const
{
	// std::vector<std::string> pseudoNans = ("nan", "nanf", "-inf", "-inff", "+inf", "+inff");
	// for (std::vector<std::string>::iterator it = pseudoNans.begin(); it != pseudoNans.end(); it++)
	// {
	// 	if (literal.find(it))
	// 		pseudoNan_convert(literal);
	// }
	// atof/d/etc includes handling of pseudo numbers

	if (literal.end() == 'f')
		float_convert(literal);
	else if (literal.find('.') != std::string::npos)
		double_convert(literal)
	// else if (string.size() == 1 && !(atoi(string) < 32) && !(atoi(string > 126)) )
		char_convert(literal);
	else
		int_convert(literal);
}


const char *ScalarConverter::ErrorInvalidArgument::what() const throw()
{
	return ("   ** ERROR **\n\nInvalid argument - ensure to input one of the following data types:\n<char>\n<int>\n<double>\n<float>\n")
}



