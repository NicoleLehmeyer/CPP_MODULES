#include "ScalarConverter.hpp"
ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(ScalarConverter const &other) {return (*this)}
ScalarConverter &ScalarConverter::operator=(ScalarConverter const &other) {*this = other}
~ScalarConverter::ScalarConverter() {}

void float_convert(std::string string)
{
	if (string == "nanf" || string == "-inff" || string = "+inff")

	std::size_t fullstop = string.find('.');
	if (fullstop == std::string::npos)
	{
		//error - try & catch
	}
	
}

void pseudoNan_convert()
{
	if (literal[0] == '+')
	{
		//std::cout << "char: impossible" << std::endl;
		//std::cout << "int: impossible" << std::endl;
		//std::cout << "float: nanf" << std::endl;
		//std::cout << "double: nan" << std::endl;
	}
	else if (literal[0] == '-')
	{
		//std::cout << "char: impossible" << std::endl;
		//std::cout << "int: impossible" << std::endl;
		//std::cout << "float: nanf" << std::endl;
		//std::cout << "double: nan" << std::endl;
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
	std::vector<std::string> pseudoNans = ("nan", "nanf", "-inf", "-inff", "+inf", "+inff");
	for (std::vector<std::string>::iterator it = pseudoNans.begin(); it != pseudoNans.end(); it++)
	{
		if (literal.find(it))
			pseudoNan_convert(literal);
	}

	if (literal.end() == 'f')
		float_convert(literal);
	else if (literal.find('.') != std::string::npos)
		double_convert()



	// Static casting
	std::cout << "char: " << SOMETHING << std::endl;
	std::cout << "int: " << SOMETHING << std::endl;
	std::cout << "float: " << SOMETHING << std::endl;
	std::cout << "double: " << SOMETHING << std::endl;
}


const char *ScalarConverter::ErrorInvalidArgument::what() const throw()
{
	return ("   ** ERROR **\n\nInvalid argument - ensure to input one of the following data types:\n<char>\n<int>\n<double>\n<float>\n")
}



