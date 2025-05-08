#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string const &name, int const grade)
{
	this->_name = name;
	if (grade < 1)
		throw GradeTooHighException;
	else if (grade > 150)
		throw GradeTooLowException;
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other) {*this = other;}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	this->_name = other.name;
	this->_grade = other.grade;
}

Bureaucrat::~Bureaucrat() {}

std::string const &Bureaucrat::getName() const {return (this->_name);}
int const &Bureaucrat::getGrade() const {return (this->_grade);}

void Bureaucrat::setName(std::string name) {this->_name = name;}
void Bureaucrat::setGrade(std::string grade) {this->grade = grade;}

void Bureaucrat::incrementGrade()
{
	if (this->_grade == 1)
		throw GradeTooHighException;
	else
		this->_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade == 150)
		throw GradeTooLowException;
	else
		this->_grade++;
}

//std::exemption