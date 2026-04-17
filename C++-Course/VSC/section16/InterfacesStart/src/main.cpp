/**
 * @file main.cpp
 * @brief showcase of best practice for interface classes in c++ polymorphism
 */
/**
 * @addtogroup section16
 * @{
 * @defgroup s16_p07 Interfaces
 * @brief showcase of best practice for interface classes in c++ polymorphism
 * @}
 */
/**
 * @addtogroup s16_p07
 * @{
 * @defgroup s16_p07_01 InterfacesStart
 * @brief introduction to the problem
 * @details the problem: using functions like the overloaded operator<< is a problem in
 * c++ polymorphism, because they are no virtual functions and therefore have no polymorphic
 * behaviour
 * @}
 */
/**
 * @addtogroup s16_p07_01
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

#include "../include/header.h"

void do_withdraw(Account11 &source, double amount){
    source.withdraw(amount);
}

int main() {

    cout << "======================" << endl;
    // Example 1
    
    Account11 a;
    cout << a << endl;
    
    Checking3 c;
    cout << c << endl;
    
    Savings3 s;
    cout << s << endl;
    
    Trust3 t;
    cout << t << endl;
    
    // Example 1
    cout << "======================" << endl;
    // Example 2
    
    Account11* p1 = new Account11();
    cout << *p1 << endl;

    Account11* p2 = new Checking3();
    cout << *p2 << endl;

    // Example 2
    cout << "======================" << endl;
    
    cout << endl;
    return 0;
}
/** @} */