/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <nlehmeye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 19:03:57 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/04/08 19:03:58 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	std::cout << std::endl << "*************************************************************" << std::endl;
	std::cout << "**                     NICOLE'S TESTS:                     **" << std::endl;
	std::cout << "*************************************************************" << std::endl << std::endl;
	
	ClapTrap nicole("nicole");

	nicole.attack("bethany");
	nicole.takeDamage(4);
	nicole.beRepaired(2);
	nicole.takeDamage(8);
	nicole.attack("bethany");

	std::cout << std::endl;
	return (0);
}