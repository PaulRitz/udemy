/**
 * @file main.cpp
 * @brief programming exercise 04: practice using the constructor overloading in c++
 */
/**
 * @addtogroup section13
 * @{
 * @defgroup s13_pe04 ProgrammingExercise04
 * @brief programming exercise 04: practice using the constructor overloading in c++
 * @}
 */
/**
 * @addtogroup s13_pe04
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

    Dog3 Spot;
    Spot.set_name("Spot");
    Spot.set_age(4);

    cout << Spot.get_name() << " is " << Spot.get_age() << " years old." << endl;
    cout << Spot.get_name() << ": " << Spot.speak() << endl;
    
    Dog3 frido {"Frido", 3};


    cout << frido.get_name() << " is " << frido.get_age() << " years old." << endl;
    cout << frido.get_name() << ": " << frido.speak() << endl;

    cout << endl;
    return 0;
}
/** @} */