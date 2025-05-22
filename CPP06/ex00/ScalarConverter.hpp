#pragma once

#include <iostream>
#include <string>
#include <cstdlib>

class ScalarConverter {
	private:

	public:
		ScalarConverter();
		ScalarConverter(ScalarConverter const &other);
		ScalarConverter &operator=(ScalarConverter const &other);
		virtual ~ScalarConverter();

		virtual void convert(std::string const &literal) const = 0;

		class ErrorInvalidArgument : public std::exception {
			public:
				virtual const char *what() const throw();
		}
};