#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	private:
		std::string _target;
		virtual void action() const;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &other);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &other);
		~RobotomyRequestForm();
};