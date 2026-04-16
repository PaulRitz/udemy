/**
 * @file main.cpp
 * @brief showcase of the copy constructor and the assignment operator and their behaviour with inheritance
 */
/**
 * @addtogroup section15
 * @{
 * @defgroup s15_p05 CopyConstructorAndAssignmentOperator
 * @brief showcase of the copy constructor and the assignment operator and their behaviour with inheritance
 * @}
 */
/**
 * @addtogroup s15_p05
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

#include "../include/header.h"

int main() {

    Base3 base_obj1{100};
    Base3 base_obj2{base_obj1};
    base_obj1 = base_obj2;

    Derived3 derived_obj1{100};
    Derived3 derived_obj2{derived_obj1};
    derived_obj1 = derived_obj2;

    cout << endl;
    return 0;
}
/** @} */