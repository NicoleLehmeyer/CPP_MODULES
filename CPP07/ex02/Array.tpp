#pragma once
#include "Array.hpp"

template <typename T> Array<T>::Array() : _arr(NULL), _size(0) {}

template <typename T> Array<T>::Array(unsigned int n) : _arr(new T[n]), _size(n) {}

template <typename T> Array<T>::Array(Array const &other) : _arr(new T[other._size]), _size(other._size)
{
	for (unsigned int i = 0; i < _size; i++)
	{
		_arr[i] = other._arr[i];
	}
}

template <typename T> Array<T>::~Array() {delete [] _arr;}

template <typename T> unsigned int Array<T>::size() const
{
	return _size;
}

template <typename T> T &Array<T>::operator[](unsigned int i)
{
	if (i >= _size)
		throw IndexOutOfBounds();
	return _arr[i];
}

template <typename T> const T &Array<T>::operator[](unsigned int i) const
{
	if (i >= _size)
		throw IndexOutOfBounds();
	return _arr[i];
}

template <typename T> const char *Array<T>::IndexOutOfBounds::what() const throw()
{
	return ("ERROR: Index out of bounds");
}
