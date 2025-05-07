#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string const &name, int const grade)
{
	this->_name = name;
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