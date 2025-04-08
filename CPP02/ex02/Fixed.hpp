/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <nlehmeye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 15:31:24 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/03/31 15:31:25 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed {

	private:
		int _raw;
		static const int _fractionalBits = 8;

	public:
		Fixed();
		~Fixed();

		Fixed(const Fixed& copy);
		Fixed(const int inty);
		Fixed(const float floaty);

		Fixed& operator=(const Fixed &copy);

		float toFloat(void) const;
		int toInt(void) const;

		int getRawBits(void) const;
		void setRawBits(int const raw);

		// COMPARISON OPERATORS: ==, !=, <, <=, >, >=
		bool operator==(const Fixed &b);
		bool operator!=(const Fixed &b);
		bool operator<(const Fixed &b);
		bool operator<=(const Fixed &b);
		bool operator>(const Fixed &b);
		bool operator>=(const Fixed &b);

		// ARITHMETIC OPERATORS: +, -, *, /
		Fixed operator+(const Fixed &b) const;
		Fixed operator-(const Fixed &b) const;
		Fixed operator*(const Fixed &b) const;
		Fixed operator/(const Fixed &b) const;

		// INCREMENT/DECREMENT (PREFIX & POSTFIX) : i++, ++i, i--, --i
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);

		// MIN & MAX
		static Fixed& min(Fixed &a, Fixed &b);
		static Fixed& max(Fixed &a, Fixed &b);
		static const Fixed& min(const Fixed &a, const Fixed &b);
		static const Fixed& max(const Fixed &a, const Fixed &b);
};

std::ostream& operator<<(std::ostream& output, const Fixed& fixNumber);


// INCREMENT CORE CONCEPTS:

//   PREFIX:
//     a(3)
//     b = ++a   <-- b == 4, a == 4
//     -> Increments then returns
//     -> Returns updated value

//   POSTFIX:
//     a(3)
//     b = a++   <-- b == 3, a == 4
//     -> Returns then increments (create a copy of the current object and return that)
//     -> Returns old (original) value