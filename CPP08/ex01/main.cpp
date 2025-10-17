#include "Span.hpp"

int main()
{
	try {
		Span sp1 = Span(3);

		sp1.addMega(sp1, 3);
		sp1.printSpan();
		std::cout << "Shortest Span: " << sp1.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << sp1.longestSpan() << std::endl;
	}
	catch (const Span::VectorMaxxedException &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
		catch (const Span::CannotCalculateSpanException &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	try {
		Span sp2 = Span(5);

		sp2.addNumber(6);
		sp2.addNumber(3);
		sp2.addNumber(17);
		sp2.addNumber(9);
		sp2.addNumber(11);

		sp2.printSpan();
		std::cout << "Shortest Span: " << sp2.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << sp2.longestSpan() << std::endl;
	}
	catch (const Span::VectorMaxxedException &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
		catch (const Span::CannotCalculateSpanException &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	return 0;
}

//should output: 2, 14
//Fill Span using a range of iterators.
//Make thousands of calls to addNumber with one member function to make one call.

