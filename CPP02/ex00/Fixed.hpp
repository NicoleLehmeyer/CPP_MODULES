/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <nlehmeye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 15:29:35 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/03/31 15:29:36 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed {

	private:
		int _raw;
		static const int _fractionalBits = 8;

	public:
		Fixed();
		~Fixed();

		Fixed(const Fixed& copy);
		Fixed& operator=(const Fixed& copy);

		int getRawBits(void) const;
		void setRawBits(int const raw);
};