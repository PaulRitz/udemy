/**
 * @file main.cpp
 * @brief showcase of file handling in c++ -- file reading
 */
/**
 * @addtogroup section19
 * @{
 * @defgroup s19_p06 ReadFile02
 * @brief showcase of file handling in c++ -- file reading
 * @}
 */
/**
 * @addtogroup s19_p06
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
    std::ifstream in_file;
    in_file.open(input_file_path + "/test.txt");
    if(!in_file){
        cerr << "Problem opening file" << endl;
        return 1;
    }

    //##########################################
    //##########################################

    string line {};
    int num {};
    double total {};

    cout << "=============================" << endl;
    // Possible while loop to loop through files
    
    while(!in_file.eof()){
        in_file >> line >> num >> total;
        
        cout << setw(10) << left << line
        << setw(10) << num
        << setw(10) << total
        << endl;
    }
    
    // Possible while loop to loop through files
    cout << "=============================" << endl;
    // Possible while loop to loop through files

    // while(in_file >> line >> num >> total){
    //     cout << setw(10) << left << line
    //     << setw(10) << num
    //     << setw(10) << total
    //     << endl;
    // }

    // Possible while loop to loop through files
    cout << "=============================" << endl;
    
    // !!!!!!!!!!!!!! TO TEST ONE OF THE LOOOPS YOU HAVE TO COMMENT OUT THE OTHER ONE
    // BECAUSE AFTER ONE LOOP THE FILE REACHES ITS END AND WILL NOT BE RESET

    in_file.close();
    std::cout << std::endl;
    return 0;
}
/** @} */