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
#include "AbstractAnimal.hpp"
#include "Brain.hpp"

class Cat: public AbstractAnimal {

	private:
		Brain *_catBrain;

	public:
		std::string _type;
		
		Cat();
		Cat(const Cat &copy);
		Cat& operator=(const Cat &copy);
		~Cat();

		void makeSound() const;
		const std::string getIdea(size_t i) const;
		void setIdea(size_t i, std::string idea);
};

