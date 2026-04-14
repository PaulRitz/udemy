/**
 * @file main.cpp
 * @brief programming exercise 01: practice using control structures
 */

/**
 * @addtogroup section09
 * @{
 * @defgroup s09_pe01 ProgrammingExercise01
 * @brief programming exercise 01: practice using control structures
 * @}
 */

/**
 * @ingroup PEs
 * @addtogroup s09_pe01
 * @{
 */
#include <iostream>

using namespace std;

int main() {
    // anyone at age 16 or older can legally drive: 
    
    int age {};

    cout << "Please enter your age: ";
    cin >> age;

    if(age >= 16){
        cout << "Yes - you can drive (legally)!" << endl;
    }


    cout << endl;
    return 0;
}
/** @} */