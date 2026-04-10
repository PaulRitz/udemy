/**
 * @file main.cpp
 * @brief showcase of the most basic functions of pointers
 */

/**
 * @addtogroup section12
 * @{
 * @defgroup s12_p11 SimplePointers
 * @brief showcase of the most basic functions of pointers
 * @}
 */

/** 
 * @addtogroup s12_p11
 * @{
 */
#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int main() {

    cout << "==============================" << endl;
    // Example 1
    
    int num {10};
    cout << "Value of num is: " << num << endl;
    cout << "sizeof of num is: " << sizeof(num) << endl;
    cout << "Address of num is: " << &num << endl;
    
    int *p;
    cout << "\nValue of p is: " << p << endl;
    cout << "Address of p is: " << &p << endl;
    cout << "sizeof of p is: " << sizeof(p) << endl;

    p = nullptr;
    cout << "\nValue of p is now: " << p << endl;

    // Example 1
    cout << "==============================" << endl;
    // Example 2

    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector<string> *p4 {nullptr};
    string *p5 {nullptr};

    cout << "\nsizeof p1 is: " << sizeof(p1) << endl;
    cout << "sizeof p2 is: " << sizeof(p2) << endl;
    cout << "sizeof p3 is: " << sizeof(p3) << endl;
    cout << "sizeof p4 is: " << sizeof(p4) << endl;
    cout << "sizeof p5 is: " << sizeof(p5) << endl;

    // Example 2
    cout << "==============================" << endl;
    // Example 3

    int score {10};
    double high_temp {100.7};

    int *score_ptr{nullptr};

    score_ptr = &score;
    cout << "Value of score is: " << score << endl;
    cout << "Address of score is: " << &score << endl;
    cout << "Value of score_ptr is: " << score_ptr << endl;

    // score_ptr = &high_temp; // compiler error -- assigning address of double to integer pointer

    // Example 3
    cout << "==============================" << endl;
    cout << endl;
    return 0;
}
/** @} */