/**
 * @file main.cpp
 * @brief a brief description of the program
 */
/**
 * @addtogroup
 * @{
 * @defgroup sXX_XXX
 * @brief a brief decription of the program
 * @}
 */
/**
 * @addtogroup sXX_XXX
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
#include <limits>
#include <sstream>

const std::string input_file_path = std::string(FILES_IN_DIR);
const std::string output_file_path = std::string(FILES_OUT_DIR);

using namespace std;

int main() {

    int num {};
    double total {};
    string name {};

    cout << "=============================" << endl;
    string info {"Moe 100 1234.5"};
    istringstream iss {info};
    
    iss >> name >> num >> total;
    cout << setw(10) << left << name
    << setw(5) << num
    << setw(10) << total << endl;
    cout << "=============================" << endl;
    ostringstream oss{};
    oss << setw(10) << left << name
    << setw(5) << num 
    << setw(10) << total << endl;
    cout << oss.str() << endl;
    cout << "=============================" << endl;

    int value {};
    string entry {};
    bool done {false};
    do{
        cout << "Please eneter an integer: ";
        cin >> entry;
        istringstream validator {entry};
        if(validator >> value){
            done = true;
        }else {
            cout << "Sorry, thats not an integer" << endl;
        }
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
    }while(!done);


    std::cout << std::endl;
    return 0;
}
/** @} */