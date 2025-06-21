#pragma once

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat {
	private:
		const std::string _name;
		int			_grade;
	
	public:
		Bureaucrat();
		Bureaucrat(std::string const &name, int const grade);
		Bureaucrat(Bureaucrat const &other);
		Bureaucrat &operator=(Bureaucrat const &other);
		~Bureaucrat();

		std::string const &getName() const;
		int const &getGrade() const;
		
		void setGrade(int const &grade);

		void incrementGrade();
		void decrementGrade();

		void signForm(Form &aForm);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &aBureau);
