/**
 * @file main.cpp
 * @brief erogramming exercise 01: practice using c++ operators
 */

/**
 * @addtogroup section08
 * @{
 * @defgroup s08_pe01 ProgrammingExercise01
 * @brief programming exercise 01: practice using c++ operators
 * @}
 */

/**
 * @ingroup PEs
 * @addtogroup s08_pe01
 * @{
 */
#include <iostream>

using namespace std;

int main() {
    // Task 1
    int num1 {13};
    int num2 {0};

    num1 = 5;

    num2 = num1;

    cout << num1 << ", " << num2 << endl;
    // Task 1

    // Task 2
    int number {25};

    number *= 2;

    number += 9;

    number -= 3;

    number /= 2;

    number -= 25;

    number %= 3;

    cout << number << endl;
    // Task 2


    cout << endl;
    return 0;
}
/** @} */