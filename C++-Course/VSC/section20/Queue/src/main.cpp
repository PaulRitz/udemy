/**
 * @file main.cpp
 * @brief showcase of the stl queue container
 */
/**
 * @addtogroup section20
 * @{
 * @defgroup s20_p13
 * @brief showcase of the stl queue container
 * @}
 */
/**
 * @addtogroup s20_p13
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
#include <queue>

const std::string input_file_path = std::string(FILES_IN_DIR);
const std::string output_file_path = std::string(FILES_OUT_DIR);

using namespace std;

template<typename T>
void display(queue<T> q){
    cout << "[ ";
    while(!q.empty()){
        T val = q.front();
        q.pop();
        cout << val << " ";
    }
    cout << "]" << endl;
}

int main() {

    queue<int> q;

    for(int i : {1,2,3,4,5}){
        q.push(i);
    }
    display(q);

    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;

    q.push(100);
    display(q);

    q.pop();
    q.pop();
    display(q);

    while(!q.empty()){
        q.pop();
    }
    display(q);
    cout << "Size: " << q.size() << endl;

    q.push(10);
    q.push(100);
    q.push(1000);
    display(q);

    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;

    q.front() = 5;
    q.back() = 5000;

    display(q);
    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;
    

    std::cout << std::endl;
    return 0;
}
/** @} */