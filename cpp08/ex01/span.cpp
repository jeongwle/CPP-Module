/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 14:40:34 by jeongwle          #+#    #+#             */
/*   Updated: 2021/10/24 20:49:47 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(){
    return ;
}

Span::Span(unsigned int N) : _n(N){
    std::cout << N << "개를 담을 수 있는 Span 생성" << std::endl;
}

Span::~Span(){
    return ;
}

Span::Span(const Span& copy){
    *(this) = copy;
}

Span& Span::operator=(const Span& span){
    this->_n = span._n;
    this->_vec.clear();
    this->_vec.assign(span._vec.begin(), span._vec.end());
    return *(this);
}

bool Span::whetherCanAdd(size_t size){
    if (size < this->_n){
        return true;
    }
    return false;
}

void Span::addNumber(int n){
    if (whetherCanAdd(this->_vec.size())){
        this->_vec.push_back(n);
        return ;
    }
    throw VectorAlreadyFull();
}

void Span::addNumber(const std::vector<int>::iterator& begin, const std::vector<int>::iterator& end){

    this->_vec.assign(begin, end);
}

bool Span::whetherCanFindSpan(size_t size){
    if (size >= 2){
        return true;
    }
    return false;
}

int Span::shortestSpan(){
    if (whetherCanFindSpan(this->_vec.size())){
        std::vector<int> temp(this->_vec);
        std::sort(temp.begin(), temp.end());
        int res = temp[temp.size() - 1] - temp[0];
        for (size_t i = 0; i < temp.size() - 1; i++){
            if (res > temp[i + 1] - temp[i]){
                res = temp[i + 1] - temp[i];
            }
        }
        return res;
    }
    throw CannotFindSpan();
}

int Span::longestSpan(){
    if (whetherCanFindSpan(this->_vec.size())){
        return (
            *std::max_element(this->_vec.begin(), this->_vec.end()) -
            *std::min_element(this->_vec.begin(), this->_vec.end())
        );
    }
    throw CannotFindSpan();
}

void Span::printAllElement(){
    for (size_t i = 0; i < this->_vec.size(); i++){
        std::cout << this->_vec[i] << std::endl;
    }
}

void Span::fileForTenthousandElement(){
    std::ofstream fout("10000Element");
    for (size_t i = 0; i < 10000; i++){
        fout << this->_vec[i] << std::endl;
    }
    fout.close();
}