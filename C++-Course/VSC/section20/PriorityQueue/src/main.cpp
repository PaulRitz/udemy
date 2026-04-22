/**
 * @file main.cpp
 * @brief showcase of the stl priority queue container
 */
/**
 * @addtogroup section20
 * @{
 * @defgroup s20_p14 PriorityQueue
 * @brief showcase of the stl priority queue container
 * @}
 */
/**
 * @addtogroup s20_p14
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

class Person4 {
    friend ostream &operator<<(ostream &out, const Person4 &source){
        out << source.name << ": " << source.age;
        return out;
    }
private:
    string name;
    int age;
public:
    Person4()
        :name{"Unknown"},age{0} {}
    Person4(string name, int age)
        :name{name}, age{age} {}
    bool operator<(const Person4 &rhs)const{
        return this->age<rhs.age;
        // return this->name<rhs.name;
    }
    bool operator==(const Person4 &rhs)const{
        return (this->name==rhs.name&&this->age==rhs.age);
    }
};

template<typename T>
void display(priority_queue<T> pq){
    cout << "[ ";
    while(!pq.empty()){
        T val = pq.top();
        pq.pop();
        cout << val << " ";
    }
    cout << "]" << endl;
}

int main() {

    cout << "====================" << endl;
    // Example 1

    priority_queue<int> pq;     // always sorted from largest to smallest
    for(int i : {3,5,7,12,23,12,4,100,0,3,5,7}){
        pq.push(i);
    }

    cout << "Size: " << pq.size() << endl;
    cout << "Top: " << pq.top() << endl;

    display(pq);

    pq.pop();
    display(pq);

    // Example 1
    cout << "====================" << endl;
    // Example 2

    priority_queue<Person4> qp;
    qp.push(Person4{"A",10});
    qp.push(Person4{"B",1});
    qp.push(Person4{"C",14});
    qp.push(Person4{"D",18});
    qp.push(Person4{"E",7});
    qp.push(Person4{"F",27});

    display(qp);

    // Example 2
    cout << "====================" << endl;

    std::cout << std::endl;
    return 0;
}
/** @} */