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
#include "AbstractAnimal.hpp"
#include "Brain.hpp"

class Dog: public AbstractAnimal {

	private:
		Brain *_dogBrain;

	public:
		std::string _type;

		Dog();
		Dog(const Dog &copy);
		Dog& operator=(const Dog &copy);
		~Dog();

		void makeSound() const;
		const std::string getIdea(size_t i) const;
		void setIdea(size_t i, std::string idea);

};
