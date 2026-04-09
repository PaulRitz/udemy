/**
 * @file main.cpp
 * @brief showcase over the most basic data types in c++
 * @details showcase of the behavior and the usecases for different data types in
 */

/**
 * @addtogroup section06
 * @{
 * @defgroup s06_p04 PrimitiveTypes
 * @brief showcase over the most basic data types in c++
 * @details showcase of the behavior and the usecases for different data types in
 * c++.
 * @}
 */

 /**
  * @addtogroup s06_p04
  * @{
  */
#include <iostream>

using namespace std;

int main() {
    
    /* ##################
     * # Character type #
     * ##################
     */
    
    cout << "##################" << endl << "# Character type #" << endl << "##################" << endl << endl;

     /**
      * single quotes are used for single characters (chars)
      * 
      * double quotes are used for strings
      */


     char middle_initial {'J'}; // Single quotes are important!

     cout << "My middle initial is " << middle_initial << endl << endl << endl;

    /**
     * #################
     * # Integer types #
     * #################
     */

     cout << "#################" << endl << "# Integer types #" << endl << "#################" << endl << endl;

     unsigned short int exam_score {55};

     cout << "My exam score was " << exam_score << endl << endl;
    
     int countries_represented {65};
     cout << "There were " << countries_represented << " countries represented in my meeting" << endl << endl;
    
     long people_in_florida {20610000};
     cout << "There live " << people_in_florida << " people in florida." << endl << endl;

     long int people_on_earth {7'600'000'000};
     cout << "There live " << people_on_earth << " people on earth." << endl << endl;

     long long distance_to_alpha_centauri {9'461'000'000'000};
     cout << "The distance to alpha centauri is " << distance_to_alpha_centauri << " kilometres." << endl << endl;

     /**
      * ########################
      * # Floating point types #
      * ########################
      */
    cout << "########################" << endl << "# Floating point types #" << endl << "########################" << endl << endl;

    float car_payment {401.23};
    cout << "My car payment is " << car_payment << "." << endl << endl;

    double pi{3.14159};
    cout << "Pi is " << pi << endl << endl;

    long double large_amount {2.7e120};
    cout << large_amount << " is a very big number." << endl << endl;

    /**
     * ################
     * # Boolean type #
     * ################
     */
    cout << "################" << endl << "# Boolean type #" << endl << "################" << endl << endl;

    bool gameOver {false};
    cout << "The value of gameOver is " << gameOver << endl << endl;

    /**
     * ####################
     * # Overflow example #
     * ####################
     */
    cout << "####################" << endl << "# Overflow example #" << endl << "####################" << endl << endl;

    short value1 {30000};
    short value2 {1000};
    short product {value1 * value2};

    cout << "The product of " << value1 << " and " << value2 << " is " << product << endl << endl;

    return 0;
}
/** @} */