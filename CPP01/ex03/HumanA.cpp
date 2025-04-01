/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:17:57 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/03/19 16:17:58 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"



HumanA::HumanA(const std::string &newName, Weapon &newWeapon) : humanAWeapon(newWeapon)
{
    this->name = newName;
}

HumanA::~HumanA()
{}

void HumanA::attack()
{
    std::cout << std::endl;
    std::cout << this->name << " attacks with their " << humanAWeapon.getType() << std::endl;
    std::cout << std::endl;
    return ;
}