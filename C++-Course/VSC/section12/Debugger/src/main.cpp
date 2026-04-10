/**
 * @file main.cpp
 * @brief showcase of the debugger (in this custom environment not working)
 */

/**
 * @addtogroup section12
 * @{
 * @defgroup s12_p02 Debugger
 * @brief showcase of the debugger (in this custom environment not working)
 * @}
 */

/**
 * @addtogroup s12_p02
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

    int i{5};
    while(i>0){
        cout << i << endl;
        i --;
    }

    int x {100}, y {200};
    cout << "\nx: " << x << endl;
    cout << "y: " << y << endl;
    
    swap(x, y);

    cout << "\nx: " << x << endl;
    cout << "y: " << y << endl;

    cout << endl;
    return 0;
}

void swap(int* a, int* b){
    int tmp = *b;
    *b = *a;
    *a = tmp;
}
/** @} */