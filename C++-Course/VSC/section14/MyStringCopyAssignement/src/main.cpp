/**
 * @file main.cpp
 * @brief copying my string with custom operator overloading
 */

/**
 * @addtogroup section14
 * @{
 * @defgroup s14_p02 MyStringCopyAssignement
 * @brief copying my string with custom operator overloading
 * @}
 */
/**
 * @addtogroup s14_p02
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

#include "myStringv2.h"

int main() {
    cout << "=================================" << endl;
    // Example 1
    myStringv2 a {"Hello"}; // overloaded constructor
    myStringv2 b;           // no args constructor  
    
    b= a;                   // copy assignement
                            // b.operator=(a)
    b = "This is a test";
    // Example 1
    cout << "=================================" << endl;
    // Example 2

    myStringv2 empty;
    myStringv2 larry("Larry");
    myStringv2 stooge {larry};
    myStringv2 stooges;

    // Example 2
    cout << "=================================" << endl;
    // Example 3

    empty = stooge;

    empty.display();
    larry.display();
    stooge.display();
    empty.display();

    // Example 3
    cout << "=================================" << endl;
    // Example 4

    stooges = "Larry, Moe, and Curly";
    stooges.display();

    // Example 4
    cout << "=================================" << endl;
    // Example 5

    vector<myStringv2> stooges_vec;
    stooges_vec.push_back("Larry");
    stooges_vec.push_back("Moe");
    stooges_vec.push_back("Curly");

    // Example 5
    cout << "=================================" << endl;
    // Example 6 - Loop 1

    for(const myStringv2 &s : stooges_vec){
        s.display();
    }

    // Example 6 - Loop 1
    cout << "=================================" << endl;
    // Example 7 - Loop 2

    for(myStringv2 &s : stooges_vec){
        s = "Changed";
    }

    // Example 7 - Loop 2
    cout << "=================================" << endl;
    // Example 8 - Loop 3

    for(const myStringv2 &s : stooges_vec){
        s.display();
    }

    // Example 8 - Loop 3
    cout << "=================================" << endl;

    cout << endl;
    return 0;
}
/** @} */