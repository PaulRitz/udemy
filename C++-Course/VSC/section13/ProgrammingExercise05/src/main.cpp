/**
 * @file main.cpp
 * @brief programming exercise 05: practice using the copy constructor in c++
 */
/**
 * @addtogroup section13
 * @{
 * @defgroup s13_pe05 ProgrammingExercise05
 * @brief programming exercise 05: practice using the copy constructor in c++
 * @}
 */
/**
 * @ingroup PEs
 * @addtogroup s13_pe05
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

    Dog4 Spot;
    Spot.set_name("Spot");
    Spot.set_age(4);

    cout << Spot.get_name() << " is " << Spot.get_age() << " years old." << endl;
    cout << Spot.get_name() << ": " << Spot.speak() << endl;
    
    Dog4 frido {"Frido", 3};


    cout << frido.get_name() << " is " << frido.get_age() << " years old." << endl;
    cout << frido.get_name() << ": " << frido.speak() << endl;

    Dog4 temp {Spot};

    cout << endl;
    return 0;
}
/** @} */