#include "Character.h"


void Player3::set_name(std::string name_val){
    name = name_val;
}

Player3::Player3(){
    std::cout << "No args constructor called" << std::endl;
}
Player3::Player3(std::string name){
    std::cout << "String arg constructor called" << std::endl;
}
Player3::Player3(std::string name, int health, int xp){
    std::cout << "Three args constructor called" << std::endl;
}
Player3::~Player3(){
    std::cout << "Destructor called for " << name << std::endl;
}