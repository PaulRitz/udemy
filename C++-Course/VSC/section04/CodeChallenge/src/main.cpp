/**
 * @file main.cpp
 * @brief the very first Code Challenge hurray!!
 * @details In this first code challenge the goal was to get to know the basic
 * functionality of the standard namespace and basic inputs and outputs
 */

/**
 * @addtogroup section04
 * @{
 * @defgroup s04_cc CodeChallenge
 * @brief the very first Code Challenge hurray!!
 * @details In this first code challenge the goal was to get to know the basic
 * functionality of the standard namespace and basic inputs and outputs
 * @}
 */

/**
 * @ingroup CCs
 * @addtogroup s04_cc
 * @{
 */
#include <iostream>

int main() {

    int favourite_number = 0;

    std::cout << "Enter your favourite number between 1 and 100: " << std::endl;

    std::cin >> favourite_number;

    std::cout << "Amazing!! Thats my favourite number too!" << std::endl;
    std::cout << "No really!! " << favourite_number << " is my favourite number!" << std::endl;

    return 0;
}
/** @} */