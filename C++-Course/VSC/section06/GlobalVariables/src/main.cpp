/**
 * @file main.cpp
 * @brief showcase of global variables 
 */

/**
 * @addtogroup section06
 * @{
 * @defgroup s06_p02 GlobalVariables
 * @brief showcase of global variables 
 * @}
 */

/** 
 * @addtogroup s06_p02
 * @{
 */
#include <iostream>

using namespace std;

int global_age {25}; // global variable
int age {16}; // global variable

int main() {

    /**
     * C++ will search first in the local scope,
     * if a global variable is redeclared in the local scope C++ will find it and
     * won't look after other declarations of the variable
     * 
     * a local variable shadows a global variable
     */

    int age {18}; // local variable

    cout << age << endl;

    return 0;
}
/** @} */