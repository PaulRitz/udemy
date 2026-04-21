/**
 * @file main.cpp
 * @brief code challenge 02: practice file handling in c++
 * @details Automated Grader
 * Write a program that reads a file named resposes.txt that contains the answer key for a quiz
 * a s well as student responses for the quiz.
 * 
 * The answer key is the first item in the file.
 * 
 * Student1 name
 * Student1 responses
 * Student2 name
 * Student2 responses
 * ...
 * 
 * Here is a sample file:
 * ABCDE
 * Frank
 * ABCDE
 * Larry
 * ABCAC
 * Moe
 * BBCDE
 * Curly
 * BBAAE
 * Michael
 * BBCDE
 * 
 * You should read the file and display:
 * Each student's name and score (#correct out of 5)
 * At the end, the class average should be displayed
 * You may assume that the data in the file is properly formatted
 * 
 * Program should output to the console the following:
 * Student:     Score:
 * -------------------
 * Frank             5
 * Larry             4
 * ...
 * -------------------
 * Average score   3.6
 */
/**
 * @addtogroup section19
 * @{
 * @defgroup s19_cc02 CodeChallenge02
 * @brief code challenge 02: practice file handling in c++
 * @details Automated Grader
 * Write a program that reads a file named resposes.txt that contains the answer key for a quiz
 * a s well as student responses for the quiz.
 * 
 * The answer key is the first item in the file.
 * 
 * Student1 name
 * Student1 responses
 * Student2 name
 * Student2 responses
 * ...
 * 
 * Here is a sample file:
 * ABCDE
 * Frank
 * ABCDE
 * Larry
 * ABCAC
 * Moe
 * BBCDE
 * Curly
 * BBAAE
 * Michael
 * BBCDE
 * 
 * You should read the file and display:
 * Each student's name and score (#correct out of 5)
 * At the end, the class average should be displayed
 * You may assume that the data in the file is properly formatted
 * 
 * Program should output to the console the following:
 * Student:     Score:
 * -------------------
 * Frank             5
 * Larry             4
 * ...
 * -------------------
 * Average score   3.6
 * @}
 */
/**
 * @ingroup CCs
 * @addtogroup s19_cc02
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

int check_correct(string answer, string key, int &total);

int main() {

    ifstream responses;
    responses.open(input_file_path+"responses.txt");
    if(!responses){
        cerr << "[ERROR]: Problem opening file" << endl;
        return 1;
    }
    //##################################################
    //##################################################

    int run_var {};
    int total {};
    string key {};
    string name {};
    string temp_answers{};

    vector<string>students {};
    vector<string>answers {};
    
    getline(responses, key);

    while(!responses.eof()){
        if(run_var%2){
            getline(responses,temp_answers);
            answers.push_back(temp_answers);
        }else {
            getline(responses,name);
            students.push_back(name);
        }
        run_var++;
    }

    cout << setw(15) << left << "Student";
    cout << setw(15) << right << "Score" << endl;
    cout << "--------------------" << endl;

    for(size_t i{}; i < answers.size(); i++){
        cout << setw(15) << left << students.at(i);
        cout << setw(15) << right << check_correct(answers.at(i),key, total) << endl;;
    }

    cout << "--------------------" << endl;
    cout << setw(15) << left << "Average score:";
    cout << setw(15) << right << static_cast<double>(total)/(run_var/2);

    responses.close();
    std::cout << std::endl;
    return 0;
}

int check_correct(string answer, string key, int &total){
    int ret{};
    for(size_t i{}; i < key.size(); i++){
        if(key.at(i)==answer.at(i)){
            ret++;
        }
    }
    total+=ret;
    return ret;
}
/** @} */