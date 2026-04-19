/**
 * @file main.cpp
 * @brief showcase of exception handling in functions
 */
/**
 * @addtogroup section18
 * @{
 * @defgroup s18_p02
 * @brief showcase of exception handling in functions
 * @}
 */
/**
 * @addtogroup s18_p02
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <memory>

using namespace std;

double calculate_mpg(int miles, int gallons);

int main() {

    int miles {};
    int gallons {};
    double miles_per_gallon {};

    cout << "Enter miles: ";
    cin >> miles;
    cout << "Enter gallons: ";
    cin >> gallons;

    try{
        miles_per_gallon = calculate_mpg(miles,gallons);
        cout << "Result: " << miles_per_gallon << endl;
    }
    catch(int &ex){
        cout << "Sorry, can't divide by 0" << endl;
    }
    cout << endl;
    return 0;
}

double calculate_mpg(int miles, int gallons){
    if(gallons == 0){
        throw 0;
    }
    return static_cast<double>(miles) / gallons;
}
/** @} */