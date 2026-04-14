/**
 * @file main.cpp
 * @brief showcase of friends in c++
 */
/**
 * @addtogroup section13
 * @{
 * @defgroup s13_p17
 * @brief showcase of friends in c++
 * @}
 */
/**
 * @addtogroup s13_p17
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

#include "player11.h"
#include "Other_class.h"
#include "friend.h"

void display_player(Player11 &p);

using namespace std;

int main() {

    Player11 hero("Hero", 100, 35);
    display_player(hero);

    Other_class other;
    other.display_player(hero);

    Friend_class friend_class;
    friend_class.set_hero_name(hero,"SUPER HERO");
    friend_class.display_player(hero);
    

    cout << endl;
    return 0;
}

void display_player(Player11 &p){
    std::cout << p.name << std::endl;
    std::cout << p.health << std::endl;
    std::cout << p.xp << std::endl;
}
/** @} */