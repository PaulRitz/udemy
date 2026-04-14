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

    cout << obj1.get_hexNumber() << endl;
    cout << obj1.get_intNumber() << endl;
    cout << obj1.get_binNumber() << endl;

    obj1.set_objName("Object 01");
    
    obj1.display_obj();
    
    obj1.set_number("0b10");
    
    obj1.display_obj();
    cout << endl;
    return 0;
}
/** @} */