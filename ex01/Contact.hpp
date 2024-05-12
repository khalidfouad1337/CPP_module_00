/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 10:22:29 by kfouad            #+#    #+#             */
/*   Updated: 2024/05/12 11:14:33 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include<iostream>
#include <string.h>

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darketSecret;

public:
    Contact();
    void fill_contact(std::string fName, std::string lName, std::string nName, std::string pNumber, std::string dSecret);
    std::string get_firstName();
    std::string get_lastName();
    std::string get_nickName();
    std::string get_phoneNumber();
    std::string get_darketSecret();
};



#endif
