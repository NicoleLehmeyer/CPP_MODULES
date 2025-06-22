#include <iostream>
#include <string>
#include "iter.hpp"

int main(void)
{
	int array1[] = {1, 2, 3, 4, 5};
	char array2[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
	std::string array3[] = {"Hello", "world!"};

	std::cout << std::endl << std::endl << "int array1[] = {1, 2, 3, 4, 5}" << std::endl;
	iter(array1, 5, print);

	std::cout << std::endl << std::endl << "char array2[] = {a, b, c, d, e, f, g, h, i, j}" << std::endl;
	iter(array2, 5, print);

	std::cout << std::endl << std::endl << "std::string array3[] = {\"Hello\", \"world!\"}" << std::endl;
		iter(array3, 5, print);

	return 0;
}