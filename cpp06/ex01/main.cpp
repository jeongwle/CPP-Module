/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 00:33:55 by jeongwle          #+#    #+#             */
/*   Updated: 2021/10/09 01:00:48 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main(void){
    Data data;
    Data *deserializeReturnValue;
    uintptr_t serializeReturnValue;

    data.name = "jeongwle";
    data.age = 42;
    data.email ="jeongwle@student.42seoul.kr";

    serializeReturnValue = serialize(&data);
    deserializeReturnValue = deserialize(serializeReturnValue);

    std::cout << std::endl;
    std::cout << "-------------- Check Address --------------" << std::endl;
    std::cout << "serializeReturnValue = ";
    std::cout << std::showbase << std::hex << serializeReturnValue << std::endl;
    std::cout << "deserializeReturnValue = ";
    std::cout << deserializeReturnValue << std::endl;
    std::cout << std::resetiosflags(std::ios::showbase) << std::dec;
    std::cout << "-------------------------------------------" << std::endl << std::endl;

    std::cout << "------- Check data with deserialize return value -------" << std::endl;
    std::cout << "name : " << deserializeReturnValue->name << std::endl;
    std::cout << "age : " << deserializeReturnValue->age << std::endl;
    std::cout << "email : " << deserializeReturnValue->email << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl << std::endl;

    return 0;
}