#pragma once
#include <exception>

template <typename T> class Array {
	private:
		T *_arr;
		unsigned int _size;

	public:
		Array();
		Array(unsigned int n);
		Array(Array const &other);
		~Array();

		Array &operator=(Array const &other);
		T &operator[](unsigned int i);
		const T &operator[](unsigned int i) const;

		unsigned int size() const;

		class IndexOutOfBounds : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

#include "Array.tpp"

//	Develop class template Array that contains elements of type 'T'
//	and implements the following behaviour and functions:
//
//		1. Construction with no parameter - Creates empty array
//		2. Construction with uint 'n' as param - Creates array 
//		   of n elements initialised by default
//				**TIP: TRY TO COMPILE:   int * a = new int();     Then display   *a
//		3. Construction by copy and assignment operator. In both cases,
//		   modifying either the original array or its copy after copying
//		   mustn't affect the other array
//		4. Must use operator 'new[]' to allocate memory
//		5. Elements can be accessed through the subscript operator '[]'
//		6. Throw std::exception when accessing an element with the '[]' 
//				operator if its index is out of bounds
//		7. A member function 'size()' returns the number of elements in the array.
//				Takes no parameter and mustn't modify current instance
