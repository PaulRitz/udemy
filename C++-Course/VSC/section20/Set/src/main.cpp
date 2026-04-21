/**
 * @file main.cpp
 * @brief showcase of the stl set container
 */
/**
 * @addtogroup section20
 * @{
 * @defgroup s20_p10
 * @brief showcase of the stl set container
 * @}
 */
/**
 * @addtogroup s20_p10
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
#include <set>

const std::string input_file_path = std::string(FILES_IN_DIR);
const std::string output_file_path = std::string(FILES_OUT_DIR);

using namespace std;

class Person3 {
    friend ostream &operator<<(ostream &out, const Person3 &source){
        out << source.name << ": " << source.age;
        return out;
    }
private:
    string name;
    int age;
public:
    Person3()
        :name{"Unknown"},age{0} {}
    Person3(string name, int age)
        :name{name}, age{age} {}
    bool operator<(const Person3 &rhs)const{
        return this->age<rhs.age;
    }
    bool operator==(const Person3 &rhs)const{
        return (this->name==rhs.name&&this->age==rhs.age);
    }
};

template<typename T>
void display(set<T> &source){
    cout << "[ ";
    for(const auto &val : source){
        cout << val << " ";
    }
    cout << "]" << endl;
}
int main() {

    cout << "======================" << endl;
    // Example 1

    set<int> s1{1,4,3,5,2};         // sets are always displayed in sorted order
    display(s1);

    s1 = {1,2,3,1,1,2,2,3,3,4,5};
    display(s1);                    // sets do not allow duplicates

    s1.insert(0);
    s1.insert(10);

    display(s1);

    if(s1.count(10)){
        cout << "10 is int the set" << endl;
    } else{
        cout << "10 is not in the set" << endl;
    }

    auto it = s1.find(5);
    if(it != s1.end()){
        cout << "Found: " << *it << endl;
    }

    s1.clear();
    display(s1);

    // Example 1
    cout << "======================" << endl;
    // Example 2

    set<Person3> stooges {
        {"Larry", 1},
        {"Moe", 2},
        {"Curly", 3}
    };
    display(stooges);

    stooges.emplace("James", 50);
    display(stooges);

    auto it = stooges.find(Person3{"Moe",2});
    if(it != stooges.end()){
        stooges.erase(it);
    }

    display(stooges);

    it = stooges.find(Person3("XXXX",50));

    if(it != stooges.end()){
        stooges.erase(it);
    }
    display(stooges);

    // Example 2
    cout << "======================" << endl;

    std::cout << std::endl;
    return 0;
}
/** @} */