/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:15:16 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/03/19 16:15:17 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
/*
Zombie* zombieHorde(int N, std::string name)
{
	Zombie* horde[N] = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		horde[i]->_name = name;
		// std::cout << "Name of the created zomb:  ";
		// horde[i]->announce();
		// std::cout << std::endl;
	}
	return (horde[0]);
}
*/
Zombie* zombieHorde(int N, std::string name)
{
	Zombie* horde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		horde[i] = Zombie(name);
	}
	return (horde);
}