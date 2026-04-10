/**
 * @file main.cpp
 * @brief showcase of dereferencing pointers in c++
 */

/**
 * @addtogroup section12
 * @{
 * @defgroup s12_p03
 * @brief showcase of dereferencing pointers in c++
 * @}
 */

/**
 * @addtogroup s12_p03
 * @{
 */
#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int main() {

    cout << "===============================" << endl;
    // Example 1
    
    int score {100};
    int *score_ptr {&score};
    
    cout << *score_ptr << endl;
    
    *score_ptr = 200;
    
    cout << *score_ptr << endl;
    cout << score << endl;
    
    // Example 1
    cout << "===============================" << endl;
    // Example 2

    double high_temp {100.7};
    double low_temp {37.5};
    double *temp_ptr {&high_temp};

    cout << *temp_ptr << endl;
    temp_ptr = &low_temp;
    cout << *temp_ptr << endl;

    // Example 2
    cout << "===============================" << endl;
    // Example 3

    string name {"Frank"};
    string *string_ptr {&name};

    cout << *string_ptr << endl;
    name = "James";
    cout << *string_ptr << endl;

    // Example 3
    cout << "===============================" << endl;
    // Example 4

    vector<string> stooges {"Larry", "Moe", "Curly"};
    vector<string> *vector_ptr {nullptr};

    vector_ptr = &stooges;

    cout << "First stooge: " << (*vector_ptr).at(0) << endl;

    cout << "Stooges: ";
    for(auto stooge : *vector_ptr){
        cout << stooge << " ";
    }
    cout << endl;

    // Example 4
    cout << "===============================" << endl;
    cout << endl;
    return 0;
}
/** @} */