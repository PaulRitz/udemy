/**
 * @file main.cpp
 * @brief showcase of align and fill manipulators
 */
/**
 * @addtogroup section19
 * @{
 * @defgroup s19_p04 ManipFields
 * @brief showcase of align and fill manipulators
 * @}
 */
/**
 * @addtogroup s19_p04
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <memory>

// using namespace std;

void ruler(){
    std::cout << "12345678901234567890123456789012345678901234567890" << std::endl;
};

int main() {

    int num1 {1234};
    double num2 {1234.5678};
    std::string hello {"Hello"};

    std::cout << "========================" << std::endl;
    // Example 1 -- Defaults
    
    ruler();
    std::cout << num1
    << num2 
    << hello
    << std::endl;
    
    // Example 1 -- Defaults
    std::cout << "========================" << std::endl;
    // Example 2 -- Defaults - one per line
    
    ruler();
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << hello << std::endl;
    
    // Example 2 -- Defaults - one per line
    std::cout << "========================" << std::endl;
    // Example 3 -- set field width to 10 (to the first output)
    
    ruler();
    std::cout << std::setw(10) << num1      // setwidth only applies to the next item
    << num2 
    << hello
    << std::endl;
    
    // Example 3 -- set field width to 10 (to the first output)
    std::cout << "========================" << std::endl;
    // Example 4 -- set field width to 10 (to the first two outputs)

    ruler();
    std::cout << std::setw(10) << num1
    << std::setw(10) << num2
    << hello << std::endl;

    // Example 4 -- set field width to 10 (to the first two outputs)
    std::cout << "========================" << std::endl;
    // Example 5 -- set fiied width to 10 (for all 3 outputs)

    ruler();
    std::cout << std::setw(10) << num1
    << std::setw(10) << num2 
    << std::setw(10) << hello << std::endl;

    // Example 5 -- set field width to 10 (for all 3 outputs)
    std::cout << "========================" << std::endl;
    // Example 6 -- set field width to 10 and left justify

    ruler();
    std::cout << std::setw(10) << std::left << num1
    << std::setw(10) << std::left << num2 
    << std::setw(10) << std::left << hello << std::endl;

    // Example 6 -- set field width to 10 and left justify
    std::cout << "========================" << std::endl;
    // Example 7 -- setfill to a dash (persistent)

    ruler();
    std::cout << std::setfill('-');
    std::cout << std::setw(10) << std::left << num1
    << std::setw(10) << std::left << num2
    << std::setw(10) << std::left << hello << std::endl;

    // Example 7 -- setfill to a dash (persistent)
    std::cout << "========================" << std::endl;
    // Example 8 -- setfill to different values

    ruler();
    std::cout << std::setw(10) << std::left << std::setfill('*') << num1
    << std::setw(10) << std::left << std::setfill('#') << num2
    << std::setw(10) << std::left << std::setfill('-') << hello
    << std::endl;

    // Example 8 -- setfill to different values
    std::cout << "========================" << std::endl;

    std::cout << std::endl;
    return 0;
}
/** @} */