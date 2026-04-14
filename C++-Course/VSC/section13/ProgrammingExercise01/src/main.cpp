/**
 * @file main.cpp
 * @brief programming exercise 01: practice using c++ classes and objects
 */
/**
 * @addtogroup section13
 * @{
 * @defgroup s13_pe01 ProgrammingExercise01
 * @brief programming exercise 01: practice using c++ classes and objects
 * @}
 */
/**
 * @addtogroup s13_pe01
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

class Dog0{
    public:
    int age {};
    string name {"Name"};
};

int main() {

    Dog0 spot;
    spot.name = "Spot";
    spot.age = 5;
    

    cout << endl;
    return 0;
}
/** @} */