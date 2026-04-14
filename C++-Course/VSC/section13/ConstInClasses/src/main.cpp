/**
 * @file main.cpp
 * @brief showcase of the const operator in classes, and showcase of the const correctness
 */
/**
 * @addtogroup section13
 * @{
 * @defgroup s13_p15 ConstInClasses
 * @brief showcase of the const operator in classes, and showcase of the const correctness
 * @}
 */
/**
 * @addtogroup s13_p15
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

#include "../include/header.h"

void display_player_name(const Player9 &p);

int main() {
    
    const Player9 villain {"Villain", 100, 55};
    Player9 hero {"Hero", 100, 15};

    // villain.set_name("Super Villain");
    // cout << villain.get_name() << endl;
    // cout << hero.get_name() << endl;

    display_player_name(hero);
    display_player_name(villain);
    
    cout << endl;
    return 0;
}
void display_player_name(const Player9 &p){
    // cout << p.get_name() << endl;
}
/** @} */