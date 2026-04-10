/**
 * @file main.cpp
 * @brief shows how to use math functions (from <cmath>)
 */

/**
 * @addtogroup section11
 * @{
 * @defgroup s11_p09 Math
 * @brief shows how to use math functions (from <cmath>)
 * @}
 */

/**
 * @addtogroup s11_p09
 * @{
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double num {};
    double power {};

    cout << "Enter a number (double): ";
    cin >> num;

    cout << "===============================" << endl;
    // Example 1 - math library

    cout << "The squareroot of " << num << " is: " << sqrt(num) << endl;
    cout << "The cubed root of " << num << " is: " << cbrt(num) << endl;

    cout << "The sine of " << num << " is: " << sin(num) << endl;
    cout << "The cosine of " << num << " is: " << cos(num) << endl;

    cout << "The ceil of " << num << " is: " << ceil(num) << endl;
    cout << "The floor of " << num << " is: " << floor(num) << endl;
    cout << "The round of " << num << " is: " << round(num) << endl;
    cout << "-------------------------------" << endl;
    cout << "\nEnter a power to raise " << num << " to: ";
    cin >> power;
    
    cout << num << " raised to the " << power << " power is: " << pow(num, power) << endl;

    // Example 1 - math library
    cout << "===============================" << endl;
    

    cout << endl;
    return 0;
}
/** @} */