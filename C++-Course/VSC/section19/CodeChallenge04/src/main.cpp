/**
 * @file main.cpp
 * @brief code challenge 04: practice using file streams -- write to a file
 * @details copy of romeo and juliet file and save it to another file.
 * This copy should have line numbers at the beginning of each line in the play.
 * Please format the numbers nicely so everything lines up.
 */
/**
 * @addtogroup section19
 * @{
 * @defgroup s19_cc04 CodeChallenge04
 * @brief code challenge 04: practice using file streams -- write to a file
 * @}
 */
/**
 * @addtogroup s19_cc04
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
    ifstream input_raj {input_file_path+"romeoandjuliet.txt"};
    ifstream input_jm {input_file_path+"john_maynard.txt"};
    ifstream input_s {input_file_path+"shakespeare.txt"};
    ofstream output_raj {output_file_path+"romeoandjuliet_copy.txt"};
    ofstream output_jm {output_file_path+"john_maynard_copy.txt"};
    ofstream output_s {output_file_path+"shakespeare_copy.txt"};
    if(!input_raj){
        cerr << "[ERROR]: Problem opening input file for: Romeo and Juliet" << endl;
        return 1;
    }
    if(!output_raj){
        cerr << "[ERROR]: Problem opening output file for: Romeo and Juliet" << endl;
        return 1;
    }

    //###############################################################################
    //###############################################################################

    vector<ifstream*> inputs {&input_raj,&input_jm, &input_s};
    vector<ofstream*> outputs {&output_raj,&output_jm,&output_s};

    int line_count {1};
    string line {};

    for(size_t i{}; i < inputs.size(); i++){
    
        while(getline(*inputs.at(i), line)){
            if(line==""){
                *outputs.at(i) << endl;
            }else{
            *outputs.at(i) << setw(3) << right << line_count++ << "| " << line << endl;
            }
        }
        line_count = 1;
    }

    cout << "Copies complete" << endl;
    for(const auto out : outputs){
        out->close();
    }
    for(const auto in : inputs){
        in->close();
    }

    std::cout << std::endl;
    return 0;
}
/** @} */