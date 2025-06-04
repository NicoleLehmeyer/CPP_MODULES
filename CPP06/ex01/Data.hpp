#pragma once

#include <iostream>
#include <stdlib.h>
#include <string>

class Data {
	private:
		std::string _name;
		int _number;

	public:
		Data();
		Data(std::string name, int number);
		// Data(Data const &other);
		// Data &operator=(Data const &other);
		~Data();

		std::string getName() const;
		int getNumber() const;
};