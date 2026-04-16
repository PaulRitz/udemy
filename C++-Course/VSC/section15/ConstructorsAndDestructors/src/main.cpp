/**
 * @file main.cpp
 * @brief showcase of constructors and destructors and their behaviour with inheritance
 */
/**
 * @addtogroup section15
 * @{
 * @defgroup s15_p03 ConstructorsAndDestructors
 * @brief showcase of constructors and destructors and their behaviour with inheritance
 * @}
 */
/**
 * @addtogroup s15_p03
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
    cout << "================" << endl;
    // Example 1
    // Base1 b;
    // Example 1
    cout << "================" << endl;
    // Example 2
    // Base1 b{100};
    // Example 2
    cout << "================" << endl;
    // Example 3
    Derived1 d{1000};
    // Example 3
    cout << "================" << endl;
    
    
    cout << endl;
    return 0;
}
/** @} */