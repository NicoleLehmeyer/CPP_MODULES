/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <nlehmeye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:29:43 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/04/15 11:29:44 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog: public Animal {

	public:
		Dog();
		Dog(const Dog &copy);
		Dog& operator=(const Dog &copy);
		~Dog();

		void makeSound() const;
};
