/**
 * @file main.cpp
 * @brief showcase of class templates: template class array
 */
/**
 * @addtogroup section20
 * @{
 * @defgroup s20_p03 ClassTemplateArray
 * @brief showcase of class templates: template class array
 * @}
 */
/**
 * @addtogroup s20_p03
 * @{
 */

#ifndef FILES_IN_DIR
#define FILES_IN_DIR "files/in/"
#endif
#ifndef FILES_OUT_DIR
#define FILES_OUT_DIR "files/out/"
#endif

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <memory>
#include <fstream>

const std::string input_file_path = std::string(FILES_IN_DIR);
const std::string output_file_path = std::string(FILES_OUT_DIR);

#include "../include/header.h"

// using namespace std;

int main() {
    std::cout << "================================================" << std::endl;
    // Example 1
    
    Array<int, 5> nums;
    std::cout << "The size of nums is: " << nums.get_size() << std::endl;
    std::cout << nums << std::endl;
    
    nums.fill(0);
    std::cout << "The size of nums is: " << nums.get_size() << std::endl;
    std::cout << nums << std::endl;
    
    nums.fill(10);
    std::cout << nums << std::endl;
    
    nums[0] = 1000;
    nums[3] = 2000;
    std::cout << nums << std::endl;
    
    Array<int, 100> nums2 {1};
    std::cout << "The size of nums2 is: " << nums2.get_size() << std::endl;
    std::cout << nums2 << std::endl;
    
    // Example 1
    std::cout << "================================================" << std::endl;
    // Example 2

    Array<std::string, 10> strings(std::string{"Frank"});
    std::cout << "The size of strings is: " << strings.get_size() << std::endl;
    std::cout << strings << std::endl;
    
    strings[0] = std::string{"Larry"};
    std::cout << "The size of strings is: " << strings.get_size() << std::endl;
    std::cout << strings << std::endl;
    
    strings.fill(std::string{"X"});
    std::cout << "The size of strings is: " << strings.get_size() << std::endl;
    std::cout << strings << std::endl;
    
    // Example 2
    std::cout << "================================================" << std::endl;
    
    std::cout << std::endl;
    return 0;
}
/** @} */