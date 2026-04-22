/**
 * @file main.cpp
 * @brief showcase of the stl map container
 */
/**
 * @addtogroup section20
 * @{
 * @defgroup s20_p11 Map
 * @brief showcase of the stl map container
 * @}
 */
/**
 * @addtogroup s20_p11
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
#include <map>
#include <set>

const std::string input_file_path = std::string(FILES_IN_DIR);
const std::string output_file_path = std::string(FILES_OUT_DIR);

using namespace std;

template<typename T1, typename T2>
void display(const map<T1,T2> &source){
    cout << "[ ";
    for(const auto &val : source){
        cout << val.first << ":" << val.second << " ";
    }
    cout << "]" << endl;
}
void display(const map<string, set<int>> &source){
    cout << "[ ";
    for(const auto &val : source){
        cout << val.first << ": [ ";
        for(const auto &set_val : val.second){
            cout << set_val << " ";
        }
        cout << "] ";
    }
    cout << "]" << endl;
}

int main() {

    cout << "================================" << endl;
    // Example 1

    map<string, int> m1 {
        {"Larry", 3},
        {"Moe", 1},
        {"Curly", 2}
    };
    display(m1);

    m1.insert(pair<string,int>("Anna",10));
    display(m1);

    m1.insert(make_pair("Joe",5));
    display(m1);

    m1["Frank"] = 18;
    display(m1);

    m1["Frank"]+=10;
    display(m1);

    m1.erase("Frank");
    display(m1);

    cout << "Count for Joe: " << m1.count("Joe") << endl;
    cout << "Count for Frank: " << m1.count("Frank") << endl;

    auto it1 = m1.find("Larry");
    if(it1 != m1.end()){
        cout << "Found: " << it1->first << ":" << it1->second << endl;
    }

    m1.clear();
    display(m1);

    // Example 1
    cout << "================================" << endl;
    // Example 2

    map<string,set<int>> grades {
        {"Larry", {100,90}},
        {"Moe", {94}},
        {"Curly", {80,90,100}}
    };

    display(grades);

    auto it2 = grades.find("Moe");
    if(it2 != grades.end()){
        it2->second.insert(1000);
    }
    display(grades);

    // Example 2
    cout << "================================" << endl;

    std::cout << std::endl;
    return 0;
}
/** @} */