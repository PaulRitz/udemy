/**
 * @file main.cpp
 * @brief showcase of static class members in c++
 */
/**
 * @addtogroup section13
 * @{
 * @defgroup s13_p16 StaticClassMembers
 * @brief showcase of static class members in c++
 * @}
 */
/**
 * @addtogroup s13_p16
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

#include "../include/header.h"

void display_active_players();

int main() {
    
    display_active_players();
    Player10 hero{"Hero"};
    display_active_players();

    {
        Player10 frank{"Frank"};
        display_active_players();
    }
    display_active_players();

    Player10 *enemy = new Player10("Enemy", 100, 100);
    display_active_players();
    delete enemy;
    display_active_players(),

    cout << endl;
    return 0;
}

void display_active_players(){
    cout << "Active players: " << Player10::get_player_count() << endl;
}

/** @} */