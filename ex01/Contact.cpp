/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 10:28:43 by kfouad            #+#    #+#             */
/*   Updated: 2024/05/12 10:40:35 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    firstName = "";
    lastName = "";
    nickName = "";
    phoneNumber = "";
    darketSecret = "";
};

void Contact::fill_contact(std::string firstN , std::string lastN, std::string nickN, std::string phoneN, std::string darkestS)
{
    firstName = firstN;
    lastName = lastN;
    nickName = nickN;
    phoneNumber = phoneN;
    darketSecret = darkestS;
};

std::string Contact::get_firstName(){
    return firstName;
};

std::string Contact::get_lastName(){
    return lastName;
};

std::string Contact::get_nickName(){
    return nickName;
};

std::string Contact::get_phoneNumber(){
    return phoneNumber;
};

std::string Contact::get_darketSecret(){
    return darketSecret;
};