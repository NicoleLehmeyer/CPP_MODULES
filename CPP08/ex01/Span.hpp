#pragma once

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <exception>
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <cstdlib>

class Span {

	private:
		unsigned int _N;
		std::vector<int> _vec;

	public:
		Span();
		Span(unsigned int N);
		Span(Span const &other);
		Span &operator=(Span const &other);
		~Span();
	
		void addNumber(int element);
		int shortestSpan();
		int longestSpan();

		void addMega(Span &span, unsigned int count);
		void printSpan();

		class VectorMaxxedException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class CannotCalculateSpanException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};