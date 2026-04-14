/**
 * @file main.cpp
 * @brief programming exercise 03: practice using the default constructor in c++
 */
/**
 * @addtogroup section13
 * @{
 * @defgroup s13_pe03 ProgrammingExercise03
 * @brief programming exercise 03: practice using the default constructor in c++
 * @}
 */
/**
 * @addtogroup s13_pe03
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

#include "../include/header.h"

using namespace std;

int main() {

    Dog2 Spot;
    Spot.set_name("Spot");
    Spot.set_age(4);

    cout << Spot.get_name() << " is " << Spot.get_age() << " years old." << endl;
    cout << Spot.get_name() << ": " << Spot.speak() << endl;

    cout << endl;
    return 0;
}
/** @} */