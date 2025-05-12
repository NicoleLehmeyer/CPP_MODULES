#include "Form.hpp"

Form::Form() {}

Form::Form(std::string const &name, int const signGrade, int const executeGrade)
{
	this->_name = name;
	this->_isSigned = 0;
	this->_signGrade = signGrade;
	this->_executeGrade = executeGrade;
}

Form::Form(Form const &other) {*this = other;}

Form &Form::operator=(Form const &other)
{
	this->_name = other._name;
	this->_isSigned = other._isSigned;
	this->_signGrade = other._signGrade;
	this->_executeGrade = other._executeGrade;
	return (*this);
}

Form::~Form() {}

std::string const &Form::getName() const {return (this->_name);}
bool const &Form::getSignedStatus() const {return (this->_isSigned);}
int const &Form::getSignGrade() const {return (this->_signGrade);}
int const &Form::geExecutetGrade() const {return (this->_executeGrade);}

void Form::setName(std::string const &name) {this->_name = name;}
void Form::setSignedStatus(bool value) {this->_isSigned = value;}
void Form::setSignGrade(int const &grade) {this->_signGrade = grade;}
void Form::setExecuteGrade(int const &grade) {this->_executeGrade = grade;}

bool Form::beSigned(Bureaucrat &aBureau)
{
	this->setSignedStatus() = 1;
	return (this->getSignedStatus());
}

const char *form::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

std::ostream &operator<<(std::ostream &os, Form const &aForm)
{
	os << "Form: " << this->getName() << std::endl << "Signed Status: " << this->getSignedStatus() << std::endl << "Sign Grade: " << this->getSignGrade() << std::endl << "Execute Grade: " << this->getExecuteGrade() << std::endl;
	return (os);
}
