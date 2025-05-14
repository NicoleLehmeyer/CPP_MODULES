#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("Default Target");

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : AForm(other) {*this = other;}

ShrubberyCreationForm::ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other)
{
	this->_target = other._target;
	setSignedStatus(getSignedStatus(other));
	return (*this);
}
ShrubberyCreationForm::~ShrubberyCreationForm() {}

void *ShrubberyCreationForm::action() const
{
	std::string filename = _target + "_shrubbery";
	std::ofstream outputFile(filename);

	if (outputFile.is_open())
	{
		outputFile << 
			"			                        	   " << std::endl <<
			"               :++++++:-==:.              " << std::endl <<
			"             -+++====++++++=              " << std::endl <<
			"           -+++++=========+**=-..         " << std::endl <<
			"         .=+++=+======+****+++**+.        " << std::endl <<
			"       :++++++========+*****===**+.       " << std::endl <<
			"      :++=++++*++++==+******+++***=.      " << std::endl <<
			"      :*+*****#******#####*++====+*+:.    " << std::endl <<
			"    .-*=====+****########*+====++++++*.   " << std::endl <<
			"   .+====+****+*##*:.**=+**++++*#####*.   " << std::endl <<
			"    =+++++*#####*.:*-#. .+:###=*###*.     " << std::endl <<
			"     .**##+:.=...  .**. -*...-==:         " << std::endl <<
			"           ..-*+:. .+*=#**=:...           " << std::endl <<
			"                .-*+**##:.                " << std::endl <<
			"                   .***.                  " << std::endl <<
			"                   .**+.                  " << std::endl <<
			"                   .***.                  " << std::endl <<
			"                   -**#:                  " << std::endl <<
			"                 .:+***#:.                " << std::endl <<
			"                 :::::::::.               " << std::endl <<
			"                                          " << std::endl;
		outputFile.close();
	}
};