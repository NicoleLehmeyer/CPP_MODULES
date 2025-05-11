#pragma once

#include <iostream>
#include <exception>

class Bureaucrat {
	private:
		std::string _name;
		int			_grade;
	
	public:
		Bureaucrat();
		Bureaucrat(std::string const &name, int const grade);
		Bureaucrat(Bureaucrat const &other);
		Bureaucrat &operator=(Bureaucrat const &other);
		~Bureaucrat();

		std::string const &getName() const;
		int const &getGrade() const;
		
		void setName(std::string const &name);
		void setGrade(int const &grade);

		void incrementGrade();
		void decrementGrade();

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
