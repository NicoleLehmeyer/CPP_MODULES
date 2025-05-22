#pragma once

#include <iostream>
#include <stdlib.h>
#include <string>

typedef struct Data {

};


class Sterializer {
	private:

	public:
		uintptr_t serialize(Data *ptr);
		Data *deserialize(uintptr_t raw);


};