/**
 * @file main.cpp
 * @brief programming exercise 02: practice implementing methods and classes
 */
/**
 * @addtogroup section13
 * @{
 * @defgroup s13_pe02 ProgrammingExercise02
 * @brief programming exercise 02: practice implementing methods and classes
 * @}
 */
/**
 * @ingroup PEs
 * @addtogroup s13_pe02
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

#include "../include/Dog.h"

using namespace std;

int main() {
    // task 1
    Dog2 spot;
    spot.set_age(2);
    spot.set_name("Spot");

    cout << "Name: " << spot.get_name() << endl;
    cout << "Age: " << spot.get_age() << endl;
    // task 1

    // task 2
    cout << "Age in human years: " << spot.get_human_years() << endl;
    cout << spot.speak() << endl;
    // task 2
    cout << endl;
    return 0;
}
/** @} */