/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:03:37 by jeongwle          #+#    #+#             */
/*   Updated: 2021/10/07 17:42:21 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char *argv[]){
    if (argc != 2){
        std::cout << "Wrong input" << std::endl;
        return (-1);
    }
    std::string av(argv[1]);
    Convert convert(av);
    convert.convertArgv();

    return (0);
}
