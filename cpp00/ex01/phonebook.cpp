/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 18:40:14 by jeongwle          #+#    #+#             */
/*   Updated: 2021/07/16 21:42:09 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

phonebook::phonebook(){
    idx = 0;
}

phonebook::~phonebook(){

}

void    phonebook::add(char *str){
    if (idx == 0)
    {
        first = str;
        idx++;
    }
    else if (idx == 1)
    {
        last = str;
        idx++;
    }
    else if (idx == 2)
    {
        nick = str;
        idx++;
    }
    else if (idx == 3)
    {
        phone = str;
        idx++;
    }
    else
    {
        secret = str;
        idx++;
    }
}