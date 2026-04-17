/**
 * @file main.cpp
 * @brief showcase of override functionality in c++
 */

/**
 * @addtogroup section16
 * @{
 * @defgroup s16_p04 UsingOverride
 * @brief showcase of override functionality in c++
 * @}
 */
/**
 * @addtogroup s16_p04
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
    Base4* ptr1 = new Base4();
    ptr1->say_hello();

    Derived4* ptr2 = new Derived4();
    ptr2->say_hello();
    
    Base4* ptr3 = new Derived4();
    ptr3->say_hello();

    delete ptr1;
    delete ptr2;
    delete ptr3;

    cout << endl;
    return 0;
}

/** @} */