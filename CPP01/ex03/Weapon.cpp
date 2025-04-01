/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:17:38 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/03/19 16:17:39 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp" 

Weapon::Weapon()
{}

Weapon::Weapon(std::string const& newType)
{
    setType(newType);
}

Weapon::~Weapon()
{}

//GETTERS
std::string const& Weapon::getType(){
    return type;
}

//SETTERS
void Weapon::setType(std::string const& newType){
    this->type = newType;
}
