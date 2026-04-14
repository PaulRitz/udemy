/**
 * @file main.cpp
 * @brief showcase of the delegating constructors and how to set them up
 */
/**
 * @addtogroup section13
 * @{
 * @defgroup s13_p09 DelegationConstructors
 * @brief showcase of the delegating constructors and how to set them up
 * @}
 */
/**
 * @addtogroup s13_p09 
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

    Player6 empty {};
    Player6 frank {"Frank"};
    Player6 villain {"Villain", 100, 55};

    cout << endl;
    return 0;
}
/** @} */