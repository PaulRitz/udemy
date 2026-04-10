/**
 * @file main.cpp
 * @brief programming exercise 02: practice using pointers
 */

/**
 * @addtogroup section12
 * @{
 * @defgroup s12_pe02 ProgrammingExercise02
 * @brief programming exercise 02: practice using pointers
 * @}
 */

/**
 * @addtogroup s12_pe02
 * @{
 */
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

void multiply_with_pointer(int* ptr, int multiplier);
int find_max_element(int* arr, int size);
void reverse_array(int* arr, int size);
string reverse_string(const string& str);

int main() {

    // Task 1
    {
        int a = 100;
        multiply_with_pointer(&a, 100);
        cout << a << endl;
    }
    // Task 1

    // Task 2 -- finding the max element of an array
    {
        int arr[] = {12, 45, 67, 23, 9};
        int size = sizeof(arr) / sizeof(arr[0]);
        
        int maxElement = find_max_element(arr, size);
        cout << "\nMax Element: " << maxElement << endl;
    }
    // Task 2 -- finding the max element of an array
    
    // Task 3 -- reversing an array
    {
        int arr[] = {1,2,3,4,5};
        int size = sizeof(arr) / sizeof(arr[0]);
        for(auto val : arr){
            cout << val << " ";
        }
        cout << endl;

        reverse_array(arr, size);
        
        for(auto val : arr){
            cout << val << " ";
        }
        cout << endl;
    }
    // Task 3 -- reversing an array

    // Task 4 -- reversing std::string
    string input = "Hello, World!";
    cout << endl << input << endl;

    string output {reverse_string(input)};

    cout << endl << output << endl;


    // Task 4 -- reversing std::string
    
    cout << endl;
    return 0;
}

void multiply_with_pointer(int* ptr, int multiplier){

    *ptr *= multiplier;

}

int find_max_element(int* arr, int size){
    int max = arr[0];
    for(int i {1}; i < size; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

void reverse_array(int* arr, int size){
    int tmp {};
    for(int i {0}; i < size/2; i++){
        tmp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i]=tmp;
    }
}

string reverse_string(const string &str){
    string result {};
    if(str.empty()){
        return "";
    }
    for( int i {str.size()-1}; i >= 0; i--){
        result.push_back(str.at(i));
    }
    return result;
}
/** @} */