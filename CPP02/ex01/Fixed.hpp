/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <nlehmeye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 15:30:39 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/03/31 15:30:41 by nlehmeye         ###   ########.fr       */
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

		Fixed& operator=(const Fixed& copy);

		float toFloat(void) const;
		int toInt(void) const;

		int getRawBits(void) const;
		void setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& output, const Fixed& fixNumber);

//BIT SHIFTING CONCEPTS:
//   << : Shift bits to the left
//   >> : Shift bits to the right
//   We use these for fast multiplication/division by powers of 2 in fixed-point math

//FIXED-POINT CONCEPTS:
//   We want to simulate decimal points using only integers.
//   If we want to store 3.5:
//         _value = roundf(3.5f * 256); // = 896
//         896 in binary is 0000001110000000. We reserve the last 8 bits for the decimal
//         896 represents the whole number, 3, and .5 (half = 128 out of 256)

//STORE FLOAT:   _value = roundf(float * 256)         <-- Scale up to store as an int
//GET FLOAT:     toFloat(): return_value / 256.0f   <-- Scale back down to get original float
//GET INT:       toInt():   return_value >> 8       <-- Bit shift to drop the decimal part
