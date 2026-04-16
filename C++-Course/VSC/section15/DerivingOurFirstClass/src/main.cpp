/**
 * @file main.cpp
 * @brief deriving our first class
 */
/**
 * @defgroup section15 Section 15: Inheritance
 * @brief this section is all about inheritance and its behaviour and usecases
 */
/**
 * @addtogroup section15
 * @{
 * @defgroup s15_p01 DerivingOurFirstClass
 * @brief deriving our first class
 * @}
 */
/**
 * @addtogroup s15_p01
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

#include "../include/Account6.h"
#include "../include/Savings_Account0.h"

int main() {

    cout << "\n=======Account=======" << endl;
    // Example 1 - Class: Account
    
    Account6 acc1{};
    acc1.deposit(2000.0);
    acc1.withdraw(500.0);
    
    cout << endl;
    
    Account6* acc2 {nullptr};
    acc2 = new Account6();
    acc2->deposit(1000.0);
    acc2->withdraw(250.0);
    delete acc2;
    
    // Example 1 - Class: Account
    cout << "=======Account=======" << endl;
    cout << "\n=======Savings Account=======" << endl;
    // Example 2 - Class: Savings Account

    Savings_Account0 sav_acc1{};
    sav_acc1.deposit(2000.0);
    sav_acc1.withdraw(500.0);

    cout << endl;

    Savings_Account0* sav_acc2 {nullptr};
    sav_acc2 = new Savings_Account0();
    sav_acc2->deposit(1000.0);
    sav_acc2->withdraw(250.0);
    delete sav_acc2;

    // Example 2 - Class: Savings Account
    cout << "=======Savings Account=======" << endl;

    cout << endl;
    return 0;
}
/** @} */