#pragma once

#include "AForm.hpp"

class RobotomyReuqestForm: public AForm {
	private:
		std::string _target;
		virtual void action() const;

	public:
		RobotomyReuqestForm();
		RobotomyReuqestForm(std::string target);
		RobotomyReuqestForm(RobotomyReuqestForm const &other);
		RobotomyReuqestForm &operator=(RobotomyReuqestForm const &other);
		~RobotomyReuqestForm();
};