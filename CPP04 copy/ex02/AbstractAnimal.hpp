/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AbstractAnimal.hpp                                 :+:      :+:    :+:   */
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

class AbstractAnimal {

	protected:
		std::string _type;

	public:
		AbstractAnimal();
		AbstractAnimal(std::string type);
		AbstractAnimal(const AbstractAnimal &copy);
		AbstractAnimal& operator=(const AbstractAnimal &copy);
		virtual ~AbstractAnimal();
		
		void setType(std::string type);
		std::string getType(void) const;

		virtual void makeSound() const = 0;

};
