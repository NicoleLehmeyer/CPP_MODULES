#include "Span.hpp"

Span::Span() : _N(0) {}
Span::Span(unsigned int N) : _N(N) {}
Span::Span(Span const &other) {*this = other;}
Span &Span::operator=(Span const &other)
{
	if (this != &other)
	{
		this->_N = other._N;
		this->_vec = other._vec;
	}
	return (*this);
}
Span::~Span() {}

void Span::addNumber(int element)
{
	if (_vec.size() >= _N)
		throw VectorMaxxedException();
	_vec.push_back(element);
}

int Span::shortestSpan()
{
	if (_vec.size() < 2) {
		throw CannotCalculateSpanException();
	}
	std::vector<int> sorted = _vec;
	std::sort(sorted.begin(), sorted.end());
	int shortSpan = sorted[1] - sorted[0];
	for (size_t i = 2; i < sorted.size(); i++)
	{
		if (sorted[i] - sorted[i - 1] < shortSpan)
			shortSpan = sorted[i] - sorted[i - 1];
	}
	return shortSpan;
}

int Span::longestSpan()
{
	if (_vec.size() < 2) {
		throw CannotCalculateSpanException();
	}
	int maxElement = *std::max_element(_vec.begin(), _vec.end());
	int minElement = *std::min_element(_vec.begin(), _vec.end());
	return maxElement - minElement;
}

void Span::addMega(Span &span, unsigned int count)
{
	std::srand(std::time(0));
	for (unsigned int i = 0; i < count; i++) {
		int randElement = std::rand();
		try {
			span.addNumber(randElement);
		} catch (const VectorMaxxedException &e) {
			std::cerr << "Error: " << e.what() << std::endl;
			break;
		}
	}
}

void Span::printSpan()
{
	std::cout << "Span Elements: ";
	for (std::vector<int>::const_iterator it = _vec.begin(); it != _vec.end(); it++) {
		std::cout << *it << "  ";
	}
	std::cout << std::endl;
}

const char *Span::VectorMaxxedException::what() const throw()
{
	return ("Vector size maxxed.");
}

const char *Span::CannotCalculateSpanException::what() const throw()
{
	return ("Cannot calculate span exception.");
}

// Create 'Span' class that stores a maximum of N integers.
// N is an unsigned int variable & only parameter passed to the constructor

// Member functions:
//	addNumber() - add single number to the Span.
//		- It will be used in order to fill it
//		- Any attempt to add a new element if there are already N elements should throw an exception

//	shortest/longestSpan() - find and return the shortest span between all the numbers stored