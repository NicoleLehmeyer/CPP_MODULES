/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 18:18:59 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/03/17 18:19:01 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iomanip>
#include <stdlib.h>

PhoneBook::PhoneBook() : nbContacts(0), iterContacts(0)
{}

PhoneBook::~PhoneBook()
{}

void   PhoneBook::addContact()
{
    contacts[iterContacts].fillContact();
    iterContacts++;
    if (iterContacts >= 8)
        iterContacts = 0;
    if (nbContacts <= 7)
        nbContacts++;
}

void    PhoneBook::listPb()
{
    std::cout << std::endl << "*********************************************" << std::endl;
    std::cout << "|   INDEX  |FIRST NAME|LAST NAME | NICKNAME |" << std::endl;
    std::cout << "*********************************************" << std::endl;
    if (nbContacts < 1)
        std::cout << "********   YOU HAVE NO FRENS :(   **********" << std::endl;
    for (int i = 0; i < nbContacts; ++i)
    {
        std::cout << "|";
        std::cout << std::right << std::setw(10) << i << "|";
        if (contacts[i].getFirstName().length() <= 10)
            std::cout << std::right << std::setw(10) << contacts[i].getFirstName() << "|";
        else if (contacts[i].getFirstName().length() > 10)
            std::cout << contacts[i].getFirstName().substr(0,9) << ".|";

        if (contacts[i].getLastName().length() <= 10)
            std::cout << std::right << std::setw(10) << contacts[i].getLastName() << "|";
        else if (contacts[i].getLastName().length() > 10)
            std::cout << contacts[i].getLastName().substr(0,9) << ".|";

        if (contacts[i].getNickname().length() <= 10)
            std::cout << std::right << std::setw(10) << contacts[i].getNickname() << "|";
        else if (contacts[i].getNickname().length() > 10)
            std::cout << contacts[i].getNickname().substr(0,9) << ".|";

        std::cout << std::endl;
    }
    std::cout << "*********************************************" << std::endl;
}

void    PhoneBook::listContact()
{
    std::string input;

    if (nbContacts < 1)
        return;

    std::cout << "ENTER INDEX NUMBER:  ";
    std::getline(std::cin, input);
    if (input.empty() || input < "0" || input > "7" || atoi(input.c_str()) >= nbContacts)
    {
        std::cout << "INVALID INPUT." << std::endl;
        return ;
    }
    std::cout << std::endl << "**  CONTACT INFORMATION FOR INDEX:  " << input << "  **"<< std::endl;
    std::cout << "FIRST NAME:     " << contacts[atoi(input.c_str())].getFirstName() << std::endl;
    std::cout << "LAST NAME:      " << contacts[atoi(input.c_str())].getLastName() << std::endl;
    std::cout << "NICKNAME:       " << contacts[atoi(input.c_str())].getNickname() << std::endl;
    std::cout << "PHONE NUMBER:   " << contacts[atoi(input.c_str())].getPhoneNumber() << std::endl;
    std::cout << "DARKEST SECRET: " << contacts[atoi(input.c_str())].getDarkestSecret() << std::endl << std::endl;
}