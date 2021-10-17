#include <iostream>

int main(void){
    int* a = new int[2];

    std::cout << a[1] << std::endl;
    std::cout << a[2] << std::endl;
}

// #include <array>
// #include <iostream>
 
// int main()
// { 
//     std::array<int, 5> nums = {1, 3, 5, 7};
 
    
//     std::cout << "nums contains " << nums.size() << " elements.\n";
//     for (int i = 0; i < 5; i++){
//         std::cout << nums[i] << std::endl;
//     }
// }