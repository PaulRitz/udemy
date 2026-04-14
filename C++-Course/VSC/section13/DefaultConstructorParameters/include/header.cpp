#include "header.h"

Player7::Player7(std::string name_val, int health_val, int xp_val)
    :name{name_val},health{health_val},xp{xp_val} {
        std::cout << "Three-args constructor" << std::endl;
    }


void Player7::set_name(std::string name_val){
    name = name_val;
}
std::string Player7::get_name(){
    return name;
}
       