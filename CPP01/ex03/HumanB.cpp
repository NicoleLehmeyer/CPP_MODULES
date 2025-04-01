/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:18:22 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/03/19 16:18:23 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string newName)
{
    this->name = newName;
}

HumanB::~HumanB()
{}

void HumanB::attack()
{
    std::cout << std::endl;
    std::cout << this->name << " attacks with their " << humanBWeapon->getType() << std::endl;
    std::cout << std::endl;  
    return ;
}

void HumanB::setWeapon(Weapon &newWeapon)
{
    humanBWeapon = &newWeapon;
    return ;
}