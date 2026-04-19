/**
 * @file main.cpp
 * @brief Miles per Gallon - with exception handling
 */
/**
 * @addtogroup s18_p01
 * @{
 * @defgroup s18_p01_02 MPGException
 * @brief Miles per Gallon - with exception handling
 * @}
 */
/**
 * @addtogroup s18_p01_02
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

    try{
        if(gallons == 0){
            throw 0;
        }
        miles_per_gallon = static_cast<double>(miles) / gallons;
        cout << "Result: " << miles_per_gallon << endl;
    }
    catch (int &ex){
        cerr << "Sorry, you can't divide by zero" << endl;
    }



    cout << "Bye" << endl;

    cout << endl;
    return 0;
}
/** @} */