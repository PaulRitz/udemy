/**
 * @file main.cpp
 * @brief programming exercise 01: practice using functions in c++
 * @details The goal of this programming exercise is to calculate different bills for
 * splitting the bill among a group of guests
 */

/**
 * @addtogroup section11 
 * @{
 * @defgroup s11_pe01 ProgrammingExercise01
 * @brief programming exercise 01: practice using functions in c++
 * @details The goal of this programming exercise is to calculate different bills for
 * splitting the bill among a group of guests
 * @}
 */

/**
 * @ingroup PEs
 * @addtogroup s11_pe01
 * @{
 */

#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int main() {

    double bill_total {102.78};
    int number_of_guests {5};
    
    double individual_bill{(bill_total/static_cast<double>(number_of_guests))};
    
    double individual_bill_1{floor(individual_bill)};
    double individual_bill_2{round(individual_bill)};
    double individual_bill_3{(ceil((individual_bill*100))/100)};

    cout << individual_bill << endl;
    cout << individual_bill_1 << endl;
    cout << individual_bill_2 << endl;
    cout << individual_bill_3 << endl;
    



    cout << endl;
    return 0;
}
/** @} */