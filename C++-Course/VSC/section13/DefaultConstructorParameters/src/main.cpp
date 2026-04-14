/**
 * @file main.cpp
 * @brief showcase of the default constructor parameters and how to set them up and its best use
 * @details these default parameters can be used to simplify the use of delegating constructors and reduce
 * the amount of constructors used while overloading the class constructor
 */
/**
 * @addtogroup section13
 * @{
 * @defgroup s13_p10 DefaultConstructorParameters
 * @brief showcase of the default constructor parameters and how to set them up and its best use
 * @details these default parameters can be used to simplify the use of delegating constructors and reduce
 * the amount of constructors used while overloading the class constructor
 * @}
 */
/**
 * @addtogroup s13_p10 
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

    Player7 empty {};
    Player7 frank {"Frank"};
    Player7 hero {"Hero", 100};
    Player7 villain {"Villain", 100, 55};

    cout << endl;
    return 0;
}
/** @} */