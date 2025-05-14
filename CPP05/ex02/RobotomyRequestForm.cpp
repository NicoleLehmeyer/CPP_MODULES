#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("Default Target") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : AForm(other) {*this = other;}

RobotomyRequestForm::RobotomyRequestForm &operator=(RobotomyRequestForm const &other)
{
	this->_target = other._target;
	setSignedStatus(getSignedStatus(other));
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void *RobotomyRequestForm::action() const
{
	if (rand() % 2 == 1)
		std::cout << this->_target << " has been robotomised." << std::endl;
	else
		std::cout << this->_target << " was not robotomised." << std::endl;
};