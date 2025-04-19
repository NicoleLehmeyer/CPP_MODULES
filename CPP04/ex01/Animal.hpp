/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <nlehmeye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:30:22 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/04/15 11:30:23 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Brain.hpp"
#include <iostream>
#include <string>

class Animal {

	protected:
		std::string _type;

	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal &copy);
		Animal& operator=(const Animal &copy);
		virtual ~Animal();
		
		void setType(std::string type);
		std::string getType(void) const;

		virtual void makeSound() const;

};
