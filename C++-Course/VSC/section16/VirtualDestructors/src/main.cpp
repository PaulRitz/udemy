/**
 * @file main.cpp
 * @brief showcase of virual destructors in c++ polymorphism
 */
/**
 * @addtogroup section16
 * @{
 * @defgroup s16_p03 VirtualDestructors
 * @brief showcase of virual destructors in c++ polymorphism
 * @}
 */
/**
 * @addtogroup s16_p03
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

    cout << "=== Pointers ===" << endl;
    Account9* p1 = new Account9{};
    Account9* p2 = new Savings1{};
    Account9* p3 = new Checking1{};
    Account9* p4 = new Trust1{};

    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);

    cout << "=== Clean up ===" << endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;


    cout << endl;
    return 0;
}
/** @} */