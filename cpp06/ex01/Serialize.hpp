/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 00:24:18 by jeongwle          #+#    #+#             */
/*   Updated: 2021/10/09 00:54:05 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP
# include <iostream>
# include <string>
# include <iomanip>

typedef struct  s_data{
    std::string name;
    int age;
    std::string email;
}               Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif