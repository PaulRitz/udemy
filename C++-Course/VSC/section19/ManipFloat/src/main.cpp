/**
 * @file main.cpp
 * @brief showcase of manipulating floating point numbers
 */
/**
 * @addtogroup section19
 * @{
 * @defgroup s19_p03 ManipFloat
 * @brief showcase of manipulating floating point numbers
 * @}
 */
/**
 * @addtogroup s19_p03
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <memory>

// using namespace std;

int main() {

    double num1 {123456789.987654321};
    double num2 {1234.5678};
    double num3 {1234.0};

    std::cout << "===================================" << std::endl;
    // Example 1 -- Displaying Default

    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    
    // Example 1 -- Displaying Default
    std::cout << "===================================" << std::endl;
    // Example 2 -- set precision to 2 -- if displaying with a certain precision no 
    // good output is possible, scientific notation will be used
    
    std::cout << std::setprecision(2);
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    
    // Example 2 -- set precision to 2
    std::cout << "===================================" << std::endl;
    // Example 3 -- set precision to 5

    std::cout << std::setprecision(5);
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // Example 3 -- set precision to 5
    std::cout << "===================================" << std::endl;
    // Example 4 -- set precision to 9

    std::cout << std::setprecision(9);
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // Example 4 -- set precision to 9
    std::cout << "===================================" << std::endl;
    // Example 5 -- using precision 3 and fixed -- fixed means that 3 digits after the decimal point are diplayed

    std::cout << std::setprecision(3) << std::fixed;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // Example 5 -- using precision 3 and fixed
    std::cout << "===================================" << std::endl;
    // Example 6 -- using precision 3 and fixed and scientific notation

    std::cout << std::setprecision(3) << std::scientific;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    
    // Example 6 -- using precision 3 and fixed and scientific notation
    std::cout << "===================================" << std::endl;
    // Example 7 -- using precision 3 and fixed and scientific notation in uppercase
    
    std::cout << std::setprecision(3) << std::scientific << std::uppercase;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    
    // Example 7 -- using precision 3 and fixed and scientific notation in uppercase
    std::cout << "===================================" << std::endl;
    // Example 8 -- using precision 3 and fixed and show positive
    
    std::cout << std::setprecision(3) << std::fixed << std::showpos;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // Example 8 -- using precision 3 and fixed and show positive
    std::cout << "===================================" << std::endl;
    // Example 9 -- resetting to defaults

    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << std::resetiosflags(std::ios::showpos);

    // Example 9 -- resetting to defaults
    std::cout << "===================================" << std::endl;
    // Example 10 -- show trailing zeroes up to precision 10

    std::cout << std::setprecision(10) << std::showpoint;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // Example 10 -- show trailing zeroes up to precision 10
    std::cout << "===================================" << std::endl;
    // Example 11 -- back to defaults

    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << std::setprecision(6);
    std::cout << std::resetiosflags(std::ios::showpos);
    std::cout << std::resetiosflags(std::ios::showpoint);

    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // Example 11 -- back to defaults
    std::cout << "===================================" << std::endl;

    
    
    std::cout << std::endl;
    return 0;
}
/** @} */