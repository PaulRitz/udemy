/**
 * @file main.cpp
 * @brief a program that prints a histogram with help of for loops
 */

/**
 * @addtogroup section09
 * @{
 * @defgroup s09_p05 Histogram
 * @brief a program that prints a histogram with help of for loops
 * @}
 */

/**
 * @addtogroup s09_p05
 * @{
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {

    int num_items {};
    vector <int> data_items {};

    cout << "How many data items do you have? ";
    cin >> num_items;

    for(int i{1}; i <= num_items; i++){
        int data_item{};
        cout << "Enter data item [int] " << i << ": ";
        cin >> data_item;
        data_items.push_back(data_item);
    }

    cout << "\n==========================" << endl;
    cout << "Entered items:" << endl;
    for(auto t : data_items){
        cout << t << endl;
    }
    cout << "==========================" << endl;
    cout << "Displaying Histogram:" << endl;
    for(auto t : data_items){
        for(int i{1}; i <= t; i++){
            if(i%5==0){
                cout << "*";
            }
            else{
            cout << "-";
            }
        }
        cout << endl;
    }
    cout << "\n==========================" << endl;
    cout << endl;
    return 0;
}
/** @} */