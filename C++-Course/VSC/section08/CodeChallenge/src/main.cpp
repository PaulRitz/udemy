#include <iostream>
/**
 * @file main.cpp
 * @brief Change calculator (for american currency)
 * @details Change calculator
 * 1 dollar => 100 cents
 * 1 quarter => 25 cents
 * 1 dime => 10 cents
 * 1 nickel => 5 cents
 * 1 penny => 1 cent
 */

/**
 * @addtogroup section08
 * @{
 * @defgroup s08_cc CodeChallenge
 * @brief Change calculator (for american currency)
 * @details Change calculator
 * 1 dollar => 100 cents
 * 1 quarter => 25 cents
 * 1 dime => 10 cents
 * 1 nickel => 5 cents
 * 1 penny => 1 cent
 * @}
 */

/**
 * @addtogroup s08_cc
 * @{
 */
using namespace std;

int main() {

    int input {}, _input{}, balance{};
    int dollars {}, quarters {}, dimes {}, nickels {}, pennies {};

    cout << "Enter an amount in cents: ";
    cin >> input;
    _input = input;
    // Step 1: check for dollars:
        dollars = input / 100;
        input -= 100*dollars;
    // Step 2: check for quarters
        quarters = input / 25;
        input -= quarters * 25;
    // Step 3: check for dimes
    // if(input >= 10){
        dimes = input / 10;
        input -= dimes*10;
    //Step 4: check for nickels
        nickels = input / 5;
        input -= nickels * 5;
    // Step 5: rest equals pennies
    pennies = input;

    cout << "\nYou can provide this change as follows: " << endl;
    cout << "dollars:   " << dollars << endl;
    cout << "quarters:  " << quarters << endl;
    cout << "dimes:     " << dimes << endl;
    cout << "nickels:   " << nickels << endl;
    cout << "pennies:   " << pennies << endl;

    dollars = quarters = dimes = nickels = pennies = 0;

    // Step 1: check for dollars:
        dollars = _input / 100;
        _input %= 100;
    // Step 2: check for quarters
        quarters = _input / 25;
        _input %= 25;
    // Step 3: check for dimes
        dimes = _input / 10;
        _input %= 10;
    //Step 4: check for nickels
        nickels = _input / 5;
        _input %= 5;
    // Step 5: rest equals pennies
    pennies = _input;

    cout << "\nYou can provide this change as follows: " << endl;
    cout << "dollars:   " << dollars << endl;
    cout << "quarters:  " << quarters << endl;
    cout << "dimes:     " << dimes << endl;
    cout << "nickels:   " << nickels << endl;
    cout << "pennies:   " << pennies << endl;


    return 0;
}
/** @} */