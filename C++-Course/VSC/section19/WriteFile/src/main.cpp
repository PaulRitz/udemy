/**
 * @file main.cpp
 * @brief showcase of file handling: writing to a file
 */
/**
 * @addtogroup section19
 * @{
 * @defgroup s19_p09
 * @brief showcase of file handling: writing to a file
 * @}
 */
/**
 * @addtogroup s19_p09
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

// using namespace std;

int main() {

    std::ofstream out_file {output_file_path+"output.txt", std::ios::app};              // equivalent to out_file.open(...);
    
    // default: overrides files content, with std::ios::app (like append) lines are appended
    // out_file.open(output_file_path+"output.txt");
    if(!out_file){
        std::cerr << "Error creating file" << std::endl;
        return 1;
    }

    std::string line {};
    std::cout << "Enter something to write to the file: ";
    std::getline(std::cin, line);
    out_file << line << std::endl;

    out_file.close();
    std::cout << std::endl;
    return 0;
}
/** @} */