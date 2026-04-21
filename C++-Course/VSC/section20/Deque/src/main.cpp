/**
 * @file main.cpp
 * @brief showcase of the deque container
 */
/**
 * @addtogroup section20
 * @{
 * @defgroup s20_p08 Deque
 * @brief showcase of the deque container
 * @}
 */
/**
 * @addtogroup s20_p08
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
#include <algorithm>
#include <deque>

const std::string input_file_path = std::string(FILES_IN_DIR);
const std::string output_file_path = std::string(FILES_OUT_DIR);

using namespace std;

template<typename T>
void display(const deque<T> &source){
    cout << "[ ";
    for(const auto val : source){
        cout << val << " ";
    }
    cout << "]" << endl;
}

int main() {

    cout << "=======================" << endl;
    // Example 1

    deque<int> d1 {1,2,3,4,5};
    display(d1);

    d1 = {2,4,5,6};
    display(d1);

    deque<int> d2 (10,100);
    display(d2);

    d1[0] = 100;
    d1.at(1) = 200;
    display(d1);

    // Example 1
    cout << "=======================" << endl;
    // Example 2

    deque<int> d3 {0,0,0};
    display(d3);

    d3.push_back(10);
    d3.push_back(20);
    display(d3);

    d3.push_front(100);
    d3.push_front(200);
    display(d3);

    cout << "Front: " << d3.front() << endl;
    cout << "Back: " << d3.back() << endl;
    cout << "Size: " << d3.size() << endl;

    d3.pop_back();
    d3.pop_front();
    display(d3);

    // Example 2
    cout << "=======================" << endl;
    // Example 3

    vector<int> vec1 {1,2,3,4,5,6,7,8,9,10};
    deque<int> d4;

    for(const auto &val : vec1){
        if(val%2==0){
            d4.push_back(val);
        }else {
            d4.push_front(val);
        }
    }

    display(d4);

    // Example 3
    cout << "=======================" << endl;
    // Example 4

    vector<int> vec2 {1,2,3,4,5,6,7,8,9,10};
    deque<int> d5;

    for(const auto &val : vec2){
        d5.push_front(val);
    }
    display(d5);

    d5.clear();

    for(const auto &val : vec2){
        d5.push_back(val);
    }
    display(d5);

    // Example 4
    cout << "=======================" << endl;
    // Example 5

    vector<int> vec3 {1,2,3,4,5,6,7,8,9,10};
    deque<int> d6;
    
    copy(vec3.begin(), vec3.end(), front_inserter(d6));
    display(d6);
    
    d6.clear();
    
    copy(vec3.begin(), vec3.end(), back_inserter(d6));
    display(d6);

    // Example 5
    cout << "=======================" << endl;

    std::cout << std::endl;
    return 0;
}
/** @} */