/**
 * @file main.cpp
 * @brief showcase of passing pointers v2
 */

/**
 * @addtogroup section12
 * @{
 * @defgroup s12_p06 PassingPointers2
 * @brief showcase of passing pointers v2
 * @}
 */

/**
 * @addtogroup s12_p06
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

void swap(int* a, int* b);

int main() {

    int x {100}, y {200};
    cout << "\nx: " << x << endl;
    cout << "y: " << y << endl;

    swap(&x, &y);

    cout << "\nx: " << x << endl;
    cout << "y: " << y << endl;

    cout << endl;
    return 0;
}

void swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
/** @} */