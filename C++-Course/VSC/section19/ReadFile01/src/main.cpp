/**
 * @file main.cpp
 * @brief showcase of file handling -- file reading
 */
/**
 * @addtogroup section19
 * @{
 * @defgroup s19_p05 ReadFile01
 * @brief showcase of file handling -- file reading
 * @}
 */
/**
 * @addtogroup s19_p05
 * @{
 */


// for makefile execution we have to use the path without ../ 
// because it is always relative to the makefiles location
#ifndef FILES_IN_DIR                
#define FILES_IN_DIR "files/in"
#endif
#ifndef FILES_OUT_DIR
#define FILES_OUT_DIR "files/out"
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

// using namespace std;

int main() {

    std::ifstream in_file;
    in_file.open(input_file_path + "/test.txt");
    if(!in_file){
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }
    // std::cout << "File is good to go" << std::endl;

    //####################################################
    //####################################################

    std::string line {};
    int num {};
    double total {};

    in_file >> line >> num >> total;                // This takes a string until the first space is found
    std::cout << line << std::endl;
    std::cout << num << std::endl;
    std::cout << total << std::endl;
    in_file.close();

    std::cout << std::endl;
    return 0;
}
/** @} */