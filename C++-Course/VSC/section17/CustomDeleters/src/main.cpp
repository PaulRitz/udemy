/**
 * @file main.cpp
 * @brief showcase of custom deleters (for smart pointers) in c++
 */
/**
 * @addtogroup section17
 * @{
 * @defgroup s17_p04 CustomDeleters
 * @brief showcase of custom deleters (for smart pointers) in c++
 * @}
 */
/**
 * @addtogroup s17_p04
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <memory>

using namespace std;

#include "../include/header.h"

void my_deleter(Test3* ptr);

int main() {

    cout << "==================================" << endl;
    // Example 1
    {
        shared_ptr<Test3> ptr1 {new Test3{100}, my_deleter};
    }
    // Example 1
    cout << "==================================" << endl;
    // Example 2
    {
        shared_ptr<Test3> ptr2 {new Test3{100},
        [] (Test3* ptr) {
            cout << "Using my custom lambda deleter" << endl;
            delete ptr;   
        }
        };
    }
    // Example 2
    cout << "==================================" << endl;

    cout << endl;
    return 0;
}

void my_deleter(Test3* ptr){
    cout << "Using my custom function deleter" << endl;
    delete ptr;
}
/** @} */