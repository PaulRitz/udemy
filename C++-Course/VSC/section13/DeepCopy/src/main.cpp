/**
 * @file main.cpp
 * @brief showcase of deep copies with the copy constructor
 */
/**
 * @addtogroup section13
 * @{
 * @defgroup s13_p13 DeepCopy
 * @brief showcase of deep copies with the copy constructor
 * @}
 */
/**
 * @addtogroup s13_p13
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

#include "../include/header.h"

using namespace std;

void display_deep(Deep0 s);

int main() {

    Deep0 obj1 {100};
    display_deep(obj1);

    Deep0 obj2 {obj1};
    obj2.set_data_value(1000);

    // display_shallow(obj2);

    cout << endl;
    return 0;
}

void display_deep(Deep0 s){
    cout << "Data: " << s.get_data_value() << endl;
}
/** @} */