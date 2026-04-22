/**
 * @file main.cpp
 * @brief code challenge 03: practice using stl sets and maps
 * @details Using set and map
 * This challenge has 2 parts.
 * We will be reading words from a text file provided to you.
 * The text file is named 'words.txt' and contains the first few 
 * paragraphs from the bopok. "The Wonderfull Wizard of Oz", by
 * L. Frank Baum.
 * 
 * Part 1:
 * For part 1 ofthis challenge, you are to display each unique word
 * in the file and immediately following each word display the number
 * of times it occurs in the text file.
 * 
 * The words should be displayed in ascending order.
 * 
 * Here is a sample listing of the first few words:
 * 
 * Word             Count
 * ======================
 * Aunt             5
 * Dorothy          8
 * Dorothy's        1
 * Em               5
 * Even             1
 * From             1
 * 
 * Please use a map with <string, int> Key/Value pairs
 * ==================================================================
 * Part 2:
 * For part 2 of this challenge you are to display each unique word
 * in the file and immediately following each word display the line numbers 
 * in which that word appears.
 * 
 * The words should be displayed in ascending order and the line numbers for
 * each word should also be displayed in ascending order.
 * If a word appears more than once on a line then the line number should
 * only appear once.
 * 
 * Here is a sample listing of the first few words
 * 
 * Word         Occurences
 * =======================
 * Aunt         [ 2 7 25 29 48 ]
 * Dorothy      [ 1 7 15 29 39 43 47 51 ]
 * Dorothy's    [ 31 ]
 * Em           [ 2 7 25 30 48 ]
 * Even         [ 19 ]
 * From         [ 50 ]
 * 
 * Note: I have provided the basic shell for your program.
 * have also provided the functions that display the maps
 * as well as the function that cleans the words read.
 * You should call the clean_string function for every word 
 * you read from the file.
 */
/**
 * @addtogroup section20
 * @{
 * @defgroup s20_cc03 CodeChallenge03
 * @brief code challenge 03: practice using stl sets and maps
 * @details Using set and map
 * This challenge has 2 parts.
 * We will be reading words from a text file provided to you.
 * The text file is named 'words.txt' and contains the first few 
 * paragraphs from the bopok. "The Wonderfull Wizard of Oz", by
 * L. Frank Baum.
 * 
 * Part 1:
 * For part 1 of this challenge, you are to display each unique word
 * in the file and immediately following each word display the number
 * of times it occurs in the text file.
 * 
 * The words should be displayed in ascending order.
 * 
 * Here is a sample listing of the first few words:
 * 
 * Word             Count
 * ======================
 * Aunt             5
 * Dorothy          8
 * Dorothy's        1
 * Em               5
 * Even             1
 * From             1
 * 
 * Please use a map with <string, int> Key/Value pairs
 * ==================================================================
 * Part 2:
 * For part 2 of this challenge you are to display each unique word
 * in the file and immediately following each word display the line numbers 
 * in which that word appears.
 * 
 * The words should be displayed in ascending order and the line numbers for
 * each word should also be displayed in ascending order.
 * If a word appears more than once on a line then the line number should
 * only appear once.
 * 
 * Here is a sample listing of the first few words
 * 
 * Word         Occurences
 * =======================
 * Aunt         [ 2 7 25 29 48 ]
 * Dorothy      [ 1 7 15 29 39 43 47 51 ]
 * Dorothy's    [ 31 ]
 * Em           [ 2 7 25 30 48 ]
 * Even         [ 19 ]
 * From         [ 50 ]
 * 
 * Note: I have provided the basic shell for your program.
 * have also provided the functions that display the maps
 * as well as the function that cleans the words read.
 * You should call the clean_string function for every word 
 * you read from the file.
 * @}
 */
/**
 * @ingroup CCs
 * @addtogroup s20_cc03
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
#include <algorithm>
#include <set>
#include <map>
#include <sstream>

const std::string input_file_path = std::string(FILES_IN_DIR);
const std::string output_file_path = std::string(FILES_OUT_DIR);

using namespace std;

map<string,int> display_word_count(const string input_file);
map<string,set<int>> display_word_occurrences(const string input_file, const map<string,int> &source);

template<typename T1, typename T2>
void display_map(const map<T1,T2> &source){
    for(const auto &val : source){
        cout << setw(15) << left << val.first;
        cout << val.second << endl;
    }
}
void display_map_set(const map<string,set<int>> &source){
    for(const auto &val : source){
        cout << setw(15) << left << val.first;
        cout << "[ ";
        for(const auto &set_val : val.second){
            cout << set_val << " ";
        }
        cout << "]" << endl;
    }
}

int main() {

    string input_file {"words.txt"};
    map<string,int> count_map;
    map<string,set<int>> occ_map;


    count_map = display_word_count(input_file);
    cout << endl << endl;
    occ_map = display_word_occurrences(input_file, count_map);
    
    

    std::cout << std::endl;
    return 0;
}

map<string,int> display_word_count(const string input_file){
    ifstream in_file;
    in_file.open(input_file_path + input_file);
    if(!in_file){
        cerr << "[ERROR]: Problem opening file: " << input_file << endl;
        return {};
    }

    map<string,int> data;
    string word {};

    cout << setw(15) << left << "Word";
    cout << "Count" << endl;
    cout << "====================" << endl;
    
    map<string,int>::iterator it;
    
    while(in_file >> word){
        if(toupper(word.back()) < 'A' || toupper(word.back()) > 'Z'){
            word.pop_back();
        }
        it = data.find(word);
        if(it != data.end()){
            it->second++;
        }else{
            data.emplace(make_pair(word, 1));
        }
    }
    display_map(data);
    cout << "====================" << endl;
    cout << endl;
    in_file.close();
    return data;
}
map<string,set<int>> display_word_occurrences(const string input_file, const map<string,int> &source){
    ifstream in_file;
    in_file.open(input_file_path+input_file);
    if(!in_file){
        cerr << "[ERROR]: Problem opening file: " << input_file << endl;
        return {};
    }

    cout << setw(15) << left << "Word";
    cout << "Occurrence" << endl;
    cout << "=========================" << endl;
    
    map<string,set<int>> data;
    string line {};
    int line_count {};
    
    map<string,set<int>>::iterator map_set_it;
    // int str_ind;

    while(getline(in_file, line)){
        line_count++;
        stringstream in_line {line};
        string word {};
        // for(const auto &val : source){
        //     str_ind = line.find(val.first);
        //     map_set_it = data.find(val.first);
        //     if(str_ind != -1){
        //         if(map_set_it != data.end()){
        //             map_set_it->second.insert(line_count);
        //         } else{
        //             data[val.first].insert(line_count);
        //         }
        //     }
        // }
        while(in_line >> word) {
            if(toupper(word.back()) < 'A' || toupper(word.back()) > 'Z'){
                word.pop_back();
            }
            if(source.find(word) != source.end()) {
                data[word].insert(line_count);
            }
        }

    }

    display_map_set(data);

    cout << "=========================" << endl;
    in_file.close();
    return data;
}

/** @} */