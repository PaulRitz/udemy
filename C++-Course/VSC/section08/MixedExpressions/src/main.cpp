/**
 * @file main.cpp
 * @brief showcase of mixed expressions in c++
 */

/**
 * @addtogroup section08
 * @{
 * @defgroup s08_p07 MixedExpressions
 * @brief showcase of mixed expressions in c++
 * @}
 */

/**
 * @addtogroup s08_p07
 * @{
 */
#include <iostream>

using namespace std;

int main() {

    double average {0.0};
    int total {};
    int num1 {}, num2 {}, num3 {};

    const int count {3};

    cout << "Enter 3 integers separated by spaces: ";
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;
    
    // Old C-Style cast: average = (double)total / count || don't use, unsave
    average = static_cast<double>(total) / count;
    cout << "The 3 numbers were: " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "total: " << total << endl;
    cout << "average: " << average << endl;    

    cout << endl;
    return 0;
}
/** @} */