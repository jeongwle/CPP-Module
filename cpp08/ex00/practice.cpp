#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include "easyfind.hpp"

int main(void){
    // std::vector<int> vec;

    // vec.push_back(10);
    // vec.push_back(20);
    // vec.push_back(30);
    // vec.push_back(40);

    // for (std::vector<int>::reverse_iterator rItr = vec.rbegin(); rItr != vec.rend(); rItr++){
    //     std::cout << *rItr << std::endl;
    // }
    // std::cout << vec.size() << std::endl;
    // std::vector<int>::iterator iter;
    // iter = std::find(vec.begin(), vec.end(), 50);
    // if (iter == vec.end()){
    //     std::cout << "cannot find" << std::endl;
    // }
    int arr[4] = {0, 20, 30, 40};
//     std::vector<int> vec(arr, arr + sizeof(arr)/ sizeof(int));

//     for (int i = 0; i < vec.size(); i++){
//         std::cout << vec[i] << std::endl;
//     }
//     std::vector<int>::const_iterator cIter = std::find(vec.begin(), vec.end(), 10);
//     std::cout << *cIter << std::endl;
    // std::list<int> lst(arr, arr + sizeof(arr) / sizeof(int));

    // std::list<int>::iterator iter = lst.begin();
    // for (; iter != lst.end(); iter++){
    //     std::cout << *iter << std::endl;
    // }
    // std::vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));

    // std::cout << vec.capacity() << std::endl;
     
    // std::vector<int>::iterator vIter = std::find(vec.begin(), vec.end(), 1);
    // std::cout << *vIter << std::endl;

    std::vector<int> vec;

    try {
        std::vector<int>::iterator iter = easyfind(vec, 10);
        std::cout << *iter << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
}