#include "Data.hpp"

Data::Data() {}
Data::Data(std::string name, int number)
{
	this->_name = name;
	this->_number = number;
}

Data::~Data() {}

std::string Data::getName() const {return (this->_name);}
int Data::getNumber() const {return (this->_number);}