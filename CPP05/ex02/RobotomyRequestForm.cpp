#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("Default Target") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : AForm(other) {*this = other;}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	this->_target = other._target;
	setSignedStatus(other.getSignedStatus());
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::action() const
{
	srand(time(0));
	if (rand() % 2 == 1)
		std::cout << this->_target << " has been robotomised." << std::endl;
	else
		std::cout << this->_target << " was not robotomised." << std::endl;
};

//
//    Explanation:
//
//      rand() random number series will be the same across
//      different function calls, as the numbers are
//      pulled from an algorithm
//
//      By using srand(), (void return, it just sets the
//      seed for rand) ('s' stands for 'seed'), we can
//      decide the starting point in the rand() algorithm
//
//      Initialise the seed before using rand(). You can
//      pass time(0) as the seed for srand() to generate
//      a 'random' number
//