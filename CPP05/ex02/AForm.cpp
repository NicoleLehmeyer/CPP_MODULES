#include "AForm.hpp"

AForm::AForm() : _name("Name"), _isSigned(false), _signGrade(150), _executeGrade(150) {} 

AForm::AForm(std::string const &name, int const signGrade, int const executeGrade) : _name(name), _isSigned(false), _signGrade(signGrade), _executeGrade(executeGrade) {}

AForm::AForm(AForm const &other) {*this = other;}

AForm &AForm::operator=(AForm const &other)
{
	this->_name = other._name;
	this->_isSigned = other._isSigned;
	this->_signGrade = other._signGrade;
	this->_executeGrade = other._executeGrade;
	return (*this);
}

AForm::~AForm() {}

std::string const &AForm::getName() const {return (this->_name);}
bool const &AForm::getSignedStatus() const {return (this->_isSigned);}
int const &AForm::getSignGrade() const {return (this->_signGrade);}
int const &AForm::getExecuteGrade() const {return (this->_executeGrade);}

void AForm::setName(std::string const &name) {this->_name = name;}
void AForm::setSignedStatus(bool value) {this->_isSigned = value;}
void AForm::setSignGrade(int const &signGrade) {this->_signGrade = signGrade;}
void AForm::setExecuteGrade(int const &executeGrade) {this->_executeGrade = executeGrade;}

void AForm::beSigned(Bureaucrat const &aBureau)
{
	if (aBureau.getGrade() <= this->getSignGrade())
		this->setSignedStatus(true);
	else
		throw GradeTooLowException();
}

void AForm::execute(Bureaucrat const &executor)
{
	if (this->getSignedStatus == false)
		throw UnsignedFormException();
	if (executor.getGrade() > this->getExecuteGrade())
		throw GradeTooLowException();
	action();
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("grade too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("grade too low");
}

const char *AForm::UnsignedFormException::what() const throw()
{
	return ("form not signed");
}

std::ostream &operator<<(std::ostream &os, AForm const &form_ref)
{
	os << "AForm: " << form_ref.getName() << std::endl << "Signed Status: " << form_ref.getSignedStatus() << std::endl << "Sign Grade: " << form_ref.getSignGrade() << std::endl << "Execute Grade: " << aAForm.getExecuteGrade() << std::endl;
	return (os);
}
