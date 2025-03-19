/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 18:18:36 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/03/17 18:18:37 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <string>

//CONSTRUCTOR & DECONSTRUCTOR
Contact::Contact()
{}

Contact::~Contact()
{}

//GETTERS
std::string const& Contact::getFirstName() {
    return firstName;
}
std::string const& Contact::getLastName() {
    return lastName;
}
std::string const& Contact::getNickname() {
    return nickname;
}
std::string const& Contact::getPhoneNumber() {
    return phoneNumber;
}
std::string const& Contact::getDarkestSecret() {
    return darkestSecret;
}


//SETTERS
void Contact::setFirstName(std::string const& newFirstName) {
    firstName = newFirstName;
}
void Contact::setLastName(std::string const& newLastName) {
    lastName = newLastName;
}
void Contact::setNickname(std::string const& newNickname) {
    nickname = newNickname;
}
void Contact::setPhoneNumber(std::string const& newPhoneNumber) {
    phoneNumber = newPhoneNumber;
}
void Contact::setDarkestSecret(std::string const& newDarkestSecret) {
    darkestSecret = newDarkestSecret;
}


int Contact::fillContact()
{
    std::string input;

    while (1)
    {
        std::cout << "ENTER FIRST NAME:     ";
        std::getline(std::cin, input);
        if (input.empty())
            std::cout << std::endl << "INVALID INPUT, TRY AGAIN." << std::endl;
        else
            break;
    }
    setFirstName(input);

    while (1)
    {
        std::cout << "ENTER LAST NAME:      ";
        std::getline(std::cin, input);
        if (input.empty())
            std::cout << std::endl << "INVALID INPUT, TRY AGAIN." << std::endl;
        else
            break;
    }
    setLastName(input);

    while (1)
    {
        std::cout << "ENTER NICKNAME:       ";
        std::getline(std::cin, input);
        if (input.empty())
            std::cout << std::endl << "INVALID INPUT, TRY AGAIN." << std::endl;
        else
            break;
    }
    setNickname(input);

    while (1)
    {
        std::cout << "ENTER PHONE NUMBER:   ";
        std::getline(std::cin, input);
        if (input.empty())
            std::cout << std::endl << "INVALID INPUT, TRY AGAIN." << std::endl;
        else
            break;
    }
    setPhoneNumber(input);

    while (1)
    {
        std::cout << "ENTER DARKEST SECRET: ";
        std::getline(std::cin, input);
        if (input.empty())
            std::cout << std::endl << "INVALID INPUT, TRY AGAIN." << std::endl;
        else
            break;
    }
    setDarkestSecret(input);

    std::cout << std::endl << "** CONTACT ADDED TO THE PHONEBOOK **" << std::endl << std::endl;

    return(0);
}
