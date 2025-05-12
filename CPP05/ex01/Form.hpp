#pragma once

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		std::string	_name;
		bool		_isSigned;
		int			_signGrade;
		int 		_executeGrade;

	public:

		Form();
		Form(std::string const &name, int const signGrade, int const executeGrade);
		Form(Form const &other);
		Form &operator=(Form const &other);
		~Form();

		std::string const &getName() const;
		bool const &getSignedStatus() const;
		int const &getSignGrade() const;
		int const &getExecuteGrade() const;

		void setName(std::string const &name);
		void setSignedStatus(bool value);	
		void setSignGrade(int const &signGrade);
		void setExecuteGrade(int const &executeGrade);

		void beSigned(Bureaucrat &aBureau);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, Form const &aForm);
