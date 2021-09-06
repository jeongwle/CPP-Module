/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 12:17:01 by jeongwle          #+#    #+#             */
/*   Updated: 2021/08/19 12:17:02 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string   itoa(int N){
    std::string temp;
    std::string res;
    int num = N;
    while (num / 10)
    {
        char c = num % 10 + '0';
        temp.append(1, c);
        num /= 10;
    }
    char c = num + '0';
    temp.append(1, c);
    for (size_t i = 0; i < temp.length(); i++)
    {
        res.append(1, *(temp.rbegin() + i));
    }
    return (res);
}

Zombie* Zombie::zombiehorde(int N, std::string name){
    Zombie  *horde = NULL;
    horde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        std::string num = itoa(i + 1);
        horde[i]._name = name + num;
    }
    return (horde);
}
