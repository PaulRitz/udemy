/**
 * @file main.cpp
 * @brief showcase of file handling in c++: writing to a file
 */
/**
 * @addtogroup section19
 * @{
 * @defgroup s19_p10 CopyFile01
 * @brief showcase of file handling in c++: writing to a file
 * @}
 */
/**
 * @addtogroup s19_p10
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

using namespace std;

int main() {

    ifstream input {input_file_path+"shakespeare.txt"};
    ofstream output {output_file_path+"shakespeare_cpy_1.txt"};
    if(!input){
        cerr << "[ERROR]: Problem opening input file" << endl;
        return 1;
    }
    if(!output){
        cerr << "[ERROR]: Problem opening output file" << endl;
        return 1;
    }

    //########################################################
    //########################################################

    string line {};
    char c{};
    while(!input.eof()){
        getline(input, line);
        output << "* " << line << endl;
    }
    // while(!input.eof()){
    //     input.get(c);
    //     output.put(c);
    // }
    
    cout << "File copied" << endl;
    input.close();
    output.close();
    std::cout << std::endl;
    return 0;
}
/** @} */