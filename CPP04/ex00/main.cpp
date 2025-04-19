/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <nlehmeye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:00:36 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/04/15 12:00:37 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main ()
{
	std::cout << std::endl << "*************************************************************" << std::endl;
	std::cout << "**                  NICOLE'S RIGHT TESTS:                  **" << std::endl;
	std::cout << "*************************************************************" << std::endl << std::endl;
	
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << std::endl;
	std::cout << "j is a " << j->getType() << std::endl;
	std::cout << "i is a " << i->getType() << std::endl;
	std::cout << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;

std::cout << std::endl << "*************************************************************" << std::endl;
	std::cout << "**                  NICOLE'S RONG TESTS:                  **" << std::endl;
	std::cout << "*************************************************************" << std::endl << std::endl;

	const WrongAnimal *thatsWrong = new WrongAnimal();
	const WrongAnimal *r = new WrongCat();

	std::cout << std::endl;
	std::cout << "r is a " << r->getType() << std::endl;
	std::cout << std::endl;
	r->makeSound();
	thatsWrong->makeSound();
	std::cout << std::endl;

	delete r;
	delete thatsWrong;

	return (0);
}
