/**
 * @file main.cpp
 * @brief showcase of logical operators in c++ and their usage
 */

/**
 * @addtogroup section08
 * @{
 * @defgroup s08_p06 LogicalOperators
 * @brief showcase of logical operators in c++ and their usage
 * @}
 */

/**
 * @addtogroup s08_p06
 * @{
 */
#include <iostream>

using namespace std;

int main() {
    int num {};
    const int lower {10};
    const int upper {20};
    bool within_bounds {false};
    bool outside_bounds {false};
    bool on_bounds {false};

    cout << boolalpha;
    
    cout << "================================" << endl << endl;
    // Example 1
    cout << "Enter an integer - the bounds are " << lower << " and " << upper << ": ";
    cin >> num;
    
    within_bounds = (num > lower && num < upper);
    cout << "The integer is in bounds: " << within_bounds << endl;
    // Example 1
    cout << "================================" << endl << endl;
    // Example 2

    cout << "Enter an integer - the bounds are: " << lower << " and " << upper << ": ";
    cin >> num;

    outside_bounds = (num < lower || num > upper);
    cout << num << " is outside " << lower << " and " << upper << ": " << outside_bounds << endl;

    // Example 2
    cout << "================================" << endl << endl;
    // Example 3

    cout << "Enter an integer - the bounds are: " << lower << " and " << upper << ": ";
    cin >> num;

    on_bounds = (num == lower || upper == num);
    cout << num << " is on " << lower << " or on " << upper << ": " << on_bounds << endl;
    // Example 3
    cout << "================================" << endl << endl;
    // Example 4

    bool wear_coat {false};
    double temperature {};
    int wind_speed {};

    const int wind_speed_for_coat {25};     // wind speed > var => coat needed
    const double temperature_for_coat{45};  // temperature < var => coat needed

    cout << "Enter the current temperature in (F): ";
    cin >> temperature;
    cout << "Enter the current wind speed in (km/h): ";
    cin >> wind_speed;

    
    wear_coat = (temperature < temperature_for_coat || wind_speed > wind_speed_for_coat);
    cout << " You should wear a coat (using OR): " << wear_coat << endl;
    
    wear_coat = (temperature < temperature_for_coat && wind_speed > wind_speed_for_coat);
    cout << " You should wear a coat (using AND): " << wear_coat << endl;
    // Example 4
    cout << "================================" << endl << endl;
    
    
    cout << endl;
    return 0;
}
/** @} */