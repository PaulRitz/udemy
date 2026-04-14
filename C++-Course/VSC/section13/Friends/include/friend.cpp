#include "friend.h"
#include <iostream>
class Player;
void Friend_class::set_hero_name(Player11 &p, std::string name){
    p.name = name;
}
void Friend_class::display_player(Player11 &p){
    std::cout << p.name << std::endl;
    std::cout << p.health << std::endl;
    std::cout << p.xp << std::endl;
}
