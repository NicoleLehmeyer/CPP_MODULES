/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <nlehmeye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:56:31 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/04/15 14:56:32 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class WrongAnimal {

	protected:
		std::string _type;

	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal& operator=(const WrongAnimal &copy);
		virtual ~WrongAnimal();
		
		void setType(std::string type);
		std::string getType(void) const;

		virtual void makeSound() const;

};