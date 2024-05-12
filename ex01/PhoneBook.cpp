/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 11:29:10 by kfouad            #+#    #+#             */
/*   Updated: 2024/05/12 14:06:49 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::addContact(int i, Contact contact)
{
     contacts[i] = contact;
};

void PhoneBook::print_info_contact(std::string str)
{
     int j = 0;
     int i = 0;
     int len = str.length();

     if(str.length() > 10)
          len = 10;
     while(j < 10 - len)
     {
          std::cout << " ";
          j++;
     }
     while(str[i] != '\0' && i < 9)
     {
          std::cout << str[i];
          i++;
     }
     if(i == 9)
          std::cout << ".";
};

void PhoneBook::display_contacts(int *index)
{
     int j = 0;
     
     while(contacts[j].get_firstName().length() != 0)
     {
          std::cout << "      " << j;
          std::cout << "|";
          print_info_contact(contacts[j].get_firstName());
          std::cout << "|";
          print_info_contact(contacts[j].get_lastName());
          std::cout << "|";
          print_info_contact(contacts[j].get_nickName());
          std::cout << std::endl;
          j++;
     }
     *index = j;
};

void PhoneBook::print_full_info_contact(int index)
{
     std::cout << contacts[index].get_firstName() << std::endl;
     std::cout << contacts[index].get_lastName() << std::endl;
     std::cout << contacts[index].get_nickName() << std::endl;
     std::cout << contacts[index].get_phoneNumber() << std::endl;
     std::cout << contacts[index].get_darketSecret() << std::endl;
};

void PhoneBook::searchContact(){
     std::string index_str;
     int index;
     int nmb_index;
     display_contacts(&nmb_index);
     if(nmb_index != 0)
     {
          std::cout << std::endl;
          std::cout << "ktab index li bghit ntl3 lik more info 3lih" << std::endl;
          std::cout << "===>";
          getline(std::cin, index_str);
          if(index_str.length() == 1 && index_str[0] >= '0' && index_str[0] <= '9')
          {
               index = stoi(index_str);
               if(index >= 0 && index <= 9)
                    print_full_info_contact(index);
          }
          else
               std::cout << "makayn ta contact" << std::endl;
     }
};