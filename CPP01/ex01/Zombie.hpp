/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:14:45 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/03/19 16:14:46 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Zombie {

    public:
        Zombie();
        Zombie(std::string name);
        Zombie& operator=(const Zombie& other);
        ~Zombie();

        void announce(void);

    private:
        std::string _name;
};

Zombie* zombieHorde(int N, std::string name);
