/**
 * @file main.cpp
 * @brief overview over basic inputs and outputs
 * @details showcases the behavior of basic input and output functionality of <iostream>
 */

/**
 * @defgroup section05 Section05: Basic Tools
 * @{
 * @brief this section gives an overview over commonly used functions of C and the way code is usually written
 * @}
 */

/**
  * @addtogroup section05
  * @{
  * @defgroup s05_p01 BasicIO
  * @brief overview over basic inputs and outputs
  * @details showcases the behavior of basic input and output functionality of <iostream>
  * @}
  */

/**
 * @addtogroup s05_p01
 * @{
 */
#include <iostream>

using namespace std;

int main() {
    // cout << "Default Template" << endl;
    // cout << "Hello";
    // cout << "World" << endl;

    // cout << endl << "----------------" << endl;

    // cout << "Hello world!" << endl;
    // cout << "Hello" << " world!" << endl;
    // cout << "Hello" << " world!\n";
    // cout << "Hello\nOut\nThere\n";

    // cout << endl << "----------------" << endl;

    int num1;
    int num2;
    double num3;

    // cout << "Enter an integer: ";
    // cin >> num1;
    // cout << "You entered: " << num1 << endl;

    // cout << "Enter a first integer: ";
    // cin >> num1;
    
    // cout << "Enter a second integer: ";
    // cin >> num2;

    // cout << "You entered " << num1 << " and " << num2 << endl;

    // cout << "Enter 2 numers seperated by a space: ";
    // cin >> num1 >> num2;
    // cout << "You entered " << num1 << " and " << num2 << endl;

    // cout << "Enter a double: ";
    // cin >> num3;
    // cout << "You entered: " << num3 << endl;

    cout << "Enter an integer: ";
    cin >> num1;

    cout << "Enter a double: ";
    cin >> num3;

    cout << "The integer is: " << num1 << endl << "The double is: " << num3 << endl;
    


    return 0;
}
/** @} */