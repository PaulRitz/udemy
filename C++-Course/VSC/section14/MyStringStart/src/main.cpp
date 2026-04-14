/**
 * @file main.cpp
 * @brief start of the my string class
 */
/**
 * @defgroup section14 Section 14: Operator Overloading
 * @brief learn how to overload operators
 * @details in this section a custom string class is created and 
 * operators will be overloaded to be used with this class. 
 */
/**
 * @addtogroup section14
 * @{
 * @defgroup s14_p01 MyStringStart
 * @brief start of the my string class
 * @}
 */
/**
 * @addtogroup s14_p01
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

#include "myStringv1.h"

int main() {

    myStringv1 empty;
    myStringv1 larry("Larry");
    myStringv1 stooge {larry};

    empty.display();
    larry.display();
    stooge.display();    

    cout << endl;
    return 0;
}
/** @} */