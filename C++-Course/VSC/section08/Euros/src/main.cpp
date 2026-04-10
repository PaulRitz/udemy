/**
 * @file main.cpp
 * @brief converts euros to USD (at course from 10th april 2026)
 */

/**
 * @addtogroup section08
 * @{
 * @defgroup s08_p04 Euros
 * @brief converts euros to USD (at course from 10th april 2026)
 * @}
 */

/**
 * @addtogroup s08_p04
 * @{
 */
#include <iostream>

using namespace std;

int main() { // convert EUR to USD
    // 1 € = 1.16 USD

    const double usd_per_eur {1.17};
    double euros {0.0};
    double dollars {0.0};

    cout << "Welcome to the EUR to USD converter" << endl;
    cout << "Enter the value in EUR: ";
    cin >> euros;

    dollars = euros * usd_per_eur;

    cout << euros << " EUR is equivalent to " << dollars << " USD!" << endl;

    cout << endl;
    return 0;
}
/** @} */