/**
 * @file main.cpp
 * @brief showcase of constructors and destructors
 */
/**
 * @addtogroup section13
 * @{
 * @defgroup s13_p06
 * @brief a brief decription of the program
 * @}
 */
/**
 * @addtogroup s13_p06
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

#include "Character.h"

using namespace std;

int main() {

    {
        Player3 slayer;
        slayer.set_name("Slayer");
    }

    {
        Player3 frank;
        frank.set_name("Frank");
        Player3 hero("Hero");
        hero.set_name("Hero");
        Player3 villain("Villain", 100, 12);
        villain.set_name("Villain");
    }

    Player3* enemy = new Player3;
    enemy->set_name("Enemy");

    Player3* level_boss = new Player3("Level Boss", 100, 300);
    level_boss->set_name("Level Boss");

    delete enemy;
    delete level_boss;

    

    cout << endl;
    return 0;
}
/** @} */