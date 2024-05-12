/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 10:45:46 by kfouad            #+#    #+#             */
/*   Updated: 2024/05/12 14:03:18 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
    Contact contacts[8];

    void print_info_contact(std::string str);
    void display_contacts(int *index);
    void print_full_info_contact(int index);

public:
    void addContact(int i, Contact contact);
    void searchContact();
};

#endif