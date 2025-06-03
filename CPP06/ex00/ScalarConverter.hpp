#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <exception>
#include <cmath>

class ScalarConverter {
	private:
		ScalarConverter();
		ScalarConverter (ScalarConverter const &other);
		ScalarConverter &operator=(ScalarConverter const &other);
		~ScalarConverter();

	public:
		static void convert(std::string const &literal);

		class InvalidInput : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};