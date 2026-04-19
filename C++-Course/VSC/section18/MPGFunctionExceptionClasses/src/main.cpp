/**
 * @file main.cpp
 * @brief showcase of using classes as exception types for the exception handlers
 */
/**
 * @addtogroup section18 
 * @{
 * @defgroup s18_p06 MPGFunctionExceptionClasses
 * @brief showcase of using classes as exception types for the exception handlers
 * @}
 */
/**
 * @addtogroup s18_p06
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <memory>

using namespace std;

#include "../include/exceptions0.h"

double calculate_mpg(int miles, int gallons);

int main() {
    
    int miles{};
    int gallons{};
    int miles_per_gallon{};

    cout << "Enter the miles driven: ";
    cin >> miles;
    cout << "Enter the gallons used: ";
    cin >> gallons;
    
    try {
        miles_per_gallon = calculate_mpg(miles, gallons);
        cout << "Result: " << miles_per_gallon << endl;
    }
    catch(const DivideByZeroException &ex){
        cerr << "Sorry, can't divide by 0!" << endl;
    }
    catch(const NegativeValueException &ex){
        cerr << "Sorry, can't use negative values!" << endl;
    }
    catch(...){
        cerr << "Sorry, unknown exception!" << endl;
    }

    cout << "Bye!" << endl;

    cout << endl;
    return 0;
}

double calculate_mpg(int miles, int gallons) {
    if(gallons == 0){
        throw DivideByZeroException();
    }
    if(miles < 0 || gallons < 0){
        throw NegativeValueException();
    }
    return static_cast<double>(miles)/gallons;
}

/** @} */