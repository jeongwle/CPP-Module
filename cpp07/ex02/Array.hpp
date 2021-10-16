/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 21:44:38 by jeongwle          #+#    #+#             */
/*   Updated: 2021/10/16 12:33:54 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array{
private :
    T* _arr;
    unsigned int _n;

public :
    Array() : _arr(new T), _n(0){}
    Array(unsigned int n) : _arr(new T[n]), _n(n){}
    Array(const Array& copy){
        this->_arr = new T[copy._n];
        *(this) = copy;
    }
    ~Array(){
        std::cout << "destructor called" << std::endl;
        delete [] this->_arr;
    }
    Array& operator=(const Array& array){
        this->_n = array._n;
        for (size_t i = 0; i < this->_n; i++){
            this->_arr[i] = array._arr[i];
        }
        return *(this);
    }
    class IndexOutOfRange : public std::exception{
        virtual const char* what() const throw(){
            return "Exception : Index is out of range.";
        }
    };
    T& operator[](int idx){
        if (idx < 0 || idx >= static_cast<int>(this->_n)){
            throw IndexOutOfRange();
        }
        return this->_arr[idx];
    }
    unsigned int size(){
        return this->_n;
    }
};

#endif
