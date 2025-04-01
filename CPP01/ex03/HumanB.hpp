/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:18:10 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/03/19 16:18:13 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(std::string newName);
        ~HumanB();

        void attack();
        void setWeapon(Weapon &newWeapon);
    
    private:
        std::string name;
        Weapon *humanBWeapon;
};

