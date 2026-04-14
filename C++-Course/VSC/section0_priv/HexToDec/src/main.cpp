/**
 * @file main.cpp
 * @brief small library that converts from one number system to another
 */
/**
 * @addtogroup s0_priv
 * @{
 * @defgroup s0_priv_convertsystem
 * @brief small library that converts from one number system to another
 * @note current: only hex to dec and dec to hex, to add: hex to bin, bin to dec, etc.
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

    ToConvert obj1 {15};
    obj1.set_objName("Object 01 - init with int");
    obj1.display_obj();
    
    ToConvert obj2 {"0xFF8F"};
    obj2.set_objName("Object 02 - init with hex");
    obj2.display_obj();

    ToConvert obj3 {"0b11011"};
    obj3.set_objName("Object 03 - init with bin");
    obj3.display_obj();

    cout << endl;
    return 0;
}
/** @} */