/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:16:32 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/03/19 16:16:33 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <stdlib.h>
#include <iostream>

int main (void)
{

    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << std::endl;
    
    std::cout << "Memory address of string:    " << &string << std::endl;
    std::cout << "Memory address of stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address of stringREF: " << &stringREF << std::endl;
    std::cout << std::endl;

    std::cout << "Value of string:               " << string << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
    std::cout << std::endl;

    return (0);
}
