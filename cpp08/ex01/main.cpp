/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 14:40:45 by jeongwle          #+#    #+#             */
/*   Updated: 2021/10/24 20:49:35 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

void testShortestAndLongest(Span& span){
    try {
        std::cout << "shortestSpan : " << span.shortestSpan() << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        std::cout << "longestSpan : " << span.longestSpan() << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}


int main(void){
    Span span1(5);

    std::cout << std::endl;
    std::cout << "---------- Error Test  ----------" << std::endl;
    std::cout << "no element" << std::endl;
    testShortestAndLongest(span1);
    span1.addNumber(5);
    std::cout << "one element" << std::endl;
    testShortestAndLongest(span1);
    span1.addNumber(3);
    std::cout << "두개 부터는 잘 됩니다~" << std::endl;
    testShortestAndLongest(span1);
    span1.addNumber(17);
    span1.addNumber(9);
    span1.addNumber(11);
    std::cout << "full element" << std::endl;
    try {
        span1.addNumber(123);
    }
    catch (std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    std::cout << "--------------------------------" << std::endl << std::endl;

    std::cout << "----- shortest and longest -----" << std::endl;
    testShortestAndLongest(span1);
    std::cout << "--------------------------------" << std::endl << std::endl;

    std::cout << "----- copy constructor test ----" << std::endl;
    std::cout << "span1 element" << std::endl;
    span1.printAllElement();
    Span span2(span1);
    std::cout << "span2 element" << std::endl;
    span2.printAllElement();
    std::cout << "--------------------------------" << std::endl << std::endl;

    std::cout << "------ 10000 element test ------" << std::endl;
    std::vector<int> vec(10000);
    std::vector<int>::iterator iter = vec.begin();
    for (int i = 0; iter != vec.end(); i++){
        *iter = i;
        iter++;
    }
    Span span3(10000);
    span3.addNumber(vec.begin(), vec.end());
    testShortestAndLongest(span3);
    span3.fileForTenthousandElement();
    std::cout << "--------------------------------" << std::endl << std::endl;

}