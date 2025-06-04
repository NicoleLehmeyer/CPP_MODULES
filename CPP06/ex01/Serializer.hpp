#pragma once

#include "Data.hpp"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdint>

class Serializer {
	private:
		Serializer();
		Serializer(Serializer const &other);
		Serializer &operator=(Serializer const &other);
		~Serializer();

	public:
		static uintptr_t serialize(Data *ptr);
		static Data *deserialize(uintptr_t raw);

};