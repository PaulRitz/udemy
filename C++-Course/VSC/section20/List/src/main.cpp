/**
 * @file main.cpp
 * @brief showcase of the stl List container
 */
/**
 * @addtogroup section20
 * @{
 * @defgroup s20_p09 List
 * @brief showcase of the stl List container
 * @}
 */
/**
 * @addtogroup s20_p09
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
#include <list>
#include <iterator>

const std::string input_file_path = std::string(FILES_IN_DIR);
const std::string output_file_path = std::string(FILES_OUT_DIR);

using namespace std;

class Person2 {
    friend ostream &operator<<(ostream &out, const Person2 &source){
        out << source.name << ": " << source.age;
        return out;
    }
private:
    string name;
    int age;
public:
    Person2()
        :name{"Unknown"},age{0} {}
    Person2(string name, int age)
        :name{name}, age{age} {}
    bool operator<(const Person2 &rhs){
        return this->age<rhs.age;
    }
    bool operator==(const Person2 &rhs){
        return (this->name==rhs.name&&this->age==rhs.age);
    }
};

template<typename T>
void display(list<T> &source){
    cout << "[ ";
    for(const auto &val : source){
        cout << val << " ";
    }
    cout << "]" << endl;
}

int main() {

    cout << "===========================" << endl;
    // Example 1

    list<int> l1 {1,2,3,4,5};
    display(l1);

    list<string> l2;
    l2.push_back("Back");
    l2.push_front("Front");
    display(l2);

    list<int> l3;
    l3 = {1,2,3,4,5,6,7,8,9,10};
    display(l3);

    list<int> l4 (10, 100);
    display(l4);

    // Example 1
    cout << "===========================" << endl;
    // Example 2

    list<int> l5 {1,2,3,4,5,6,7,8,9,10};
    display(l5);
    cout << "Size: " << l5.size() << endl;

    cout << "Front: " << l5.front() << endl;
    cout << "Back: " << l5.back() << endl;

    l5.clear();
    display(l5);
    cout << "Size: " << l5.size() << endl;

    // Example 2
    cout << "===========================" << endl;
    // Example 3

    list<int> l6 {1,2,3,4,5,6,7,8,9,10};
    display(l6);

    l6.resize(5);
    display(l6);

    l6.resize(10);
    display(l6);

    list<Person2> persons;
    persons.resize(5);      // using Person2s default constructor
    display(persons);

    // Example 3
    cout << "===========================" << endl;
    // Example 4

    list<int> l7 {1,2,3,4,5,6,7,8,9,10};
    display(l7);
    auto it1 = find(l7.begin(),l7.end(),5);
    if(it1 != l7.end()){
        l7.insert(it1, 100);
    }
    display(l7);

    list<int> l8{1000,2000,3000};
    l8.insert(it1,l8.begin(),l8.end());
    display(l7);

    advance(it1, -4);
    cout << *it1 << endl;

    l7.erase(it1);
    display(l7);

    // Example 4
    cout << "===========================" << endl;
    // Example 5

    list<Person2> stooges {
        {"Larry", 18},
        {"Moe", 25},
        {"Curly", 17}
    };

    display(stooges);
    string name {"James"};
    int age {50};
    cout << "\nEnter the name of the next stooge: " << name << endl;
    // getline(cin,name);
    cout << "Enter their age: " << age << endl;
    // cin >> age;

    stooges.emplace_back(name, age);
    display(stooges);

    auto it2 = find(stooges.begin(), stooges.end(), Person2{"Moe",25});
    if(it2 != stooges.end()){
        stooges.emplace(it2, "Frank", 28);
    }
    display(stooges);


    // Example 5
    cout << "===========================" << endl;
    // Example 6

    list<Person2> stooges2{
        {"Larry", 18},
        {"Moe", 25},
        {"Curly", 17}
    };

    display(stooges2);
    stooges2.sort();
    display(stooges2);

    // Example 6
    cout << "===========================" << endl;
    

    std::cout << std::endl;
    return 0;
}
/** @} */