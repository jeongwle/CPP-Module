/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 14:40:18 by jeongwle          #+#    #+#             */
/*   Updated: 2021/10/24 20:49:23 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <algorithm>
# include <exception>
# include <iostream>
# include <fstream>

class Span{
private :
    unsigned int _n;
    std::vector<int> _vec;
    Span();
public :
    Span(unsigned int N);
    Span(const Span& copy);
    ~Span();
    Span& operator=(const Span& span);
    bool whetherCanAdd(size_t size);
    void addNumber(int n);
    void addNumber(const std::vector<int>::iterator& begin, const std::vector<int>::iterator& end);
    bool whetherCanFindSpan(size_t size);
    int shortestSpan();
    int longestSpan();
    void printAllElement();
    void fileForTenthousandElement();
    class VectorAlreadyFull : public std::exception{
        virtual const char* what() const throw(){
            return "Vector is full.";
        }
    };
    class CannotFindSpan : public std::exception{
        virtual const char* what() const throw(){
            return "Cannot find Span.";
        }
    };

};

#endif