#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}

void double_convert(std::string string)
{
	char *endString = NULL;
	double d = strtod(string.c_str(), &endString);
	if (*endString != '\0')
		throw (ScalarConverter::InvalidInput());
	if ((static_cast<int>(d) < 33 && static_cast<int>(d) >= 0) || static_cast<int>(d) == 127)
		std::cout << "char: Non displayable" << std::endl;	
	else if (static_cast<int>(d) >= 33 && static_cast<int>(d) <= 126)
		std::cout << "char: " << static_cast<char>(d) << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << static_cast<int>(d) << std::endl;
	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(d) << std::endl;
}

void float_convert(std::string string)
{	
	if (string.find('.') == std::string::npos)
		throw (ScalarConverter::InvalidInput());
	if (string.find('.'))
		string.erase(string.size() - 1, 1);
	char *endString = NULL;
	float f = strtof(string.c_str(), &endString);
	if (*endString != '\0')
		throw (ScalarConverter::InvalidInput());
	if ((static_cast<int>(f) < 33 && static_cast<int>(f) >= 0) || static_cast<int>(f) == 127)
		std::cout << "char: Non displayable" << std::endl;
	else if (static_cast<int>(f) >= 33 && static_cast<int>(f) <= 126)
		std::cout << "char: " << static_cast<char>(f) << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: " << static_cast<int>(f) << std::endl;
		std::cout << "float: " << static_cast<float>(f) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void int_convert(std::string string)
{
	char *endString = NULL;
	long int l = strtol(string.c_str(), &endString, 10);
	if (*endString != '\0')
		throw (ScalarConverter::InvalidInput());
	if ((static_cast<int>(l) < 33 && static_cast<int>(l) >= 0) || static_cast<int>(l) == 127)
		std::cout << "char: Non displayable" << std::endl;
	else if (static_cast<int>(l) >= 33 && static_cast<int>(l) <= 126)
		std::cout << "char: " << static_cast<char>(l) << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << static_cast<int>(l) << std::endl;
	std::cout << "float: " << static_cast<float>(l) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(l) << std::endl;
}
void char_convert(std::string string)
{
	char c = string[1];
	std::cout << "char: " << string[1] << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}
int convert_pseudo(std::string string)
{
	if (string == "+inf" || string == "+inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << static_cast<float>(+INFINITY) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(+INFINITY) << std::endl;
		return (1);
	}
	else if (string == "-inf" || string == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << static_cast<float>(-INFINITY) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(-INFINITY) << std::endl;
		return (1);
	}
	else if (string == "nan" || string == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << static_cast<float>(NAN) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(NAN) << std::endl;
		return (1);
	}
	else
		return (0);
}

void ScalarConverter::convert(std::string const &literal)
{
	if (literal.empty())
		throw (ScalarConverter::InvalidInput());
	if (convert_pseudo(literal) == 1)
		return;
	else if (*(literal.end() - 1) == 'f')
	{
		float_convert(literal);
	}
	else if (literal.find('.') != std::string::npos)
	{
		double_convert(literal);
	}
	else if (literal.size() == 3 && literal[0] == '\'' && literal [2] == '\'')
	{
		char_convert(literal);
	}
	else
	{
		char *end = NULL;
		strtol(literal.c_str(), &end, 10);
		if (*end == '\0')
			int_convert(literal);
		else
		{
			std::cout << "LINE 128" << int(*end) << std::endl;
			throw (ScalarConverter::InvalidInput());
		}
	}
}

const char *ScalarConverter::InvalidInput::what() const throw()
{
	return ("ERROR:\tInvalid Input.\n");
}


//OTHER STUFF, MIGHT BE USEFUL:
/*

template <typename T>
std::string to_string(const T& thing) {
    std::ostringstream sstream;
    sstream
        << std::setprecision(std::numeric_limits<T>::digits10 + 1)
        << std::fixed
        << thing;
    return (sstream.str());
}

static std::string& truncate_zeros(std::string& str) {
    unsigned long first_not_zero = str.find_last_not_of("0");
    unsigned long period = str.find(".");
    if (first_not_zero != std::string::npos && period != std::string::npos && first_not_zero >= period) {
        if (first_not_zero == period) {
            first_not_zero++;
        }
        str.erase(first_not_zero + 1);
    }
    return (str);
}

*/