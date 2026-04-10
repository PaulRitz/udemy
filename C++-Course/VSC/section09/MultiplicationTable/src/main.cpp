/**
 * @file main.cpp
 * @brief a program that shows how nested loops work
 */

/**
 * @addtogroup section09
 * @{
 * @defgroup s09_p08
 * @brief a program that shows how nested loops work
 * @}
 */

/**
 * @addtogroup s09_p08
 * @{
 */
#include <iostream>
#include <vector>

using namespace std;

int main() {

    cout << "=============================" << endl;
    // Example 1 - Nested Loops - Multiplication Table

    for(int num1 {1}; num1 <= 10; num1++){
        for(int num2{1}; num2 <= 10; num2++){
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        }
        cout << "----------" << endl;
    }

    // Example 1 - Nested Loops - Multiplication Table
    cout << "=============================" << endl;
    
    cout << endl;
    return 0;
}
/** @} */