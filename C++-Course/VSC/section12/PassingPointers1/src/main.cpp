/**
 * @file main.cpp
 * @brief showcase of passing pointers v1
 */

/**
 * @addtogroup section12
 * @{
 * @defgroup s12_p05 PassingPointers1
 * @brief showcase of passing pointers v1
 * @}
 */

/**
 * @addtogroup s12_p05
 * @{
 */
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

void double_data(int* int_ptr);

int main() {

    int value {10};
    int *int_ptr {nullptr};
    cout << "Value: " << value << endl;

    cout << "===========================" << endl;
    // Example 1
    
    double_data(&value);
    cout << "Value: " << value << endl;
    
    // Example 1
    cout << "===========================" << endl;
    // Example 2

    int_ptr = &value;
    double_data(int_ptr);
    cout << "Value: " << value << endl;

    // Example 2
    cout << "===========================" << endl;

    cout << endl;
    return 0;
}

void double_data(int* int_ptr){
    *int_ptr *= 2;
}
/** @} */