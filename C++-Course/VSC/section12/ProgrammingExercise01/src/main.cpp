/**
 * @file main.cpp
 * @brief programming exercise 01: practice using pointers
 */

/**
 * @addtogroup section12
 * @{
 * @defgroup s12_pe01 ProgrammingExercise01
 * @brief programming exercise 01: practice using pointers
 * @}
 */

/**
 * @ingroup PEs
 * @addtogroup s12_pe01
 * @{
 */
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

void swapPointers(int* ptr1, int* ptr2);

int main() {
    int a {5};
    int b {10};

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    
    int* ptr1 {&a};
    int* ptr2 {&b};

    swapPointers(ptr1, ptr2);
    
    cout << "\na: " << a << endl;
    cout << "b: " << b << endl;
    cout << endl;
    return 0;
}

void swapPointers(int* ptr1, int* ptr2){
    int tmp {*ptr1};
    *ptr1 = *ptr2;
    *ptr2 = tmp;
}
/** @} */