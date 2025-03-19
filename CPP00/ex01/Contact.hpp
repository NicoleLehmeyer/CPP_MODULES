/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 18:18:45 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/03/17 18:18:46 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <string>
#include <iostream>


class Contact {

    public:
        Contact();
        ~Contact();
    
        int fillContact();

        //GETTERS
        std::string const& getFirstName();
        std::string const& getLastName();
        std::string const& getNickname();
        std::string const& getPhoneNumber();
        std::string const& getDarkestSecret();

        //SETTERS
        void setFirstName(std::string const& newFirstName);
        void setLastName(std::string const& newLastName);
        void setNickname(std::string const& newNickname);
        void setPhoneNumber(std::string const& newPhoneNumber);
        void setDarkestSecret(std::string const& newDarkestSecret);      

    private:
        // std::string firstName;
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
    
};
 
#endif
