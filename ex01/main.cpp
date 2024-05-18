/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 10:43:33 by kfouad            #+#    #+#             */
/*   Updated: 2024/05/18 03:48:14 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string.h>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int promp(std::string str)
{
    std::cout << BGRN << str << "\n"<< WHT << "====> ";
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
        
        promp("PLEASE CHOOSE 'ADD' / 'SEARCH' / 'EXIT' :");
        while(getline(std::cin, cmd))
        {
            
            if (std::cin.eof() || cmd.compare("EXIT") == 0)
                 break ;
            else if(cmd.compare("ADD") == 0)
            {
                contact = fill_data();
                phonebook.addContact(i, contact);
                if (i == 7)
                    i = -1;
                i++;
            }
            else if(cmd.compare("SEARCH") == 0)
            {
                std :: cout << i << "==>" << std :: endl;
                phonebook.searchContact();
            }
        promp("PLEASE CHOOSE 'ADD' / 'SEARCH' / 'EXIT' :");
        }
    }
}