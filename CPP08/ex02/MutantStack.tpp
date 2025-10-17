#include "MutantStack.hpp"

template <typename T> MutantStack<T>::MutantStack() : std::stack<T> {}

template <typename T> MutantStack<T>::MutantStack(MutantStack const &other) {std::stack<t>(other)}
MutantStack &template <typename T> MutantStack<T>::operator=(MutantStack const &other)
{
	if (this != &other)
		std::stack<T>::operator=(other);
	return (*this);
}

template <typename T> MutantStack<T>::~MutantStack() {}

template <typename T> MutantStack<T>::iterator begin()
{
	return (std::stack<T>::c.begin());
}
template <typename T> MutantStack<T>::iterator end()
{
	return (std::stack<T>::c.end());
}

template <typename T> MutantStack<T>::const_iterator begin() const
{
	return (std::stack<T>::c.begin());
}

template <typename T> MutantStack<T>::const_iterator end()
{
	return (std::stack<T>::c.end());
}

template <typename T> MutantStack<T>::reverse_iterator bregin()
{
	return (std::stack<T>::c.rbegin());
}

template <typename T> MutantStack<T>::reverse_iterator rend()
{
	return (std::stack<T>::c.rend());
}

template <typename T> MutantStack<T>::const_reverse_iterator rbegin() const
{
	return (std::stack<T>::c.rbegin());
}

template <typename T> MutantStack<T>::const_reverse_iterator rend() const
{
	return (std::stack<T>::c.rend());
}