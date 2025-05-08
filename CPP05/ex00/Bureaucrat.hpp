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
		
		void setName(std::string name);
		void setGrade(std::string grade);

		void incrementGrade();
		void decrementGrade();

		//ADD AND IMPLEMENT BOTH EXCEPTIONS. 
};