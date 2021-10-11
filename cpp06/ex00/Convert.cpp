/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:01:23 by jeongwle          #+#    #+#             */
/*   Updated: 2021/10/11 20:39:48 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert() : _argv("empty"), _doubleValue(0) {
    return ;
}

Convert::~Convert(){
    return ;
}

Convert::Convert(std::string argv) : _argv(argv), _doubleValue(0) {
    return ;
}

Convert::Convert(const Convert& copy){
    *(this) = copy;
}

Convert& Convert::operator=(const Convert& convert){
    this->_argv = convert._argv;
    this->_doubleValue = convert._doubleValue;
    return *(this);
}

void Convert::convertArgv(void){
    if (isChar(_argv)){
        printAll(_doubleValue);
    }
    else if (isInt(_argv)){
        printAll(_doubleValue);
    }
    else if (isFloat(_argv)){
        printAll(_doubleValue);
    }
    else if (isDouble(_argv)){
        printAll(_doubleValue);
    }
    else {
        std::cout << _argv << " is unvalid." << std::endl;
    }
}

bool Convert::isChar(std::string argv){
    if (isdigit(argv[0]) && (CHAR_MIN <= atoi(argv.c_str()) && atoi(argv.c_str()) <= CHAR_MAX) && argv.length() <= 3 && argv.find(".") == std::string::npos){
        this->_doubleValue = atoi(argv.c_str());
        return true;
    }
    else if (argv.length() == 1){
        const char *c = argv.c_str();
        if(isprint(*c)){
            this->_doubleValue = *c;
            return true;
        }
    }
    return false;
}

bool Convert::isInt(std::string argv){
    if (argv[0] == '+' || argv[0] == '-'){
        for (size_t i = 1; i < argv.length(); i++){
            if (!isdigit(argv[i])){
                return false;
            }
        }
    }
    else {
        for (size_t i = 0; i < argv.length(); i++){
            if (!isdigit(argv[i])){
                return false;
            }
        }
    }
    double num;
    std::stringstream ss(argv);
    ss >> num;
    if (!(INT_MIN <= num && num <= INT_MAX)){
        return false;
    }
    this->_doubleValue = num;
    return true;
}

bool Convert::isFloat(std::string argv){
    if (argv == "nanf" || argv == "+inff" || argv == "-inff"){
        if (argv == "nanf"){
            this->_doubleValue = NAN;
        }
        else if (argv == "+inff"){
            this->_doubleValue = INFINITY;
        }
        else{
            this->_doubleValue = -INFINITY;
        }
        return true;
    }
    if (argv[argv.length() - 1] != 'f' ||
        argv.find("f") != argv.rfind("f")){
        return false;
    }
    else{
        argv.erase(argv.length() - 1);
    }
    if (argv.find(".") == std::string::npos ||
        argv.find(".") != argv.rfind(".") ||
        !isdigit(argv[argv.find(".") + 1]) ||
        argv.find(".") == argv.length() - 1 ||
        argv.find(".") == 0){
            return false;
        }
    double num;
    std::stringstream ss(argv);
    ss >> num;
    this->_doubleValue = num;
    return true;
}

bool Convert::isDouble(std::string argv){
    if (argv == "nan" || argv == "+inf" || argv == "-inf"){
        if (argv == "nan"){
            this->_doubleValue = NAN;
        }
        else if (argv == "+inf"){
            this->_doubleValue = INFINITY;
        }
        else{
            this->_doubleValue = -INFINITY;
        }
        return true;
    }
    if (argv[0] == '+' || argv[0] == '-'){
        for (size_t i = 1; i < argv.length(); i++){
            if (argv[i] != '.' && !isdigit(argv[i])){
                return false;
            }
        }
    }
    else {
        for (size_t i = 0; i < argv.length(); i++){
            if (argv[i] != '.' && !isdigit(argv[i])){
                return false;
            }
        }
    }
    if (argv.find(".") != argv.rfind(".") ||
        argv.find(".") == argv.length() - 1 ||
        argv.find(".") == 0){
            return false;
        }
    double num;
    std::stringstream ss(argv);
    ss >> num;
    this->_doubleValue = num;
    return true;
}

void Convert::printAll(double doubleValue){
    char cRes;
    int iRes;
    float fRes;

    if (CHAR_MIN <= doubleValue && doubleValue <= CHAR_MAX && isprint(static_cast<int>(doubleValue)) && !isnan(doubleValue) && !isinf(doubleValue)){
        cRes = static_cast<char>(doubleValue);
        std::cout << "char : " << cRes << std::endl;
    }
    else if (CHAR_MIN <= doubleValue && doubleValue <= CHAR_MAX && !isprint(static_cast<int>(doubleValue)) && !isnan(doubleValue) && !isinf(doubleValue)){
        std::cout << "char : Non displayable" << std::endl;
    }
    else {
        std::cout << "char : impossible" << std::endl;
    }
    if (INT_MIN <= doubleValue && doubleValue <= INT_MAX && !isnan(doubleValue) && !isinf(doubleValue)){
        iRes = static_cast<int>(doubleValue);
        std::cout << "int : " << iRes << std::endl;
    }
    else {
        std::cout << "int : impossible" << std::endl;
    }
    fRes = static_cast<float>(doubleValue);
    std::cout.precision(1);
    std::cout << "float : " << std::fixed << fRes << "f" << std::endl;
    std::cout << "double : " << doubleValue << std::endl;
}