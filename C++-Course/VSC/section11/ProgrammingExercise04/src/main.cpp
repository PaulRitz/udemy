/**
 * @file main.cpp
 * @brief programming exercise 04: practice using functions
 */

/**
 * @addtogroup section11
 * @{
 * @defgroup s11_pe04 ProgrammingExercise04
 * @brief programming exercise 04: practice using functions
 * @}
 */

/**
 * @ingroup PEs
 * @addtogroup s11_pe04
 * @{
 */
#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int find_area(int a);
double find_area(double a, double b);

int main() {

    int side_length { 5};
    double width {12.5}; 
    int square_area {find_area(side_length)};
    double rectangle_area {find_area(static_cast<double>(side_length),width)};

    cout << "Square: " << square_area << endl;
    cout << "rectangle: " << rectangle_area << endl;
    

    cout << endl;
    return 0;
}

int find_area(int a){
    return a*a;
}
double find_area(double a, double b){
    return a*b;
}
/** @} */