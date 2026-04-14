#include "header.h"

Player8::Player8(std::string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val},xp{xp_val} {
        std::cout << "Three-args constructor for " + Player8::name << std::endl;
    }

Player8::~Player8(){
    std::cout << "Destructor called for: " + Player8::name << std::endl;
}

Player8::Player8(const Player8 &source)
    // :name{source.name},health{source.health},xp{source.xp} {
    :Player8 {source.name,source.health,source.xp}{
        std::cout << "Copy constructor - made copy of: " << source.name << std::endl; 
    }

void Player8::set_name(std::string name_val){
    name = name_val;
}
std::string Player8::get_name(){
    return name;
}
int Player8::get_health(){
    return Player8::health;
}
int Player8::get_xp(){
    return Player8::xp;
}
       
