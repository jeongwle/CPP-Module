#include <vector>
#include <algorithm>
#include <iostream>

int main(void){

    std::vector<int> vec(3);

    std::vector<int>::const_iterator cIter = vec.begin();
    for (; cIter != vec.end(); cIter++){
        std::cout << *cIter << std::endl;
    }
    std::vector<int>::const_iterator cIter2 = vec.begin();
    for (int i = 0; cIter2 != vec.end(); i++){
        std::cout << vec[i] << std::endl;
        cIter2++;
    }
    std::cout << "vector size" << std::endl;
    std::vector<int> vec1(1);
    std::cout << vec1.size() << std::endl;

    std::cout << "---------vecotr sort test---------" << std::endl;
    int arr[4] = {40, 30, 20, 10};
    std::vector<int> sortVecTest(arr, arr + sizeof(arr) / sizeof(int));
    std::cout << "before sort" << std::endl;
    for (int i = 0; i < 4; i++){
        std::cout << sortVecTest[i] << std::endl;
    }
    std::sort(sortVecTest.begin(), sortVecTest.end());
    std::cout << "after sort" << std::endl;
    for (int i = 0; i < 4; i++){
        std::cout << sortVecTest[i] << std::endl;
    }
    std::cout << "---------------------------------" << std::endl;


    std::cout << "max and min element practice" << std::endl;
    int arr2[4] = {-10, 0, 10, 20};
    std::vector<int> elementVecTest(arr2, arr2 + sizeof(arr2) / sizeof(int));
    std::cout << *std::max_element(elementVecTest.begin(), elementVecTest.end()) << std::endl;
    std::cout << *std::min_element(elementVecTest.begin(), elementVecTest.end()) << std::endl;

    std::cout << "vector constructor test" << std::endl;
    std::vector<int> temp(elementVecTest);
    for (int i = 0; i < 4; i++){
        std::cout << temp[i] << std::endl;
    }

    std::cout << "iterator +-" << std::endl;
    std::cout << temp.end() - temp.begin() << std::endl;

}