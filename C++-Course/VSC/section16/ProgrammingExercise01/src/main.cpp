/**
 * @file main.cpp
 * @brief programming exercise 01: learn using c++ polymorphism
 */
/**
 * @addtogroup section16
 * @{
 * @defgroup s16_pe01 ProgrammingExercise01
 * @brief programming exercise 01: learn using c++ polymorphism
 * @}
 */
/**
 * @ingroup PEs
 * @addtogroup s16_pe01
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

#include "../include/Lion0.h"

int main() {
    cout << "\n===== Normal Lion0 Object =====" << endl;
    Lion0 obj1;
    cout << "Lion (obj1) says: " << obj1.get_noise() << endl;
    cout << "Lions have " << obj1.get_num_legs() << " legs!" << endl;

    cout << "\n===== Pointer Lion0 Object =====" << endl;
    Lion0* obj2 {nullptr};
    obj2 = new Lion0;
    cout << "Lion (obj2) says: " << obj2->get_noise() << endl;
    cout << "Lions have " << obj2->get_num_legs() << " legs!" << endl;
    
    cout << "\n===== Pointer Animal0 Object =====" << endl;
    Animal0* obj3 {nullptr};
    obj3 = new Lion0;
    cout << "Lion (obj3) says: " << obj3->get_noise() << endl;
    cout << "Lions have " << obj3->get_num_legs() << " legs!" << endl;    
    
    delete obj2;
    delete obj3; 
    cout << endl;
    return 0;
}
/** @} */