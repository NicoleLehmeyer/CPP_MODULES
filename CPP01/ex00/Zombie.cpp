/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:12:44 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/03/19 16:12:45 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
}

Zombie::~Zombie()
{
    std::cout <<"Zombie " << _name << " deconstructed." << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiiinnnzzzZ..." << std::endl;
}
