/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 11:29:10 by kfouad            #+#    #+#             */
/*   Updated: 2024/05/18 02:55:29 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

 PhoneBook:: PhoneBook()
 {
     std :: cout << MAG << "********************* 𝙒𝙀𝙇𝘾𝙊𝙈𝙀 𝙏𝙊 𝙔𝙊𝙐𝙍 𝙋𝙃𝙊𝙉𝙀𝘽𝙊𝙊𝙆 📞📞😎😎 ********************\n"<< WHT << std :: endl;
 } 


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

void PhoneBook::display_contacts(int index)
{
     int j = -1;
     
     // if (index > 0 && index != 7)
     //      --index;
     // else if (index )
           
     while(++j <= index)
     {
          std::cout << "      " << j;
          std::cout << "|";
          print_info_contact(contacts[j].get_firstName());
          std::cout << "|";
          print_info_contact(contacts[j].get_lastName());
          std::cout << "|";
          print_info_contact(contacts[j].get_nickName());
          std::cout << std::endl;
     }
};

void PhoneBook::print_full_info_contact(int index)
{
     std::cout << contacts[index].get_firstName() << std::endl;
     std::cout << contacts[index].get_lastName() << std::endl;
     std::cout << contacts[index].get_nickName() << std::endl;
     std::cout << contacts[index].get_phoneNumber() << std::endl;
     std::cout << contacts[index].get_darketSecret() << std::endl;
};

void PhoneBook::searchContact(int i){
     std::string index_str;
     int index;
     // int nmb_index;
     display_contacts(i);
     
     if(i != 0)
     {
          std::cout << "Enter index for contact :===>";
          getline(std::cin, index_str);
          if(index_str.length() == 1  && index_str[0] >= '0' && index_str[0] <= '7')
          {
               index = stoi(index_str);
               if( (i >= index) && (index >= 0 && index <= 7))
                    print_full_info_contact(index);
               else
                    std :: cout << RED << "CONTACT NOT  FOUND ❌" << WHT << std :: endl;
          }
          else
               std::cout << RED << "index for contact is digit  between [ 0 ," << i - 1  << " ] ❗️" << WHT  << std::endl;
     }
     else
          std::cout << " LIST CONTACT IS EMPTY "<< std ::endl;
};

 PhoneBook:: ~PhoneBook()
 {
     std :: cout << GRN << "************************** 𝙎𝙀𝙀 𝙔𝙊𝙐 𝙇𝘼𝙏𝙀𝙍 😉 ******************************"<< WHT << std :: endl;
 } 

