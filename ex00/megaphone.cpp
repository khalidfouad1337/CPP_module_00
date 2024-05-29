/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MegaPhone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:58:09 by khalid            #+#    #+#             */
/*   Updated: 2024/05/29 18:56:40 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void    UpperCase(std::string str)
{
    char tmp;
    for (unsigned int j = 0; j < str.length(); j++)
    {
        tmp = str[j];
        if (tmp >= 97 && tmp <= 122)
            tmp = toupper(tmp);
        std::cout << tmp;
    }
}

int main(int ac, char **av)
{
    int i;
    
    i = 1;
    if(ac <= 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (i < ac)
            UpperCase(av[i++]);
        std::cout << std::endl;
    }
}
