/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 20:57:21 by jeongwle          #+#    #+#             */
/*   Updated: 2021/10/12 21:05:56 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <string>
# include <iostream>

template <typename T>
void swap(T& param1, T& param2){
    T temp;
    temp = param1;
    param1 = param2;
    param2 = temp;
}

template <typename T>
T min(T param1, T param2){
    if (param1 < param2){
        return param1;
    }
    return param2;
}

template <typename T>
T max(T param1, T param2){
    if (param1 > param2){
        return param1;
    }
    return param2;
}

 
#endif