/**
 * Frank's Carpet Cleaning Service
 * 
 * Charges:
 *  $25 per small room
 *  $35 per large room
 * Sales tax rate is 6% -> 0.06
 * Estimates are valid for 30 days
 * 
 * Prompt the user for the number of small and large rooms they would like
 * cleaned  and provide an estimate. 
 * 
 */


#include <iostream>

using namespace std;

int main() {

    const int estimate_expiry {30}; // days
    const double tax {0.06}; // 6%
    const double price_small_room {25}; // $
    const double price_large_room {35}; // $

    int number_large_rooms {0};
    int number_small_rooms {0};

    cout << "Welcome at Frank's Carpet-Cleaning-Service." << endl;
    
    cout << "How many small rooms have to be cleaned? ";
    cin >> number_small_rooms;

    cout << "\nHow many large rooms have to be cleaned? ";
    cin >> number_large_rooms;

    double price = (price_large_room * number_large_rooms) + (price_small_room * number_small_rooms);

    cout << "==============================" << endl;
    cout << "Estimate for carpet cleaning service: " << endl;
    cout << "Number of large rooms: " << number_large_rooms << endl;
    cout << "Number of small rooms: " << number_small_rooms << endl;
    cout << "Price per large room: " << price_large_room << endl;
    cout << "Price per small room: " << price_small_room << endl;
    cout << "Cost: $" << price << endl; 
    cout << "Tax: $" << price * tax << endl;
    cout << "==============================" << endl;
    cout << "Total estimate: $" << price + (price * tax) << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days." << endl;

    cout << endl;
    return 0;
}