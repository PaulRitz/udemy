/**
 * @file main.cpp
 * @brief showcase of the constructor initialization lists and how to set them up
 */
/**
 * @addtogroup section13
 * @{
 * @defgroup s13_p08 ConstructorInitializationLists
 * @brief showcase of the constructor initialization lists and how to set them up
 * @}
 */
/**
 * @addtogroup s13_p08 
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

#include "../include/header.h"

using namespace std;

int main() {

    Player5 empty {};
    Player5 frank {"Frank"};
    Player5 villain {"Villain", 100, 55};

    cout << endl;
    return 0;
}
/** @} */