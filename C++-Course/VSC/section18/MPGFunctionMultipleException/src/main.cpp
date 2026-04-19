/**
 * @file main.cpp
 * @brief showcase of exception handling for multiple exceptions 
 */
/**
 * @addtogroup
 * @{
 * @defgroup s18_p04
 * @brief showcase of exception handling for multiple exceptions 
 * @}
 */
/**
 * @addtogroup s18_p04
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

    cout << "Enter the miles: ";
    cin >> miles;
    cout << "Enter the gallons: ";
    cin >> gallons;

    try{
        miles_per_gallon = calculate_mpg(miles,gallons);
        cout << "Result: " << miles_per_gallon << endl;
    }
    catch(int &ex){
        cerr << "Sorry, can't divide by 0" << endl;
    }
    catch(string &ex){
        cerr << "Sorry, can't use negative numbers" << endl;
    }
    catch(...){
        cerr << "Sorry, unknown exception" << endl;
    }

    cout << "Bye!" << endl;
    
    cout << endl;
    return 0;
}

double calculate_mpg(int miles, int gallons){
    if(gallons < 0 || miles < 0){
        throw string{"negative value err"};
    }
    if(gallons == 0){
        throw 0;
    }
    return static_cast<double>(miles)/gallons;
}

/** @} */