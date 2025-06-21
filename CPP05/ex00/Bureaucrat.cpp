#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string const &name, int const grade)
{
	this->_name = name;
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other) {*this = other;}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	this->_name = other._name;
	this->_grade = other._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat() {}

std::string const &Bureaucrat::getName() const {return (this->_name);}
int const &Bureaucrat::getGrade() const {return (this->_grade);}

void Bureaucrat::setGrade(int const &grade) {this->_grade = grade;}

void Bureaucrat::incrementGrade()
{
	if (this->_grade == 1)
		throw GradeTooHighException();
	else
		this->_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade == 150)
		throw GradeTooLowException();
	else
		this->_grade++;
}

// Fully classified name, of classes AND nested classes (exception classes)
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

// ostream is a general output stream class in the C++ standard lib
// It is the base type for various output streams, inclusive of cout, ofstream and ostringstream
// Non-member function - must be global (free-standing), as ostream is on the left of the operator
std::ostream &operator<<(std::ostream &os, Bureaucrat const &aBureau)
{
	os << aBureau.getName() << ", bureaucrat grade " << aBureau.getGrade() << "." << std::endl;
	return (os);
}