#include <iostream>
#include <stdlib.h>
#include <vector>
#include <list>

#include "easyfind.hpp"

int main() {

	int arr[] = {4, -2, 59, 0, 78, 6, 9};




	size_t arr_size = sizeof(arr) / sizeof(arr[0]);

	std::vector<int> vector_container(arr, arr + arr_size);
	
	std::cout << std::endl << "***  TEST 1: VECTOR CONTAINER - Expected output(59)   ***" << std::endl;
	std::cout << "   Easyfind() n: 59, vector: {4, -2, 59, 0, 78, 6, 9}" << std::endl;
	try {
		std::cout << "   Integer Found: " << easyfind(vector_container, 59) << std::endl;
	} catch (std::exception& e) {
		std::cerr << "    Exception: " << e.what() << std::endl;
	}

	std::cout << std::endl << "***  TEST 2: VECTOR CONTAINER - Expected output(int not found)   ***" << std::endl;
	std::cout << "   Easyfind() n: 12, vector: {4, -2, 59, 0, 78, 6, 9}" << std::endl;
	try {
		std::cout << "   Integer Found: " << easyfind(vector_container, 12) << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}



	std::list<int> list_container(arr, arr + arr_size);

	std::cout << std::endl << "***  TEST 3: LIST CONTAINER - Expected output(0)   ***" << std::endl;
	std::cout << "   Easyfind() n: 0, list: {4, -2, 59, 0, 78, 6, 9}" << std::endl;
	try {
		std::cout << "   Integer Found: " << easyfind(list_container, 0) << std::endl;
	} catch (std::exception& e) {
		std::cerr << "    Exception: " << e.what() << std::endl;
	}

	std::cout << std::endl << "***  TEST 4: LIST CONTAINER - Expected output(int not found)   ***" << std::endl;
	std::cout << "   Easyfind() n: -12, list: {4, -2, 59, 0, 78, 6, 9}" << std::endl;
	try {
		std::cout << "   Integer Found: " << easyfind(list_container, -12) << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}