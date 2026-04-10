/**
 * @file main.cpp
 * @brief showcase of pass by reference functionality
 */

/**
 * @addtogroup section11
 * @{
 * @defgroup s11_p10 PassByReference
 * @brief showcase of pass by reference functionality
 * @}
 */

/**
 * @addtogroup s11_p10
 * @{
 */
#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &v);
void print_vector(const vector<string> &v);

int main() {

    int num{10};
    int another_num{20};
    string str {"Paul Ritz"};
    vector<string> stooges {"Larr", "Moe", "Curly"};

    cout << "================================" << endl << endl;;
    // Example 1

    cout << "num before calling pass_by_ref1: " << num << endl;
    pass_by_ref1(num);
    cout << "num affter calling pass_by_ref1: " << num << endl;

    // Example 1
    cout << "\n================================" << endl << endl;
    // Example 2

    cout << "anoter_num before calling pass_by_ref1: " << another_num << endl;
    pass_by_ref1(another_num);
    cout << "another_num after calling pass_by_ref1: " << another_num << endl;

    // Example 2
    cout << "\n================================" << endl << endl;    
    // Example 3

    cout << "str before calling pass_by_ref2: " << str << endl;
    pass_by_ref2(str);
    cout << "str after calling pass_by_ref2: " << str << endl;

    // Example 3
    cout << "\n================================" << endl << endl;
    // Example 4

    cout << "stooges before calling pass_by_ref3: " << endl;
    print_vector(stooges);
    pass_by_ref3(stooges);
    cout << "stooges after calling pass_by_ref3: " << endl;
    print_vector(stooges);

    // Example 4
    cout << "\n================================" << endl;
    
    cout << endl;
    return 0;
}

void pass_by_ref1(int &num){
    num = 1000;
}
void pass_by_ref2(string &s){
    s = "Changed";
}
void pass_by_ref3(vector<string> &v){
    v.clear();
}
void print_vector(const vector<string> &v){
    for(auto str : v){
        cout << str << endl;
    }
}
/** @} */
