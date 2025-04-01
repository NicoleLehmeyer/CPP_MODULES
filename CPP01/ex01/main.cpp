/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:14:31 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/03/19 16:14:33 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "Zombie.hpp"

int main (int argc, char** argv)
{
	if (argc != 2 || atoi(argv[1]) < 1)
	{
		std::cout << std::endl << "Insufficient/incorrect arguments. Try: \"./ZombieHorde *int < 0*\"" << std::endl << std::endl;
		return (1);
	}
	int n = atoi(argv[1]);
	Zombie* horde;
	horde = zombieHorde(n, "Peter");
	int i = 0;
	while (i < n)
	{
		horde[i].announce();
		i++;
	}
	
	delete[] horde;

	return (0);
}