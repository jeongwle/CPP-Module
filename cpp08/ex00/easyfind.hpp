/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:43:20 by jeongwle          #+#    #+#             */
/*   Updated: 2021/10/23 20:34:48 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <exception>
# include <iostream>

class CannotFindException : public std::exception{
    virtual const char* what() const throw(){
        return "Cannot find.";
    }
};

template <typename T>
typename T::iterator easyfind(T& container , int whatever){
    std::cout << "default iterator" << std::endl;
    typename T::iterator iter;
    iter = std::find(container.begin(), container.end(), whatever);
    if (iter == container.end()){
        throw CannotFindException();
    }
    return iter;
}

template <typename T>
typename T::const_iterator easyfind(const T& container , int whatever){
    std::cout << "const iterator" << std::endl;
    typename T::const_iterator iter = std::find(container.begin(), container.end(), whatever);
    if (iter == container.end()){
        throw CannotFindException();
    }
    return iter;
}

#endif
