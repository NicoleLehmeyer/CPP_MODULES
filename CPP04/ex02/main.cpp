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

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main ()
{
	std::cout << std::endl << "*************************************************************" << std::endl;
	std::cout << "**    INCOMPILABLE (CANNOT INSTANTIATE ABSTRACT CLASS):    **" << std::endl;
	std::cout << "*************************************************************" << std::endl << std::endl;

	// TEST 1:
	AAnimal a;

	// TEST 2:
	AAnimal *b = new AAnimal;
	delete b;

	// std::cout << std::endl << "*************************************************************" << std::endl;
	// std::cout << "**          ARRAY BRAIN TESTS (These should work):         **" << std::endl;
	// std::cout << "*************************************************************" << std::endl << std::endl;

	// const AAnimal *animalArray[2];

	// 	animalArray[0] = new Dog();
	// 	animalArray[1] = new Cat();
	// 	std::cout << std::endl;
	// 	for (int i = 0; i < 2; i++)
	// 	{
	// 		std::cout << "ARRAY INDEX[" << i << "] : " << animalArray[i]->getType() << std::endl;
	// 		animalArray[i]->makeSound();
	// 	}
	// 	std::cout << std::endl;

	// std::cout << std::endl << "*************************************************************" << std::endl;
	// std::cout << "**                          DELETING:                      **" << std::endl;
	// std::cout << "*************************************************************" << std::endl << std::endl;

	// for (int i = 0; i < 2; i++)
	// {
	// 	delete animalArray[i];
	// 	std::cout << std::endl;
	// }
	// return (0);
}
