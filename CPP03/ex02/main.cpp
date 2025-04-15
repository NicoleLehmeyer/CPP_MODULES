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
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	std::cout << std::endl << "*************************************************************" << std::endl;
	std::cout << "**                     NICOLE'S TESTS:                     **" << std::endl;
	std::cout << "*************************************************************" << std::endl << std::endl;
	
	// ClapTrap nicole("Nicole");
	// ScavTrap bethany("Bethany");
	FragTrap coby("Coby");

	// nicole.attack("Bethany");
	// nicole.takeDamage(4);
	// nicole.beRepaired(2);
	// nicole.takeDamage(8);
	// nicole.attack("Bethany");

	// bethany.attack("Coby");
	// bethany.takeDamage(40);
	// bethany.guardGate();
	// bethany.beRepaired(10);
	// bethany.takeDamage(60);
	// bethany.attack("Coby");

	coby.attack("Nate");
	coby.takeDamage(50);
	coby.highFivesGuys();
	coby.beRepaired(10);
	coby.takeDamage(50);
	coby.attack("Nate");

	std::cout << std::endl;
	return (0);
}