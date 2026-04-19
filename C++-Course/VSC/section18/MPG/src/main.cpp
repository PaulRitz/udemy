/**
 * @file main.cpp
 * @brief Miles per Gallon - no exception handling
 */
/**
 * @defgroup section18 Section 18: Exception handling
 * @brief Section 18 showcases how exception handling works in c++
 */
/**
 * @addtogroup section18
 * @{
 * @defgroup s18_p01 MPGExceptionHandlingIntro
 * @brief Miles per Gallon -- introduction to Exception Handling
 * @}
 */
/**
 * @addtogroup s18_p01
 * @{
 * @defgroup s18_p01_01 MPG
 * @brief Miles per Gallon - no exception handling
 * @}
 */
/**
 * @addtogroup s18_p01_01
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <memory>

using namespace std;

int main() {

    int miles {};
    int gallons {};
    double miles_per_gallon {};

    cout << "Enter the miles: ";
    cin >> miles;
    cout << "Enter the gallons: ";
    cin >> gallons;

    if(gallons!=0){
    // miles_per_gallon = miles / gallons;                      // integer division
    miles_per_gallon = static_cast<double>(miles) /gallons;     // floating point division
        cout << "Result: " << miles_per_gallon << endl;
    } else {
        cerr << "Sorry, can't divide by zero" << endl;
    }



    cout << "Bye" << endl;

    cout << endl;
    return 0;
}
/** @} */