#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("Default Target") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) : AForm(other) {*this = other;}

PresidentialPardonForm::PresidentialPardonForm &operator=(PresidentialPardonForm const &other)
{
	this->_target = other._target;
	setSignedStatus(getSignedStatus(other));
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void *PresidentialPardonForm::action() const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
};