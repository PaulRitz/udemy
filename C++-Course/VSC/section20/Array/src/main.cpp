/**
 * @file main.cpp
 * @brief showcase of the std::array container/class/object
 */
/**
 * @addtogroup section20
 * @{
 * @defgroup s20_p06 Array
 * @brief showcase of the std::array container/class/object
 * @}
 */
/**
 * @addtogroup s20_p06
 * @{
 */

#ifndef FILES_IN_DIR
#define FILES_IN_DIR "files/in/"
#endif
#ifndef FILES_OUT_DIR
#define FILES_OUT_DIR "files/out/"
#endif

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <memory>
#include <fstream>
#include <numeric>
#include <array>
#include <algorithm>

const std::string input_file_path = std::string(FILES_IN_DIR);
const std::string output_file_path = std::string(FILES_OUT_DIR);

using namespace std;

void display(const std::array<int, 5> &arr){
    cout << "[ ";
    for(const auto i : arr){
        cout << i << " ";
    }
    cout << "]" << endl;
}

int main() {

    cout << "=======================" << endl;
    // Example 1

    array<int, 5> arr1{1,2,3,4,5};
    array<int, 5> arr2;

    display(arr1);
    display(arr2);

    arr2 = {10,20,30,40,50};

    cout << "--After change: " << endl;
    display(arr1);
    display(arr2);

    cout << "\n\nSize of arr1 is: " << arr1.size() << endl;
    cout << "Size of arr2 is: " << arr2.size() << endl;

    arr1[0] = 1000;
    arr1.at(1) = 2000;
    display(arr1);

    cout << "\n\nFront of arr2: " << arr2.front() << endl;
    cout << "Back of arr2: " << arr2.back() << endl;

    // Example 1
    cout << "=======================" << endl;
    // Example 2

    array<int, 5> arr3 {1,2,3,4,5};
    array<int, 5> arr4 {10,20,30,40,50};
    
    display(arr3);
    display(arr4);

    arr3.fill(0);

    cout << "\n\n--After filling (0): " << endl;
    display(arr3);
    display(arr4);

    arr3.swap(arr4);

    cout << "\n\n--After swap: " << endl;
    display(arr3);
    display(arr4);

    // Example 2
    cout << "=======================" << endl;
    // Example 3

    array<int, 5> arr5 {1,2,3,4,5};

    int* ptr = arr5.data();
    cout << ptr << endl;
    *ptr = 10000;

    display(arr5);

    // Example 3
    cout << "=======================" << endl;
    // Example 4

    array<int,5> arr6 {2,1,4,5,3};
    display(arr6);
    
    sort(arr6.begin(), arr6.end());
    display(arr6);
    
    // Example 4
    cout << "=======================" << endl;
    // Example 5
    
    array<int,5> arr7 {2,1,4,5,3};
    array<int,5>::iterator min_num = min_element(arr7.begin(), arr7.end());
    auto max_num = max_element(arr7.begin(), arr7.end());
    cout << "min: " << *min_num << " , max: " << *max_num << endl;
    display(arr7);

    // Example 5
    cout << "=======================" << endl;
    // Example 6

    array<int, 5> arr8 {2,1,3,3,5};

    auto adjacent = adjacent_find(arr8.begin(),arr8.end());
    if(adjacent != arr8.end()){
        cout << "Adjacent element found with value: " << *adjacent << endl;
    }else {
        cout << "No adjacent elements found" << endl;
    }

    // Example 6
    cout << "=======================" << endl;
    // Example 7

    array<int, 5> arr9 {1,2,3,4,5};

    int sum = accumulate(arr9.begin(), arr9.end(), 0);
    cout << "Sum of the elements in arr1 is: " << sum << endl;

    // Example 7
    cout << "=======================" << endl;
    // Example 8

    array<int, 10> arr10{1,2,3,1,2,3,3,3,3,3};

    int count = std::count(arr10.begin(), arr10.end(), 3);
    cout << "Found 3: " << count << " times" << endl;

    // Example 8
    cout << "=======================" << endl;
    // Example 9

    array<int, 10> arr11 {1,2,3,50,60,70,80,200,300,400};

    count = std::count_if(arr11.begin(),arr11.end(),
                                [](int x){return (x>10&&x<200);});
    cout << "Found " << count << " matches" << endl;

    // Example 9
    cout << "=======================" << endl;
    

    std::cout << std::endl;
    return 0;
}
/** @} */