/**
 * @file main.cpp
 * @brief programming exercise 01: practice using file streams
 */
/**
 * @addtogroup section19
 * @{
 * @defgroup s19_pe01 ProgrammingExercise01
 * @brief programming exercise 01: practice using file streams
 * @}
 */
/**
 * @ingroup PEs
 * @addtogroup s19_pe01
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

void read_file(string file_name);

int main() {

    read_file("shakespeare.txt");

    read_file("john_maynard.txt");

    std::cout << std::endl;
    return 0;
}

void read_file(string file_name){
    ifstream input;
    input.open(input_file_path+file_name);
    if(!input){
        cerr << "[ERROR]: Problem opening file: " << file_name << endl;
        return;
    }

    //##################################################################
    //##################################################################
    string line {};

    cout << "\nReading from: " << file_name << endl;
    cout << "===========================" << endl << endl;
    while(!input.eof()){
        getline(input, line);
        cout << line << endl;
    }
    cout << "\n===========================" << endl << endl;

}
/** @} */