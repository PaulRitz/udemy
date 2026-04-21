/**
 * @file main.cpp
 * @brief showcase of stl std::vector class/object
 */
/**
 * @addtogroup section20
 * @{
 * @defgroup s20_p07 Vector
 * @brief showcase of stl std::vector class/object
 * @}
 */
/**
 * @addtogroup s20_p07
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
    Person2() = default;
    Person2(string name, int age)
        :name{name},age{age} {}
    bool operator<(const Person2 &rhs) const {
        return this->age < rhs.age;
    }
    bool operator==(const Person2 &rhs) const {
        return (this->age == rhs.age && this->name == rhs.name);
    }
};

template <typename T>
void display(const vector<T> &vec){
    cout << "[ ";
    for(const auto &val : vec){
        cout << val << " ";
    }
    cout << "]" << endl;
}

void display2(const vector<int> &vec){
    cout << "[ ";
    for_each(vec.begin(), vec.end(),
                [](int x){cout << x << " ";});
    cout << "]" << endl;
}

int main() {

    cout << "=======================" << endl;
    // Example 1

    vector<int> vec1{1,2,3,4,5};
    display(vec1);

    vec1 = {2,4,5,6};
    display2(vec1);

    vector<int> vec2 (10, 100);
    display(vec2);

    // Example 1
    cout << "=======================" << endl;
    // Example 2

    vector<int> vec3 {1,2,3,4,5};
    display(vec3);
    cout << "\nvec3 size: " << vec3.size() << endl;
    cout << "vec3 max size: " << vec3.max_size() << endl;
    cout << "vec3 capacity: " << vec3.capacity() << endl;

    vec3.push_back(6);
    display(vec3);
    cout << "\nvec3 size: " << vec3.size() << endl;
    cout << "vec3 max size: " << vec3.max_size() << endl;
    cout << "vec3 capacity: " << vec3.capacity() << endl;

    vec3.shrink_to_fit();
    display(vec3);
    cout << "\nvec size: " << vec3.size() << endl;
    cout << "vec max size: " << vec3.max_size() << endl;
    cout << "vec capacity: " << vec3.capacity() << endl;

    vec3.reserve(100);
    display(vec3);
    cout << "\nvec size: " << vec3.size() << endl;
    cout << "vec max size: " << vec3.max_size() << endl;
    cout << "vec capacity: " << vec3.capacity() << endl;
    
    // Example 2
    cout << "=======================" << endl;
    // Example 3

    vector<int> vec4 {1,2,3,4,5};
    display(vec4);

    vec4[0] = 100;
    vec4.at(1) = 200;

    display(vec4);

    // Example 3
    cout << "=======================" << endl;
    // Example 4

    vector<Person2> stooges1;
    Person2 p1 {"Larry", 18};
    display(stooges1);

    stooges1.push_back(p1);
    display(stooges1);

    stooges1.push_back(Person2{"Moe", 25});
    display(stooges1);

    stooges1.emplace_back("Curly", 30);
    display(stooges1);

    // Example 4
    cout << "=======================" << endl;
    // Example 5

    vector<Person2> stooges2 {
        {"Larry", 18},
        {"Moe", 25},
        {"Curly", 30}
    };

    display(stooges2);
    cout << "\nFront: " << stooges2.front() << endl;
    cout << "Back: " << stooges2.back() << endl;

    stooges2.pop_back();
    display(stooges2);

    // Example 5
    cout << "=======================" << endl;
    // Example 6

    vector<int> vec5 {1,2,3,4,5};
    display(vec5);

    vec5.clear();
    display(vec5);

    vec5 = {1,2,3,4,5,6,7,8,9,10};
    display(vec5);
    vec5.erase(vec5.begin(),vec5.begin()+2);
    display(vec5);

    vec5 = {1,2,3,4,5,6,7,8,9,10};

    auto it1 = vec5.begin();
    while(it1 != vec5.end()){
        if(*it1%2 == 0){
            vec5.erase(it1);
        }else{
            it1++;
        }
    }
    display(vec5);

    // Example 6
    cout << "=======================" << endl;
    // Example 7

    vector<int> vec6 {1,2,3,4,5};
    vector<int> vec7 {10,20,30,40,50};

    display(vec6);
    display(vec7);
    cout << endl;

    vec7.swap(vec6);
    display(vec6);
    display(vec7);

    // Example 7
    cout << "=======================" << endl;
    // Example 8

    vector<int> vec8 {1,21,3,40,12};

    display(vec8);
    sort(vec8.begin(), vec8.end());
    display(vec8);

    // Example 8
    cout << "=======================" << endl;
    // Example 9

    vector<int> vec9 {1,2,3,4,5};
    vector<int> vec10 {10,20};

    display(vec9);
    display(vec10);
    cout << endl;

    copy(vec9.begin(), vec9.end(), back_inserter(vec10));
    display(vec9);
    display(vec10);
    cout << endl;

    vec9 = {1,2,3,4,5,6,7,8,9,10};
    vec10 = {10,20};

    display(vec9);
    display(vec10);
    cout << endl;

    copy_if(vec9.begin(), vec9.end(), back_inserter(vec10),
            [](int x){return x%2==0;});
    display(vec9);
    display(vec10);

    // Example 9
    cout << "=======================" << endl;
    // Example 10

    vector<int> vec11 {1,2,3,4,5};
    vector<int> vec12 {10,20,30,40,50};
    vector<int> vec13;

    display(vec11);
    display(vec12);
    display(vec13);

    cout << endl;

    transform(vec11.begin(), vec11.end(), vec12.begin(), 
                back_inserter(vec13),
                [](int x, int y){return x*y;});
    display(vec13);

    // Example 10
    cout << "=======================" << endl;
    // Example 11

    vector<int> vec14 {1,2,3,4,5,6,7,8,9,10};
    vector<int> vec15 {100,200,300,400};

    display(vec14);
    display(vec15);
    cout << endl;

    auto it2 = find(vec14.begin(), vec14.end(), 5);
    if(it2 != vec14.end()){
        cout << "inserting..." << endl;
        vec14.insert(it2, vec15.begin(),vec15.end());
    }else {
        cout << "Sorry, 5 not found" << endl;
    }

    display(vec14);
    display(vec15);

    // Example 11
    cout << "=======================" << endl;

    std::cout << std::endl;
    return 0;
}
/** @} */