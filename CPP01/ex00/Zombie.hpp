/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:12:34 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/03/19 16:12:35 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Zombie {

    public:
        Zombie(std::string name);
        ~Zombie();

        void announce(void);

    private:
        std::string _name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);