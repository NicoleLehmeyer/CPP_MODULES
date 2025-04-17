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
#include "Brain.hpp"

int main ()
{
	std::cout << std::endl << "*************************************************************" << std::endl;
	std::cout << "**                   STANDARD BRAIN TESTS:                 **" << std::endl;
	std::cout << "*************************************************************" << std::endl << std::endl;
	
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << std::endl;
	std::cout << "j is a " << j->getType() << std::endl;
	std::cout << "i is a " << i->getType() << std::endl;

	std::cout << std::endl;

	delete j;
	delete i;


	std::cout << std::endl << "*************************************************************" << std::endl;
	std::cout << "**                    ARRAY BRAIN TESTS:                   **" << std::endl;
	std::cout << "*************************************************************" << std::endl << std::endl;

	const Animal *animalArray[10];
	for (int i = 0; i < 5; i++)
	{
		animalArray[i] = new Dog();
		std::cout << std::endl;
		std::cout << "ARRAY INDEX[" << i << "] : " << animalArray[i]->getType() << std::endl;
		std::cout << std::endl;
	}
	for (int i = 5; i < 10; i++)
	{
		animalArray[i] = new Cat();
		std::cout << std::endl;
		std::cout << "ARRAY INDEX[" << i << "] : " << animalArray[i]->getType() << std::endl;
		std::cout << std::endl;
	}

	std::cout << std::endl << "*************************************************************" << std::endl;
	std::cout << "**                      DEEP COPY TESTS:                   **" << std::endl;
	std::cout << "*************************************************************" << std::endl << std::endl;

	Dog *a = new Dog();

	a->setIdea(100, "This shouldn't work.");
	a->setIdea(0, "This is an idea yeah");
	std::cout << "This is the set idea(0) for dog a:   " << a->getIdea(0) << std::endl;
	
	Dog *b = new Dog(*a);
	std::cout << "This is the set idea(0) for dog b:   " << b->getIdea(0) << std::endl;

	std::cout << std::endl << "*************************************************************" << std::endl;
	std::cout << "**                          DELETING:                      **" << std::endl;
	std::cout << "*************************************************************" << std::endl << std::endl;

	delete b;
	delete a;

	for (int i = 0; i < 10; i++)
	{
		delete animalArray[i];
		std::cout << std::endl;
	}
	return (0);
}
