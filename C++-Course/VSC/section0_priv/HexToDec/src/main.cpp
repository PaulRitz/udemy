/**
 * @file main.cpp
 * @brief small library that converts from one number system to another
 */
/**
 * @addtogroup s0_priv
 * @{
 * @defgroup s0_priv_convertsystem
 * @brief small library that converts from one number system to another
 * @}
 */
/**
 * @addtogroup s0_priv_convertsystem
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

#include "../include/ConvertSystem.h"

int main() {

    ToConvert obj1 {"F12C3"};

    cout << obj1.get_intNumber() << endl;
    cout << obj1.get_strNumber() << endl;
    obj1.HexToDec();
    cout << obj1.get_intNumber() << endl;

    cout << obj1.DecToHex() << endl;;

    cout << endl;
    return 0;
}
/** @} */