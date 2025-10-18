#pragma once

#include <stack>
#include <iostream>
#include <cassert>

template <typename T> class MutantStack : public std::stack<T> {
	private:

	public:
		MutantStack();
		MutantStack(MutantStack const &other);
		MutantStack &operator=(MutantStack const &other);
		~MutantStack();

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;		

		iterator begin();
		iterator end();

		const_iterator begin() const;
		const_iterator end() const;

		reverse_iterator rbegin();
		reverse_iterator rend();

		const_reverse_iterator rbegin() const;
		const_reverse_iterator rend() const;
};

#include "MutantStack.tpp"

//std::stack is a container adapter
//It stores elements in an underlying container (c)
//c is protected in standard std::stack implementation
//When a class publicly inherits from std::stack, it can access c
//We expose c.begin()... etc etc... 
//MutantStack lets callers iterate the whole container and access non-top elements
//It doesn't change std::stack 's push/pop semantics
//It provides direct access to the underlying containers iterators, and hence, elements
//Now we can traverse and modify non-top elements