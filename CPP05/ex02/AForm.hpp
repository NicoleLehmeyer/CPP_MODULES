#pragma once

#include <iostream>
#include <exception>
#include <fstream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	protected:
		std::string	_name;
		bool		_isSigned;
		int			_signGrade;
		int 		_executeGrade;

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

		void setName(std::string const &name);
		void setSignedStatus(bool value);	
		void setSignGrade(int const &signGrade);
		void setExecuteGrade(int const &executeGrade);

		void beSigned(Bureaucrat const &aBureau);
		void execute(Bureaucrat const &executor);

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
