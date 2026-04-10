/**
 * @file main.cpp
 * @brief showcase of the arithmetic operators in c++ and their usage
 */

/**
 * @defgroup section08 Section 08: C++ Operators
 * @brief showcase of different types of operators in c++ and their usage
 * @details Here will be presented: Arithmetic Operators, Assignement Operator, Equality Operators,
 * Increment & Decrement Operators, Relatonal Operators and Logical Operators as well as mixed expressions
 */

/**
 * @addtogroup section08
 * @{
 * @defgroup s08_p01 ArithmeticOperators
 * @brief showcase of the arithmetic operators in c++ and their usage
 * @}
 */

/**
 * @addtogroup s08_p01
 * @{
 */
#include <iostream>

using namespace std;

int main() {

    int num1 {200};
    int num2 {100};
    int result {0};

    cout << "Arithmetic Operators:" << endl << endl;

    // cout << "----------------------------------" << endl;
    // cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    // cout << "----------------------------------" << endl;

    
    result = num1 + num2;
    cout << "\n----------------------------------" << endl;
    cout << num1 << " + " << num2 << " = " << result << endl;
    cout << "----------------------------------" << endl;
   
    result = num1 - num2;
    cout << "\n----------------------------------" << endl;
    cout << num1 << " - " << num2 << " = " << result << endl;
    cout << "----------------------------------" << endl;
   
    result = num1 * num2;
    cout << "\n----------------------------------" << endl;
    cout << num1 << " * " << num2 << " = " << result << endl;
    cout << "----------------------------------" << endl;
    
    result = num1 / num2;
    cout << "\n----------------------------------" << endl;
    cout << num1 << " / " << num2 << " = " << result << endl;
    cout << "----------------------------------" << endl;
    
    /**
     * This is integer division.
     * Here the are only whole numbers and the result will only be a whole number.
     */

    result = num2 / num1;
    cout << "\n----------------------------------" << endl;
    cout << num2 << " / " << num1 << " = " << result << endl;
    cout << "----------------------------------" << endl;
    
    result = num1 % num2;
    cout << "\n----------------------------------" << endl;
    cout << num1 << " %  " << num2 << " = " << result << endl;
    cout << "----------------------------------" << endl;

    num1 = 10;
    num2 = 3;

    result = num1 % num2;
    cout << "\n----------------------------------" << endl;
    cout << num1 << " % " << num2 << " = " << result << endl;
    cout << "----------------------------------" << endl;
    
    result = num1 * 10 + num2;
    cout << "\n----------------------------------" << endl;
    cout << "num1 * 10 + num2 = " << result << endl;
    cout << "----------------------------------" << endl;

    result = num1 * (10 + num2);
    cout << "\n----------------------------------" << endl;
    cout << "num1 * (10 + num2) = " << result << endl;
    cout << "----------------------------------" << endl;

    cout << "\n----------------------------------" << endl;
    cout << 5/10 << endl;
    cout << "----------------------------------" << endl;
    


    return 0;
}
/** @} */