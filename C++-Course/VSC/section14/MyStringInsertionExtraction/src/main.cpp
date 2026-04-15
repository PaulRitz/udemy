/**
 * @file main.cpp
 * @brief custom operator overloading stream insertion and extraction
 */

/**
 * @addtogroup section14
 * @{
 * @defgroup s14_p06 MyStringInsertionExtraction
 * @brief custom operator overloading stream insertion and extraction
 * @}
 */
/**
 * @addtogroup s14_p06
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

#include "../include/myStringv6.h"

int main() {
    myStringv6 larry {"Larry"};
    myStringv6 moe {"Moe"};
    myStringv6 curly;

    cout << "Enter the third stooge's first name: ";
    cin >> curly;

    cout << "The three stooges are " << larry << ", " << moe << ", and " << curly << endl;

    cout << "\nEnter the three stooges names separated by a space: ";
    cin >> larry >> moe >> curly;

    cout << "The three stooges are " << larry << ", " << moe << ", and " << curly << endl;
    cout << endl;
    return 0;
}
/** @} */