/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:17:29 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/03/19 16:17:30 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Weapon {

    public:
        Weapon();
        Weapon(std::string const& newType);
        ~Weapon();
        
        //GETTERS
        std::string const& getType();
        
        //SETTERS
        void setType(std::string const& newType);

    private:
        std::string type;
};



