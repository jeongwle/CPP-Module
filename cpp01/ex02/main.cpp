/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 12:17:29 by jeongwle          #+#    #+#             */
/*   Updated: 2021/08/19 12:17:31 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void){
    std::string string("HI THIS IS BRAIN");
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "string address : " << &string << std::endl;
    std::cout << "strPTR address : " << &stringPTR << std::endl;
    std::cout << "strREF address : " << &stringREF << std::endl;
    std::cout << "---------------------------------" << std::endl;
    std::cout << "string output : " << string << std::endl;
    std::cout << "strPTR output : " << *stringPTR << std::endl;
    std::cout << "strREF output : " << stringREF << std::endl;
}
