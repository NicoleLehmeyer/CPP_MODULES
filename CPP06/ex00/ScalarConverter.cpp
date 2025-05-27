#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}

void float_convert(std::string string)
{
	if (string.find('.') == std::string::npos)
		throw (ScalarConverter::InvalidInput());

	string.erase(string.size() - 1, 1);
	char *endString = NULL;
	strtod(string.c_str(), &endString);
	if (endString != '\0')
	{
		throw (ScalarConverter::InvalidInput());
	}
	//TO DO:
		//convert it all - char, int, double, float
	// std::cout << "FLOAT CONVERT CALLED. This is the string: " << string << "\n";

}
void ScalarConverter::convert(std::string const &literal)
{
	if (literal.empty())
		throw (ScalarConverter::InvalidInput());
	if (*(literal.end() - 1) == 'f')
		float_convert(literal);

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