#include "Other_class.h"
#include <iostream>
#include "player11.h"

void Other_class::display_player(Player11 &p){
    std::cout << p.name << std::endl;
    std::cout << p.health << std::endl;
    std::cout << p.xp << std::endl;
}