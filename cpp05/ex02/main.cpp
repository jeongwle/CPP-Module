
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void test(Bureaucrat& b, Form* f){
    std::cout << "------------test case --------------" << std::endl;
    try {
        b.executeForm(*f);
    }
    catch (std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    try {
        b.signForm(*f);
    }
    catch (std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    std::cout << *f;
    try {
        b.executeForm(*f);
    }
    catch (std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    try {
        b.signForm(*f);
    }
    catch (std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl << std::endl;
}

int main(void){
    Bureaucrat jeongwle("jeongwle", 1);
    Bureaucrat junghwki("junghwki", 25);
    Bureaucrat mki("mki", 72);
    Bureaucrat ukwon("ukwon", 145);
    Form *s = new ShrubberyCreationForm("juyang");
    Form *r = new RobotomyRequestForm("juyang");
    Form *p = new PresidentialPardonForm("juyang");


    std::cout << *s;
    std::cout << *r;
    std::cout << *p;
    std::cout << std::endl;
    test(ukwon, s);
    test(ukwon, r);
    test(ukwon, p);
    mki.executeForm(*s);
    std::cout << std::endl;
    test(junghwki, r);
    test(jeongwle, p);
    delete p;
    delete r;
    delete s;



    return (0);
}
