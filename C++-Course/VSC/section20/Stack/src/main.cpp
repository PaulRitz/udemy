/**
 * @file main.cpp
 * @brief showcase of the stl stack container
 */
/**
 * @addtogroup section20
 * @{
 * @defgroup s20_p12 Stack
 * @brief showcase of the stl stack container
 * @}
 */
/**
 * @addtogroup s20_p12
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
#include <stack>
#include <list>

const std::string input_file_path = std::string(FILES_IN_DIR);
const std::string output_file_path = std::string(FILES_OUT_DIR);

using namespace std;

template<typename T>
void display(stack<T> s){
    cout << "[ ";
    while(!s.empty()){
        T val = s.top();
        s.pop();
        cout << val << " ";
    }
    cout << "]" << endl;
}

int main() {

    stack<int> s1;
    stack<int,vector<int>> s2;
    stack<int,list<int>> s3;

    for(int i : {1,2,3,4,5}){
        s1.push(i);
    }
    display(s1);

    s1.push(100);
    display(s1);

    s1.pop();
    s1.pop();
    display(s1);

    while(!s1.empty()){
        s1.pop();
    }
    display(s1);

    cout << "Size: " << s1.size() << endl;

    s1.push(10);
    display(s1);

    s1.top() = 100;
    display(s1);

    std::cout << std::endl;
    return 0;
}
/** @} */