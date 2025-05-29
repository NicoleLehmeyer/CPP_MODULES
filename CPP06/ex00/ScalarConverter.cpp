#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}

void double_convert(std::string string)
{
	char *endString = NULL;
	double d = strtod(string.c_str(), &endString);
	if (*endString != '\0')
	{
		throw (ScalarConverter::InvalidInput());
	}
	if (static_cast<int>(d) >= 33 || static_cast<int>(d) <= 126)
		std::cout << "char: " << static_cast<char>(d) << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << static_cast<int>(d) << std::endl;
	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

void float_convert(std::string string)
{
	if (string.find('.') == std::string::npos) {
		throw (ScalarConverter::InvalidInput());
	}
	if (string.find('.'))
		string.erase(string.size() - 1, 1);
	double_convert(string);
}

void int_convert(std::string string)
{
	char *endString = NULL;
	long int l = strtol(string.c_str(), &endString, 10);
	if (*endString != '\0')
	{
		throw (ScalarConverter::InvalidInput());
	}
	if (static_cast<int>(l) >= 33 || static_cast<int>(l) <= 126)
		std::cout << "char: " << static_cast<char>(l) << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << static_cast<int>(l) << std::endl;
	std::cout << "float: " << static_cast<float>(l) << "f" << std::endl;
	std::cout << "double: " << l << std::endl;
}
void char_convert(std::string string)
{
	char c = string[1];
	std::cout << "char: " << string[1] << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void ScalarConverter::convert(std::string const &literal)
{
	if (literal.empty())
	{
		throw (ScalarConverter::InvalidInput());
	}
	else if (*(literal.end() - 1) == 'f')
	{
		std::cout << "TYPE: FLOAT" << std::endl << std::endl;
		float_convert(literal);
	}
	else if (literal.find('.') != std::string::npos)
	{
		std::cout << "TYPE: DOUBLE" << std::endl << std::endl;
		double_convert(literal);
	}
	else if (literal.size() == 3 && literal[0] == '\'' && literal [2] == '\'')
	{
		std::cout << "TYPE: INTEGER" << std::endl << std::endl;
		char_convert(literal);
	}
	else
	{
		char *end = NULL;
		strtol(literal.c_str(), &end, 10);
		if (*end != '\0')
		{
			std::cout << "TYPE: INTEGER" << std::endl << std::endl;
			int_convert(literal);
		}
		else
		{
			std::cout << "ERROR line 88" << std::endl;
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