/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 10:43:33 by kfouad            #+#    #+#             */
/*   Updated: 2024/05/12 14:19:43 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string.h>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int promp(std::string str)
{
    std::cout << str << std::endl;
    std::cout << "====>";
    return (1);
}

Contact fill_data()
{
    Contact contact;
    std::string firstN, lastN, nickN, phoneN, darkestS;
    while(firstN.length() == 0 && promp("Enter first name"))
        getline(std::cin, firstN);
    while(lastN.length() == 0 && promp("Enter last name"))
        getline(std::cin, lastN);
    while(nickN.length() == 0 && promp("Enter nickname"))
        getline(std::cin, nickN);
    while(phoneN.length() == 0 && promp("Enter phone number"))
        getline(std::cin, phoneN);
    while(darkestS.length() == 0 && promp("Enter darkest secret"))
        getline(std::cin, darkestS);
    contact.fill_contact(firstN, lastN, nickN, phoneN, darkestS);
    return contact;
}

int main(int ac, char **av)
{
    (void)av;
    if(ac == 1)
    {
        PhoneBook phonebook;
        int i = 0;
        Contact contact;
        std::string cmd;
        
        while(1)
        {
            promp("ktab chi haja");
            getline(std::cin, cmd);
            if(cmd.compare("ADD") == 0)
            {
                contact = fill_data();
                phonebook.addContact(i, contact);
                i++;
            }
            else if(cmd.compare("SEARCH") == 0)
                phonebook.searchContact();
            else if(cmd.compare("EXIT") == 0)
                break;
            else
                std::cout << "ktab asahbi chihaja shiha";
        }
    }
}