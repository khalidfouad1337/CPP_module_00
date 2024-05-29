/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 10:43:33 by kfouad            #+#    #+#             */
/*   Updated: 2024/05/20 19:18:17 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string.h>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int promp(std::string str)
{
    if( str == "PLEASE CHOOSE 'ADD' / 'SEARCH' / 'EXIT' :")
        std::cout << BGRN << str << "\n"<< WHT << "====> ";
    else
        std::cout << BLU << str;
    return (1);
}

int  fill_data(Contact & contact)
{
    std::string firstN, lastN, nickN, phoneN, darkestS;
    while(firstN.length() == 0 && promp("Enter first name     : "))
    {
         getline(std::cin, firstN);
         if(std::cin.eof())
           return 1; 
    }
    while(lastN.length() == 0 && promp("Enter last name      : "))
    {
        getline(std::cin, lastN);
         if(std::cin.eof())
           return 1;
    }
    while(nickN.length() == 0 && promp("Enter nickname       : "))
    {
        getline(std::cin, nickN);
        if(std::cin.eof())
           return 1;
    }
    while(phoneN.length() == 0 && promp("Enter phone number   : "))
    {
        getline(std::cin, phoneN);
        if(std::cin.eof())
           return 1;
    }
    while(darkestS.length() == 0 && promp("Enter darkest secret : "))
    {
        getline(std::cin, darkestS);
        if(std::cin.eof())
           return 1;
    }
    contact.fill_contact(firstN, lastN, nickN, phoneN, darkestS);
    return(0);
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
                if(fill_data(contact))
                    break;
                
                phonebook.addContact(i, contact);
                if (i == 7)
                    i = -1;
                i++;
            }
            else if(cmd.compare("SEARCH") == 0)
            {
                if(phonebook.searchContact() == 1)
                    break;
            }
        promp("PLEASE CHOOSE 'ADD' / 'SEARCH' / 'EXIT' :");
        }
    }
}