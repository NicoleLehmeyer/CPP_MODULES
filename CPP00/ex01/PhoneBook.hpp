/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 18:19:09 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/03/17 18:19:11 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook {

    private:
        Contact contacts[8];
        int     nbContacts;
        int     iterContacts;


    public:
        PhoneBook(void);
        ~PhoneBook(void);
    
    void    listPb();
    void    addContact();
    void    listContact();
};

#endif
