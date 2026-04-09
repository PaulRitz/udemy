/**
 * @file main.cpp
 * @details The goal of this programming exercise is to calculate different bills for
 * splitting the bill among a group of guests
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