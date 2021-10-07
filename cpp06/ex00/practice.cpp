#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <sstream>
#include <climits>

int main(void){
    // double dType;
    // std::string a("ff");
    // float fType = 42.50001f;
    

    // int Int = 10;
    // dType = 0;
    // std::cout << atoi(a.c_str()) << std::endl;
    // std::cout << atof(a.c_str()) << std::endl;
    // std::cout.precision(10);
    // std::cout << std::fixed << atof(a.c_str()) << std::endl;
    // std::cout << fType << std::endl;
    // std::cout << dType << std::endl;

    // std::cout << isnan(1.0) << std::endl;

    // std::string num("123.456");
    // std::stringstream ss(num);
    // float result;
    // std::cout << ss. << std::endl;
    // ss >> result;
    // std::cout << result << std::endl;
    // ss >> result;
    // std::cout << result << std::endl;
    // ss >> result;
    // std::cout << result << std::endl;

    // std::cout << isdigit('f') << std::endl;


    // std::string param("f1le");
    // std::cout << param[1] << std::endl;
    // std::cout << isdigit(param[1]) << std::endl;

    // std::cout << atoi("2147483648") << std::endl;
    // std::cout << INT_MAX << std::endl;

    // std::string str(".0f");
    // int num1 = atoi(str.c_str());
    // float num2 = atoi(str.c_str());
    // double num3 = 0;
    // std::cout << sizeof(num1) << std::endl;
    // std::cout << sizeof(num2) << std::endl;
    // std::cout << sizeof(num3) << std::endl;
    // std::cout.precision(2);
    // std::cout << std::fixed << num1 << std::endl;
    // std::cout << num2 << std::endl;

    // std::cout << __FLT_MAX__ << std::endl;
    // std::string str("ana");
    // std::cout << atoi(str.c_str()) << std::endl;

    std::string num1("1.1f");
    // num1.erase(num1.length() - 1);
    std::cout << num1 << std::endl;
    std::stringstream ss(num1);
    float num2;
    std::string res;
    // ss >> num2;
    ss >> res;
    std::cout << res << std::endl;
    // std::cout << num2 << std::endl;
    // std::cout << CHAR_MIN << std::endl;
//     if (__FLT_MIN__ >= -42){
//         std::cout << "hi" << std::endl;
//     }
}