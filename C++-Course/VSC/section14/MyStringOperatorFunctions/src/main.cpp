/**
 * @file main.cpp
 * @brief custom operator overloading global functions
 */

/**
 * @addtogroup section14
 * @{
 * @defgroup s14_p05 MyStringOperatorFunctions
 * @brief custom operator overloading global functions
 * @}
 */
/**
 * @addtogroup s14_p05
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

#include "../include/myStringv5.h"

int main() {
    cout << boolalpha << endl;

    myStringv5 larry{"Larry"};
    myStringv5 moe{"Moe"};

    myStringv5 stooge = larry;
    larry.display();
    moe.display();

    cout << (larry == moe) << endl;
    cout << (larry == stooge) << endl;

    larry.display();
    myStringv5 larry2 = -larry;
    larry2.display();

    myStringv5 stooges = larry + "Moe";         // ok with member function
    // myStringv5 stooges = "Larry" + moe;      // Compiler Error
    stooges.display();
    
    myStringv5 two_stooges = moe + " " + "Larry";
    two_stooges.display();

    myStringv5 three_stooges = moe + " " + larry + " " + "Curly";
    three_stooges.display();

    cout << endl;
    return 0;
}
/** @} */