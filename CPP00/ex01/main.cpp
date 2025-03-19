/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 18:18:27 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/03/17 18:18:28 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

int main()
{
    PhoneBook   phonebook;
    std::string input;


    while (1)
    {
        std::cout << std::endl << "YOU ARE IN THE PHONE BOOK. ACTIONS: ADD/SEARCH/EXIT" << std::endl << "ENTER AN ACTION:  ";
        std::getline(std::cin, input);
        if (input == "ADD")
            phonebook.addContact();
        else if (input == "SEARCH")
        {
            phonebook.listPb();
            phonebook.listContact();
        }
        else if (input == "EXIT")
            break;
        else if (input.empty() || input != "ADD" || input != "SEARCH" || input != "EXIT")
            std::cout << std::endl << "INVALID INPUT, TRY AGAIN.";
    }
    return (0);
}