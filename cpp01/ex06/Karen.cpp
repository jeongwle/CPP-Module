#include "Karen.hpp"

Karen::Karen(){
    _level[0] = "DEBUG";
    _level[1] = "INFO";
    _level[2] = "WARNING";
    _level[3] = "ERROR";
    _funcPtrArr[0] = &Karen::debug;
    _funcPtrArr[1] = &Karen::info;
    _funcPtrArr[2] = &Karen::warning;
    _funcPtrArr[3] = &Karen::error;
}

Karen::~Karen(){
    return ;
}

void    Karen::debug(){
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
    std::cout << "I just love it" << std::endl;
}

void    Karen::info(){
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money." << std::endl;
    std::cout << "You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void    Karen::warning(){
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout <<"I’ve been coming here for years and you just started working here last month." << std::endl;
}

void    Karen::error(){
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void    Karen::complain(std::string level){
    int i = 0;
    while (_level[i] != level){
        i++;
        if (i == 4)
        {
            break ;
        }
    }
    for (int j = i; j < 4; j++)
    {
        (this->*_funcPtrArr[j])();
        if (j != 3)
        {
            std::cout << std::endl;
        }
    }
}

void    Karen::filter(std::string level){
    int logLevel = 0;
    logLevel = this->check(level);
    switch(logLevel)
    {
        case 0:
            this->complain(_level[0]);
            break;
        case 1:
            this->complain(_level[1]);
            break;
        case 2:
            this->complain(_level[2]);
            break;
        case 3:
            this->complain(_level[3]);
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}

int Karen::check(std::string level){
    int i = 0;
    while (_level[i] != level){
        i++;
        if (i == 4)
        {
            break;
        }
    }
    return (i);
}