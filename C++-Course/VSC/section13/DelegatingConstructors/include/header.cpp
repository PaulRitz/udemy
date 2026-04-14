#include "header.h"

Player6::Player6() 
    :Player6("None",0,0) {
        std::cout << "No-args constructor" << std::endl;
    }
Player6::Player6(std::string name_val)
    :Player6(name_val,0,0) {
        std::cout << "One-args constructor" << std::endl;
    }
Player6::Player6(std::string name_val, int health_val, int xp_val)
    :name{name_val},health{health_val},xp{xp_val} {
        std::cout << "Three-args constructor" << std::endl;
    }


void Player6::set_name(std::string name_val){
    name = name_val;
}
std::string Player6::get_name(){
    return name;
}
       