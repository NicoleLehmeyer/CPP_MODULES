#include "Form.hpp"

Form::Form() : _name("Name"), _isSigned(false), _signGrade(150), _executeGrade(150) {} 

Form::Form(std::string const &name, int const signGrade, int const executeGrade) : _name(name), _isSigned(false), _signGrade(signGrade), _executeGrade(executeGrade) {}

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
int const &Form::getExecuteGrade() const {return (this->_executeGrade);}

void Form::setName(std::string const &name) {this->_name = name;}
void Form::setSignedStatus(bool value) {this->_isSigned = value;}
void Form::setSignGrade(int const &signGrade) {this->_signGrade = signGrade;}
void Form::setExecuteGrade(int const &executeGrade) {this->_executeGrade = executeGrade;}

void Form::beSigned(Bureaucrat &aBureau)
{
	if (aBureau.getGrade() <= this->getSignGrade())
		this->setSignedStatus(true);
	else
		throw GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("grade too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("grade too low");
}

std::ostream &operator<<(std::ostream &os, Form const &aForm)
{
	os << "Form: " << aForm.getName() << std::endl << "Signed Status: " << aForm.getSignedStatus() << std::endl << "Sign Grade: " << aForm.getSignGrade() << std::endl << "Execute Grade: " << aForm.getExecuteGrade() << std::endl;
	return (os);
}
