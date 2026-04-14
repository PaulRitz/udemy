/**
 * @file main.cpp
 * @brief showcase of shallow copies with the copy constructor
 * @details if a pointer (of a class) is copied with a shallow copy constructor the program
 * will crash because if the pointer is copied and the copied pointer runs out of its scope
 * the pointer will be freed from the heap, this means that the original pointer is freed from the 
 * heap as well. Then when the original pointer runs out of scope too, the freed space would bee freed
 * again, this is not possible and the program will crash (with exeption occurred)
 */
/**
 * @addtogroup section13
 * @{
 * @defgroup s13_p12 ShallowCopy
 * @brief showcase of shallow copies with the copy constructor
 * @details if a pointer (of a class) is copied with a shallow copy constructor the program
 * will crash because if the pointer is copied and the copied pointer runs out of its scope
 * the pointer will be freed from the heap, this means that the original pointer is freed from the 
 * heap as well. Then when the original pointer runs out of scope too, the freed space would bee freed
 * again, this is not possible and the program will crash (with exeption occurred)
 * @}
 */
/**
 * @addtogroup s13_p12
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

#include "../include/header.h"

using namespace std;

void display_shallow(Shallow0 s);

int main() {

    Shallow0 obj1 {100};
    display_shallow(obj1);

    Shallow0 obj2 {obj1};
    obj2.set_data_value(1000);

    // display_shallow(obj2);

    cout << endl;
    return 0;
}

void display_shallow(Shallow0 s){
    cout << "Data: " << s.get_data_value() << endl;
}
/** @} */