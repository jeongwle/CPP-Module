
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:54:16 by jeongwle          #+#    #+#             */
/*   Updated: 2021/10/26 17:25:02 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template <typename T>
MutantStack<T>::MutantStack(){
    return ;
}

template <typename T>
MutantStack<T>::~MutantStack(){
    return ;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& copy){
    *(this) = copy;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& mutantStack){
    this->c = mutantStack.c;
    return *(this);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(){
    return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(){
    return this->c.end();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const{
    return this->c.begin();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const{
    return this->c.end();
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin(){
    return this->c.rbegin();
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend(){
    return this->c.rend();
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const{
    return this->c.rbegin();
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const{
    return this->c.rend();
}
