/**
 * @file main.cpp
 * @brief showcase of stream manipulation for integers in c++
 */
/**
 * @addtogroup section19
 * @{
 * @defgroup s19_p02 ManipInteger
 * @brief showcase of stream manipulation for integers in c++
 * @}
 */
/**
 * @addtogroup s19_p02
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

    int num {255};

    std::cout << "==========================" << std::endl;
    // Example 1 -- Displaying using different bases

    std::cout << std::dec << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::oct << num << std::endl;

    // Example 1 -- Displaying using different bases
    std::cout << "==========================" << std::endl;
    // Example 2 -- Displaying showing the base prefix for hex and oct
    
    std::cout << std::showbase;
    std::cout << std::dec << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::oct << num << std::endl;
    
    // Example 2 -- Displaying showing the base prefix for hex and oct
    std::cout << "==========================" << std::endl;
    // Example 3 -- Displayeing the hex value in uppercase

    std::cout << std::showbase << std::uppercase;
    std::cout << std::dec << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::oct << num << std::endl;

    // Example 3 -- Displayeing the hex value in uppercase
    std::cout << "==========================" << std::endl;
    // Example 4 -- Display the + sign in front of positive base 10 numbers
    
    std::cout << std::showpos;
    std::cout << std::dec << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::oct << num << std::endl;
    
    // Example 4 -- Display the + sign in front of positive base 10 numbers
    std::cout << "==========================" << std::endl;
    // Example 5 -- manipulating using the setf method

    std::cout.setf(std::ios::showbase);
    std::cout.setf(std::ios::uppercase);
    std::cout.setf(std::ios::showpos);

    // Example 5 -- manipulating using the setf method
    std::cout << "==========================" << std::endl;
    // Example 6 -- resetting to default
    
    std::cout << std::resetiosflags(std::ios::basefield);   // resets to displaying decimal integers
    std::cout << std::resetiosflags(std::ios::showbase);    // resets to not showing the base
    std::cout << std::resetiosflags(std::ios::showpos);     // resets to not showing the positive +
    std::cout << std::resetiosflags(std::ios::uppercase);   // resets to showing in uppercase 
    
    // Example 6 -- resetting to default
    std::cout << "==========================" << std::endl;
    // Example 7

    std::cout << "Enter an integer: ";
    std::cin >> num;

    std::cout << "Decimal default: " << num << std::endl;
    std::cout << "Hexadecimal    : " << std::hex << std::showbase << num << std::endl;
    std::cout << "Hexadecimal    : " << std::hex << std::uppercase << num << std::endl;
    std::cout << "Hexadecimal    : " << std::hex << num << std::endl;
    std::cout << "Hexadecimal    : " << std::hex << std::nouppercase << num << std::endl;

    std::cout << "Octal          : " << std::oct << num << std::endl;
    std::cout << "Hexadecimal    : " << std::hex << std::showbase << num << std::endl;
    std::cout << "Octal          : " << std::oct << num << std::endl;

    // Example 7
    std::cout << "==========================" << std::endl;
    

    std::cout << std::endl;
    return 0;
}
/** @} */