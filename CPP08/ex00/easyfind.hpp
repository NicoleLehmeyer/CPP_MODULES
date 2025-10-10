#pragma once

#include <algorithm>
#include <stdexcept>

template <typename T> 
int &easyfind(T numbers, int n)
{
	typename T::iterator iter = std::find(numbers.begin(), numbers.end(), n);
	if (iter == numbers.end()) {
		throw (std::runtime_error("Integer not found in container."));
	}
	else
		return *iter;
}

// Write function easyfind() that accepts a type 'T'
// It takes two params, one type T, another integer

// T is a container of integers
// Function must find first occurence of second parameter in first parameter

// NO OCCURRENCE - Throw exception or return error of choice
// TIP: Analyse how standard containers behave


// ! Associative containers in STL (standard template library)
//   are containers which store elements in a way that allows
//   fast retrieval based on KEYS rather than their 
//   POSITION/INSERTION order.