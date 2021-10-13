/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 21:04:49 by jeongwle          #+#    #+#             */
/*   Updated: 2021/10/13 21:41:54 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
#include <iostream>

template <typename T>
void iter(T* array, int length, void (*func)(T&)){
    for (int i = 0; i < length; i++){
        func(array[i]);
    }
}


#endif