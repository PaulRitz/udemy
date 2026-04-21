/**
 * @file main.cpp
 * @brief showcase of file handling in c++ -- file reading
 */
/**
 * @addtogroup section19
 * @{
 * @defgroup s19_p08 ReadFile04
 * @brief showcase of file handling in c++ -- file reading
 * @}
 */
/**
 * @addtogroup s19_p08
 * @{
 */

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

using namespace std;

int main() {
    ifstream in_file_shakespeare;
    ifstream in_file_fontane;
    in_file_shakespeare.open(input_file_path + "/shakespeare.txt");
    in_file_fontane.open(input_file_path + "/john_maynard.txt");
    if(!in_file_fontane){
        cerr << "john_maynard.txt -- Problem opening file" << endl;
        return 1;
    }
    if(!in_file_shakespeare){
        cerr << "shakespeare.txt -- Problem opening file" << endl;
        return 1;
    }

    //##############################################################
    //##############################################################
    char c {};

    while(in_file_shakespeare.get(c)){
        cout << c;
    }
    cout << endl;


    in_file_fontane.close();
    in_file_shakespeare.close();
    std::cout << std::endl;
    return 0;
}
/** @} */