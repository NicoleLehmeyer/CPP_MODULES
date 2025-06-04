#include "Serializer.hpp"
#include "Data.hpp"

int main (void)
{

	// Data data1 = Data("Nicole", 5);

	Data data1("Nicole", 5);

	std::cout << std::endl << "   ** ORIGINAL POINTER CONTENT **" << std::endl;
	std::cout << std::endl << "data 1:" << std::endl;
	std::cout << "name: " << data1.getName() << std::endl;
	std::cout << "number: " << data1.getNumber() << std::endl;

	uintptr_t uint_ptr = Serializer::serialize(&data1);

	Data *deserialized_ptr = Serializer::deserialize(uint_ptr);
	
	std::cout << std::endl << "   ** POST-SERIALISATION POINTER CONTENT **" << std::endl;
	std::cout << std::endl << "data 1:" << std::endl;
	std::cout << "name: " << data1.getName() << std::endl;
	std::cout << "number: " << data1.getNumber() << std::endl;

	std::cout << std::endl << "deserialised_ptr:" << std::endl;
	// std::cout << "deserialised_ptr address: " << deserialized_ptr << std::endl;
	std::cout << "name: " << deserialized_ptr->getName() << std::endl;
	std::cout << "number: " << deserialized_ptr->getNumber() << std::endl;

	return (0);
}