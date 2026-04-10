/**
 * @file main.cpp
 * @brief showcase of returning a pointer from a function
 */

/**
 * @addtogroup section12
 * @{
 * @defgroup s12_p10 ReturnPointer
 * @brief showcase of returning a pointer from a function
 * @}
 */

/**
 * @addtogroup s12_p10
 * @{
 */
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int* create_array(size_t size, int init_value = 0);
void display(const int* const array, size_t size);

int main() {
    
    int *my_array {nullptr};
    size_t size {};
    int init_value {};
    
    cout << "\nHow many integers would you like to allocate? ";
    cin >> size;
    cout << "What value would you like them initialized to? ";
    cin >> init_value;
    
    my_array = create_array(size, init_value);
    cout << "\n------------------------------------------------------" << endl;
    
    display(my_array, size);
    delete []my_array;
    
    cout << endl;
    return 0;
}

int* create_array(size_t size, int init_value){
    int* new_storage {nullptr};
    new_storage = new int[size];
    for(size_t i {0}; i < size; i++){
        new_storage[i] = init_value;
    }
    return new_storage;
}

void display(const int* const array, size_t size){
    for(size_t i {0}; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}
/** @} */