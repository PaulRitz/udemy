/**
 * @file main.cpp
 * @brief showcase of function overloading
 * @details function overloading means writing multiple different function definitions
 * for one function, then while coding the same function can be used e.g. for multiple data types
 * because the function has definitions for every data type
 */

/**
 * @addtogroup section11
 * @{
 * @defgroup s11_p06
 * @brief showcase of function overloading
 * @details function overloading means writing multiple different function definitions
 * for one function, then while coding the same function can be used e.g. for multiple data types
 * because the function has definitions for every data type
 * @}
 */

/**
 * @addtogroup s11_p06
 * @{
 */
#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

void print(int);
void print(double=125.5);       // always uses the default value if no value is provided
void print(string);             // multiple defaults will give compiler errors
void print(string, string);
void print(vector<string>);

int main() {
    print();
    print(100);                 // int
    print('A');                 // characters are promoted to int

    print(123.5);               // double
    print(123.3F);              // Float is promoted to double

    print("C-Style string");    // C-style string is converted to Cpp style string

    string s{"Cpp string"};
    print(s);

    print("C-style string", s);

    vector<string> three_stooges {
        "Larry",
        "Moe",
        "Curly"
    };

    cout << endl;
    return 0;
}

void print(int num){
    cout << "Printing int: " << num << endl;
}
void print(double num){
    cout << "Printing double: " << num << endl;
}
void print(string str){
    cout << "Printing string: " << str << endl;
}
void print(string str1, string str2){
    cout << "Printing 2 strings: " << str1 + " | " + str2 << endl;
}
void print(vector<string> strvec){
    cout << "Printing vector of strings: " << endl;
    for(auto str : strvec){
        cout << str << endl;
    }
}
/** @} */