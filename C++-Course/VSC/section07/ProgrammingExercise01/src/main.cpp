/**
 * @file main.cpp
 * @brief Programming Exercise:learn to work with arrays
 */

/**
 * @addtogroup section07
 * @{
 * @defgroup s07_pe01 ProgrammingExercise01
 * @brief Programming Exercise 01: learn hwo to work with arrays
 * @}
 */

/**
 * @addtogroup s07_pe01
 * @{
 */
#include <iostream>

using namespace std;

int main() {

    int arr[10] {};
    arr[0] = 100;
    arr[9] = 1000;

    for(unsigned int i = 0; i < 10; i++){
        cout << arr[i] << endl;
    }

    return 0;
}
/** @} */