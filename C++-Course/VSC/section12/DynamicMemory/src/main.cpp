/**
 * @file main.cpp
 * @brief showcase of dynamic memory allocation
 */

/**
 * @addtogroup section12
 * @{
 * @defgroup s12_p04 DynamicMemory
 * @brief showcase of dynamic memory allocation
 * @}
 */

/**
 * @addtogroup s12_p04
 * @{
 */
#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int main() {

    cout << "=========================" << endl;
    // Example 1
    
    int *int_ptr {nullptr};
    int_ptr = new int;
    cout << int_ptr << endl;
    delete int_ptr;
    
    // Example 1
    cout << "=========================" << endl;
    // Example 2

    size_t size {0};
    double *temp_ptr {nullptr};

    cout << "How many temps? ";
    cin >> size;

    while(true){
        temp_ptr = new double[size];
    }
    
    cout << temp_ptr << endl;

    delete []temp_ptr;

    // Example 2
    cout << "=========================" << endl;

    cout << endl;
    return 0;
}
/** @} */