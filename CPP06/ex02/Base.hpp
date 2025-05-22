#pragma once

#include <string>
#include <iostream>

class Base {
	private:

	public:
		Base *generate(void);
		void identify(Base *base_pointer);
		void identify(Base &base_reference);
};