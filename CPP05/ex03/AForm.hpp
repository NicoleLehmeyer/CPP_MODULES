#pragma once

#include <iostream>
#include <exception>
#include <fstream>
#include <string>
#include <cstdlib>
#include <time.h>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	protected:
		const std::string	_name;
		bool				_isSigned;
		const int			_signGrade;
		const int 			_executeGrade;

	public:
		AForm();
		AForm(std::string const &name, int const signGrade, int const executeGrade);
		AForm(AForm const &other);
		AForm &operator=(AForm const &other);
		virtual ~AForm();

		std::string const &getName() const;
		bool const &getSignedStatus() const;
		int const &getSignGrade() const;
		int const &getExecuteGrade() const;

		void setSignedStatus(bool value);	

		void beSigned(Bureaucrat const &aBureau);
		void execute(Bureaucrat const &executor);

		virtual void action() const = 0;

		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class UnsignedFormException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, AForm const &form_ref);
