/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:17:17 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/03/19 16:17:18 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main(void)
{

    {
        Weapon  club = Weapon("crude spiked club");

        HumanA bob("Bob", club);
        bob.attack(); 
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon  club = Weapon("crude spiked club");

        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }

    return (0);
}
