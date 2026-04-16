/**
 * @file main.cpp
 * @brief showcase of protected members and their class access behaviour
 */
/**
 * @addtogroup section15
 * @{
 * @defgroup s15_p02 ProtectedMembersClassAccess
 * @brief showcase of protected members and their class access behaviour
 * @}
 */
/**
 * @addtogroup s15_p02
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
    cout << "=== Base member access from base objects ==========" << endl;
    Base0 base_obj1;
    base_obj1.a = 100;
    // base_obj1.b = 200;  // Compiler error - objects have no access to protected elements
    // base_obj1.c = 300;  // Compiler error - objects have no access to private elements
    cout << "=== Base member access from derived objects ==========" << endl;
    Derived0 derived_obj1;
    derived_obj1.a = 100;
    // derived_obj1.b = 200;   // Compiler error - objects have no access to protected elements
    // derived_obj1.c = 300;   // Compiler error - objects have no access to private elements



    cout << endl;
    return 0;
}
/** @} */