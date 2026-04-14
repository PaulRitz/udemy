/**
 * @file main.cpp
 * @brief showcase of the default constructor and how to set it up
 */
/**
 * @addtogroup section13
 * @{
 * @defgroup s13_p07 DefaultConstructor
 * @brief showcase of the default constructor and how to set it up
 * @}
 */
/**
 * @addtogroup s13_p07 
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

    // Player4 frank;                // without default constructor this ends 
                                  // in a compiler error
    Player4 hero;
    Player4 frank {"Frank", 100, 13};
    frank.set_name("Frank");
    cout << frank.get_name() << endl;

    cout << endl;
    return 0;
}
/** @} */