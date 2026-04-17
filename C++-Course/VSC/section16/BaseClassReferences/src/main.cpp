/**
 * @file main.cpp
 * @brief showcase of base class references
 */
/**
 * @addtogroup section16
 * @{
 * @defgroup s16_p05 BaseClassReferences
 * @brief showcase of base class references
 * @note these work with the expected polymorphic behaviour as well
 * @}
 */
/**
 * @addtogroup s16_p05
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

#include "../include/header.h"

void do_withdraw(Account10 &source, double amount){
    source.withdraw(amount);
}

int main() {

    cout << "======================" << endl;
    // Example 1 

    Account10 a;
    Account10 &ref = a;
    ref.withdraw(1000);

    Trust2 t;
    Account10 &ref1 = t;
    ref1.withdraw(1000);

    // Example 1 
    cout << "======================" << endl;
    // Example 2

    Account10 a1;
    Savings2 a2;
    Trust2 a3;
    Checking2 a4;

    do_withdraw(a1,1000);
    do_withdraw(a2,2000);
    do_withdraw(a3,3000);
    do_withdraw(a4,4000);

    // Example 2
    cout << "======================" << endl;

    cout << endl;
    return 0;
}
/** @} */