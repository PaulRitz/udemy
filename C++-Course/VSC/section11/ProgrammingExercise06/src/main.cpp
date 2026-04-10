/**
 * @file main.cpp
 * @brief programming exercise 06: practice using functions
 */

/**
 * @addtogroup section11
 * @{
 * @defgroup s11_pe06 ProgrammingExercise06
 * @brief programming exercise 06: practice using functions
 * @}
 */

/**
 * @addtogroup s11_pe06
 * @{
 */
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <typeinfo>

using namespace std;

string print_guest_list(const string &g1, const string &g2, const string &g3);
void clear_guest_list(string &g1, string &g2, string &g3);

int main() {

    string guest_1 {"Larry"};
    string guest_2 {"Moe"};
    string guest_3 {"Curly"};

    print_guest_list(guest_1, guest_2, guest_3);
    cout << "." << endl;
    clear_guest_list(guest_1, guest_2, guest_3);
    print_guest_list(guest_1, guest_2, guest_3);
    cout << "." << endl;

    cout << endl;
    return 0;
}

string print_guest_list(const string &g1, const string &g2, const string &g3){
    cout << g1 << endl;
    cout << g2 << endl;
    cout << g3 << endl;

    string test_1 = typeid(g1).name(), test_2 = typeid(g2).name(), test_3 = typeid(g3).name();
    return test_1 + test_2 + test_3;
}
void clear_guest_list(string &g1, string &g2, string &g3){
    g1 = " ";
    g2 = " ";
    g3 = " ";
}
/** @} */