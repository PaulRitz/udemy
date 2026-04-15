/**
 * @file main.cpp
 * @brief custom operator overloading with member methods
 */

/**
 * @addtogroup section14
 * @{
 * @defgroup s14_p04 MyStringOperatorMethods
 * @brief custom operator overloading with member methods
 * @}
 */
/**
 * @addtogroup s14_p04
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

#include "../include/myStringv4.h"

int main() {
    cout << boolalpha << endl;

    myStringv4 larry{"Larry"};
    myStringv4 moe{"Moe"};

    myStringv4 stooge = larry;
    larry.display();
    moe.display();

    cout << (larry == moe) << endl;
    cout << (larry == stooge) << endl;

    larry.display();
    myStringv4 larry2 = -larry;
    larry2.display();

    myStringv4 stooges = larry + "Moe";         // ok with member function
    // myStringv4 stooges = "Larry" + moe;      // Compiler Error

    myStringv4 two_stooges = moe + " " + "Larry";
    two_stooges.display();

    myStringv4 three_stooges = moe + " " + larry + " " + "Curly";
    three_stooges.display();

    cout << endl;
    return 0;
}
/** @} */