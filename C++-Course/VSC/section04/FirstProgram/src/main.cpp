/**
 * @file main.cpp
 * @brief showcase over the most important kinds of warnings
 */

/**
 * @defgroup section04 Section 04: Warnings and Errors
 * @brief showcase over the most important kinds of warnings
 */

/**
 * @addtogroup section04
 * @{
 * @defgroup s04_p01 FirstProgram
 * @brief The first functional program
 * @details asks the user for a number and after the input
 * is received there is an output
 * @}
 */

 /**
  * @addtogroup s04_p01
  * @{
  */
#include <iostream>

int main() {
    int number = 0;

    std::cout << "Enter your favorite number: ";
    
    std::cin >> number;

    std::cout << "wait mine is " << number*10 << std::endl;
    
    return 0;
}
/** @} */