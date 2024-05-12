/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MegaPhone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:58:09 by khalid            #+#    #+#             */
/*   Updated: 2024/05/12 03:46:51 by khalid           ###   ########.fr       */
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
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else
    {
        while (i < ac)
        {
            UpperCase(av[i]);
            i++;
        }
        std::cout << std::endl;
    }
}