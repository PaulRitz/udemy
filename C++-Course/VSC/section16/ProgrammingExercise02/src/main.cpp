/**
 * @file main.cpp
 * @brief programming exercise 02: learn using c++ polymorphism
 */
/**
 * @addtogroup section16
 * @{
 * @defgroup s16_pe02 ProgrammingExercise02
 * @brief programming exercise 02: learn using c++ polymorphism
 * @}
 */
/**
 * @ingroup PEs
 * @addtogroup s16_pe02
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

#include "../include/Lion1.h"
#include "../include/Dog5.h"

int main() {
    Dog5 dog1 {"Spot", 1};
    cout << dog1.get_name() << ", " << dog1.get_age() << ": " << dog1.get_noise() << endl;;
    
    Lion1 lion1 {"Big Spot", 1};
    cout << lion1.get_name() << ", " << lion1.get_age() << ": " << lion1.get_noise() << endl;
    


    cout << endl;
    return 0;
}
/** @} */