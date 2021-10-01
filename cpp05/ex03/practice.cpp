#include <iostream>
#include <string>

int main(void){
    std::string test[3] ={
        "jeongwle",
        "juyang",
        "hyeonski"
    };

    int i = 1;

    for (int j = 0; j < 3 && j != i; j++){
        std::cout << test[j] << std::endl;
    }
}