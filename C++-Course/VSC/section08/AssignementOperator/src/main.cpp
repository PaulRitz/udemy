/**
 * @file main.cpp
 * @brief Showcase of the assignement operator in c++ and its usage
 */

/**
 * @addtogroup section08
 * @{
 * @defgroup s08_p01 AssignementOperator
 * @brief Showcase of the assignement operator in c++ and its usage
 * @}
 */

/**
 * @addtogroup s08_p01
 * @{
 */
#include <iostream>

using namespace std;

int main() {

    int num1 {10};
    int num2 {20};

    num1 = 14 * num2;
    num1 = num2 = 100;

    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    return 0;
}
/** @} */