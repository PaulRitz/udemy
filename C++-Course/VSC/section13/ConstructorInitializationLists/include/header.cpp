#include "header.h"

Player5::Player5() 
    :name{"None"},health{0},xp{0} {}
Player5::Player5(std::string name_val)
    :name{name_val},health{0},xp{0} {}
Player5::Player5(std::string name_val, int health_val, int xp_val)
    :name{name_val},health{health_val},xp{xp_val} {}


void Player5::set_name(std::string name_val){
    name = name_val;
}
std::string Player5::get_name(){
    return name;
}
       