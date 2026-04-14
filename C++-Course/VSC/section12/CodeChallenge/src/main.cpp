/**
 * @file main.cpp
 * @details Write a C++ function named apply_all that expects two arrays of integers and their sizes 
 * and dynamically allocates a new array of integers whose size is the product of the 2 array sizes
 * 
 * The function should loop through the second array and multiply each element accross each element of array 1 and store the 
 * product in the newly created array.
 * 
 * The function should return a pointer to the newly allocated array.
 * 
 * You can also write a print function that expects a pointer to an array of integers and its size and display the
 * elements in the array.
 * 
 * For example,
 * 
 * Below is the output from the following code which would be in main:
 * int array1[]{1,2,3,4,5};
 * int array2[]{10,20,30};
 * 
 * cout << "Array 1: ";
 * print(array1,5);
 * 
 * cout << "Array 2: ";
 * print(array2,3);
 * 
 * int* results = apply_all(array1, 5, array2, 3);
 * cout << "Result: ";
 * print(results, 15);
 */

/**
 * @addtogroup section12
 * @{
 * @defgroup s12_cc CodeChallenge
 * @details Write a C++ function named apply_all that expects two arrays of integers and their sizes 
 * and dynamically allocates a new array of integers whose size is the product of the 2 array sizes
 * 
 * The function should loop through the second array and multiply each element accross each element of array 1 and store the 
 * product in the newly created array.
 * 
 * The function should return a pointer to the newly allocated array.
 * 
 * You can also write a print function that expects a pointer to an array of integers and its size and display the
 * elements in the array.
 * 
 * For example,
 * 
 * Below is the output from the following code which would be in main:
 * int array1[]{1,2,3,4,5};
 * int array2[]{10,20,30};
 * 
 * cout << "Array 1: ";
 * print(array1,5);
 * 
 * cout << "Array 2: ";
 * print(array2,3);
 * 
 * int* results = apply_all(array1, 5, array2, 3);
 * cout << "Result: ";
 * print(results, 15);
 * @}
 */

/**
 * @ingroup CCs
 * @addtogroup s12_cc
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

void print_arr(int* arr, int size);
int* apply_all(int* arr1, int size1, int* arr2, int size2);

int main() {
    
    int array1[]{1,2,3,4,5};
    int array2[]{10,20,30};
    
    cout << "Array 1: ";
    print_arr(array1, 5);
    
    cout << "Array 2: ";
    print_arr(array2, 3);
    
    int* results = apply_all(array1, 5, array2, 3);
    cout << "Result: ";
    print_arr(results, 15);
 
    cout << endl;
    return 0;
}

void print_arr(int* arr, int size){
    for(int i {}; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int* apply_all(int* arr1, int size1, int* arr2, int size2){
    int* ret = new int [size1*size2];
    int index {};
    for( int i {}; i < size2; i++){
        for( int j {}; j < size1; j++){
            ret[index] = arr2[i] * arr1[j];
            index++;
        }
    }
    return ret;
}
/** @} */