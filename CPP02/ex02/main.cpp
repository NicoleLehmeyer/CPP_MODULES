/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <nlehmeye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 15:31:13 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/03/31 15:31:14 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed (2));
	Fixed c(12.5f);
	Fixed d(5);

	std::cout << std::endl << "*************************************************************" << std::endl;

	std::cout << "                  NICOLE'S TESTS:" << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << std::endl << "COMPARISON OPERATORS - >, <, >=, <=, ==, !=" << std::endl;
	std::cout << "c == d :   " << Fixed(c == d) << std::endl;
	std::cout << "c != d :   " << Fixed(c != d) << std::endl;
	std::cout << "c < d  :   " << Fixed(c < d) << std::endl;
	std::cout << "c <= d :   " << Fixed(c <= d) << std::endl;
	std::cout << "c > d  :   " << Fixed(c > d) << std::endl;
	std::cout << "c >= d :   " << Fixed(c >= d) << std::endl;

	std::cout << std::endl << "ARITHMETIC OPERATORS - +, -, *, /" << std::endl;
	std::cout << "c + d :   " << Fixed(c + d) << std::endl;
	std::cout << "c - d :   " << Fixed(c - d) << std::endl;
	std::cout << "d - c :   " << Fixed(d + c) << std::endl;
	std::cout << "c * d :   " << Fixed(c * d) << std::endl;
	std::cout << "c / d :   " << Fixed(c / d) << std::endl;
	std::cout << "d / c :   " << Fixed(d / c) << std::endl;

	std::cout << std::endl << "INCREMENT/DECREMENT = i++, ++i, i--, --i" << std::endl;
	std::cout << "d++ :   " << d++ << std::endl;
	std::cout << "++d :   " << ++d << std::endl;
	std::cout << "d-- :   " << d-- << std::endl;
	std::cout << "--d :   " << --d << std::endl;

	std::cout << std::endl << "MIN/MAX" << std::endl;
	std::cout << "min(c, d) :   " << Fixed::min(c, d) << std::endl;
	std::cout << "max(c, d) :   " << Fixed::max(c, d) << std::endl;

	std::cout << std::endl << "*************************************************************" << std::endl;

	std::cout << "SUBJECT FILE TESTS:" << std::endl << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;

	std::cout << "*************************************************************" << std::endl;
}