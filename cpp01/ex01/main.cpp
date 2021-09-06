/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 12:17:11 by jeongwle          #+#    #+#             */
/*   Updated: 2021/08/19 12:17:12 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
    Zombie  *horde = NULL;
    int N;

    std::cout << "please enter the number you want to create" << std::endl;
    std::cin >> N;
    if (N <= 0){
        std::cout << "error" << std::endl;
        return (0);
    }
    horde = horde->zombiehorde(N, "Zombie");
    for (int i = 0; i < N; i++)
    {
        horde[i].announce();
        std::cout << "--------------------------------" << std::endl; 
    }
    std::cout << "now destructor call" << std::endl;
    delete [] horde;
    return (0);
}
