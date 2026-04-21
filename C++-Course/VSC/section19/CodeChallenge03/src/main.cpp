/**
 * @file main.cpp
 * @brief code challenge 03: practice file handling in c++
 * @details Word finder
 * Ask the user to ener a word
 * Process the Romeo and Juliet file and determine how many total words there are
 * and how many times the word the user entered appears as a substring of a word in the play
 * 
 * For example.
 * If the user enters love:
 * Then the words love, lovely, and beloved will all be considered matches.
 * You decide whether you want to be case sensitive or not. My solution is case sensitive
 */
/**
 * @addtogroup section19
 * @{
 * @defgroup s19_cc03 CodeChallenge03
 * @brief code challenge 03: practice file handling in c++
 * @details Word finder
 * Ask the user to ener a word
 * Process the Romeo and Juliet file and determine how many total words there are
 * and how many times the word the user entered appears as a substring of a word in the play
 * 
 * For example.
 * If the user enters love:
 * Then the words love, lovely, and beloved will all be considered matches.
 * You decide whether you want to be case sensitive or not. My solution is case sensitive
 * @}
 */
/**
 * @ingroup CCs
 * @addtogroup s19_cc03
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

int compare_words(string to_find, string word);

int main() {

    ifstream input;
    input.open(input_file_path+"romeoandjuliet.txt");
    if(!input){
        cerr << "Problem opening file" << endl;
        return 1;
    }

    //################################################
    //################################################

    string to_find {};
    string word {};
    int total_words {};
    int matches {};

    cout << "Enter the word you want to search for: ";
    cin >> to_find;

    while(input >> word){
        total_words++;
        matches += compare_words(to_find, word);
    }

    cout << total_words << " words were searched..." << endl;
    cout << "The substring " << to_find << " was found " << matches << " times" << endl;


    input.close();
    std::cout << std::endl;
    return 0;
}

int compare_words(string to_find, string word){
    if(word.find(to_find) != string::npos){
        return 1;
    }
    return 0;
}
/** @} */