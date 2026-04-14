/**
 * @file main.cpp
 * @brief programming exercise 05: practice using functions
 */

/**
 * @addtogroup section11
 * @{
 * @defgroup s11_pe05 ProgrammingExercise05
 * @brief programming exercise 05: practice using functions
 * @}
 */

/**
 * @ingroup PEs
 * @addtogroup s11_pe05
 * @{
 */
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <typeinfo>

using namespace std;

string print_guest_list(const string arr[], const size_t size);
void clear_guest_list(string arr[], size_t size);

int main() {
    string guest_list[] {"Larry", "Moe", "Curly"};
    size_t guest_list_size {3};
    
    print_guest_list(guest_list, guest_list_size);
    cout << ".\n";
    clear_guest_list(guest_list, guest_list_size);
    print_guest_list(guest_list, guest_list_size);
    cout << ".\n";

    cout << endl;
    return 0;
}

string print_guest_list(const string arr[], const size_t size){
    for(size_t i {}; i < size; i++){
        cout << arr[i] << endl;
    }
    return typeid(arr).name();
}

void clear_guest_list(string arr[], size_t size){
    for(size_t i {}; i < size; i++){
        arr[i] = " ";
    }
}
/** @} */