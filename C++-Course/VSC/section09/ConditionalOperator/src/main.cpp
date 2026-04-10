/**
 * @file main.cpp
 * @brief showcase of the conditional operator in c++ and its usage
 * @details The conditional operator is basically an if-else-statement for one line and
 * with a little different way to use it:
 * it works like this:
 *      "your condition" ? "if true" : "if false"
 *      checks whether the (logical) statement in front of the question mark is true or false
 *      if true: the action / value between question mark and colons is returned
 *      if false: the action / value after the colons is returned
 */

/**
 * @addtogroup section09
 * @{
 * @defgroup s09_p01 ConditionalOperator
 * @brief showcase of the conditional operator in c++ and its usage
 * @details The conditional operator is basically an if-else-statement for one line and
 * with a little different way to use it:
 * it works like this:
 *      "your condition" ? "if true" : "if false"
 *      checks whether the (logical) statement in front of the question mark is true or false
 *      if true: the action / value between question mark and colons is returned
 *      if false: the action / value after the colons is returned
 *
 * @}
 */

/**
 * @addtogroup s09_p01
 * @{
 */
#include <iostream>

using namespace std;

int main() {

    int num {};
    
    cout << "\n=================================================" << endl;
    cout << "Enter an integer: ";
    cin >> num;

    if(num % 2 == 0){
        cout << num << " is even" << endl;
    }
    else {
        cout << num << " is odd" << endl;
    }

    cout << num << " is " << ((num%2==0)?"even":"odd") << endl;

    cout << "\n=================================================" << endl;
    
    int num1 {}, num2 {};
    cout << "Enter two integers separated by a space: ";
    cin >> num1 >> num2;

    if(num1 != num2){
        cout << "Largest: " << ((num1 > num2)?num1:num2) << endl;
        cout << "Smallest: " << ((num1 < num2)?num1:num2) << endl;
    } 
    else{
        cout << "The numbers are the same" << endl;
    }
    
    cout << "\n=================================================" << endl;
    cout << endl;
    return 0;
}
/** @} */