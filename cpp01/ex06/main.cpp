/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:06:24 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/06 12:06:24 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char *argv[]){
    if (argc == 2)
    {
        Karen karen;
        karen.filter(argv[1]);
    }
    else
    {
        std::cout << "arguments error" << std::endl;
    }
    return (0);
}
