/**
 * @file main.cpp
 * @brief showcase of virual functions in c++ polymorphism
 */
/**
 * @addtogroup section16
 * @{
 * @defgroup s16_p02 VirtualFunctions
 * @brief showcase of virual functions in c++ polymorphism
 * @}
 */
/**
 * @addtogroup s16_p02
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

    cout << "ņ=== Pointers ===" << endl;
    Account8* p1 = new Account8{};
    Account8* p2 = new Savings0{};
    Account8* p3 = new Checking0{};
    Account8* p4 = new Trust0{};

    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);

    cout << endl;
    return 0;
}
/** @} */