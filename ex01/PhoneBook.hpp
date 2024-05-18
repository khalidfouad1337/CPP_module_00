/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 10:45:46 by kfouad            #+#    #+#             */
/*   Updated: 2024/05/18 03:56:07 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#define BGRN "\e[1;32m"
#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"

class PhoneBook
{
private:
    Contact contacts[8];
    void print_info_contact(std::string str);
    void display_contacts(int *index);
    void print_full_info_contact(int index);

public:
    PhoneBook();
    void addContact(int i, Contact contact);
    void searchContact();
    ~PhoneBook();
};

#endif
