/**
 * @file main.cpp
 * @brief showcase of the copy constructor its best practice
 */
/**
 * @addtogroup section13
 * @{
 * @defgroup s13_p11 CopyConstructor
 * @brief showcase of the copy constructor its best practice
 * @}
 */
/**
 * @addtogroup s13_p11 
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

#include "../include/header.h"

using namespace std;

void display_player(Player8 p);

int main() {

    Player8 empty {"XXXXXXXXXXXXX", 100, 50};

    Player8 my_new_obj {empty};

    display_player(empty);

    Player8 frank {"Frank"};
    Player8 hero {"Hero", 100};
    Player8 villain {"Villain", 100, 55};

    cout << endl;
    return 0;
}

/**
 * @brief displays the values of the entered player object
 */
void display_player(Player8 p){
    std::cout << "Name:     " << p.get_name() << std::endl;
    std::cout << "Health:   " << p.get_health() << std::endl;
    std::cout << "XP:       " << p.get_xp() << std::endl;
}
/** @} */