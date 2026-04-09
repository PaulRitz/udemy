/**
 * @file main.cpp
 * @brief Programming Exercise 02: learn how to work with vectors
 */

/**
 * @addtogroup section07
 * @{
 * @defgroup s07_p04 ProgrammingExercise02
 * @brief Programming Exercise 02: learn how to work with vectors
 * @}
 */

/**
 * @addtogroup s07_p04
 * @{
 */
#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector <int> vec {10,20,30,40,50};

    vec.at(0) = 100;
    vec.at(4) = 1000;

    for(unsigned int i = 0; i < vec.size(); i++){
        cout << vec.at(i) << endl;
    }

    return 0;
}
/** @} */