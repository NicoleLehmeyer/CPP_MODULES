/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <nlehmeye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:30:08 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/04/15 11:30:10 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat: public Animal {

	public:
		Cat();
		Cat(const Cat &copy);
		Cat& operator=(const Cat &copy);
		~Cat();

		void makeSound() const;
};

