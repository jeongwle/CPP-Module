#include "Zombie.hpp"

Zombie::Zombie(){
    _name = "zom1";
}

Zombie::~Zombie(){
    std::cout << "<" << _name << ">" << " destructor ...ZzzznnniiiiiiiarB" << std::endl;
    std::cout << "-----------------------------------------" << std::endl;
}

void    Zombie::announce(){
    std::cout << "<" << _name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}