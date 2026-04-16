/**
 * @file main.cpp
 * @brief showcase of base class initialization
 */
/**
 * @addtogroup section15
 * @{
 * @defgroup s15_p04 BaseClassInitialization
 * @brief showcase of base class initialization
 * @}
 */
/**
 * @addtogroup s15_p04
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

#include "../include/header.h"

int main() {
    
    // Derived2 d;
    Derived2 d{1000};
    
    cout << endl;
    return 0;
}
/** @} */