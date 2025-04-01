/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:17:47 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/03/19 16:17:48 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(const std::string &newName, Weapon &newWeapon);
        ~HumanA();

        void attack();
    
    private:
        std::string name;
        Weapon &humanAWeapon;
};

