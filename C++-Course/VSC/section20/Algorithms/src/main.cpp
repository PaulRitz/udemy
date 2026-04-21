/**
 * @file main.cpp
 * @brief showcase of generic algorithms with use of lambda functions
 */
/**
 * @addtogroup section20
 * @{
 * @defgroup s20_p05 Algortithms
 * @brief showcase of generic algorithms with use of lambda functions
 * @}
 */
/**
 * @addtogroup s20_p05
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
#include <list>
#include <cctype>
#include <algorithm>

const std::string input_file_path = std::string(FILES_IN_DIR);
const std::string output_file_path = std::string(FILES_OUT_DIR);

using namespace std;

class Person1 {
    string name;
    int age;
public:
    Person1() = default;
    Person1(string name , int age)
        :name{name},age{age} {}
    bool operator<(const Person1 &rhs) const{
        return this->age < rhs.age;
    }
    bool operator==(const Person1 &rhs) const {
        return (this->name == rhs.name && this->age == rhs.age);
    }
};

int main() {
    cout << "=====================" << endl;
    // Example 1

    vector<int> vec1 {1,2,3,4,5};
    auto loc1 = find(begin(vec1), vec1.end(), 7);

    if(loc1 != end(vec1)){
        cout << "found the number: " << *loc1 << endl;
    }else {
        cout << "Couldn't find the number" << endl;
    }

    // Example 1
    cout << "=====================" << endl;
    // Example 2

    list<Person1> players {
        {"Larry",18},
        {"Moe", 20},
        {"Curly", 21}
    };

    auto loc2 = find(players.begin(), players.end(), Person1{"Moe",20});
    if(loc2 != players.end()){
        cout << "Found Moe" << endl;
    }else {
        cout << "Moe not found" << endl;
    }

    // Example 2
    cout << "=====================" << endl;
    // Example 3

    vector<int> vec2 {1,2,3,4,5,1,2,1};
    int num = count(vec2.begin(), vec2.end(), 1);
    cout << num << " occurences found" << endl;

    // Example 3
    cout << "=====================" << endl;
    // Example 4

    vector<int> vec3{1,2,3,4,5,1,2,1,100};
    num = count_if(vec3.begin(),vec3.end(),[](int x){return x%2==0;});

    cout << num << " even numbers found" << endl;

    num = count_if(vec3.begin(),vec3.end(),[](int x){return x%2!=0;});

    cout << num << " uneven numbers found" << endl;
    
    num = count_if(vec3.begin(),vec3.end(), [](int x){return x>=5;});
    
    cout << num << " numbers found that are greater or equal than 5" << endl;

    // Example 4
    cout << "=====================" << endl;
    // Exampl 5

    vector<int> vec4 {1,2,3,4,5,1,2,1};
    for(auto i : vec4){
        cout << i << " ";
    }
    cout << endl;

    replace(vec4.begin(), vec4.end(), 1, 100);
    for(auto i : vec4){
        cout << i << " ";
    }
    cout << endl;

    // Exampl 5
    cout << "=====================" << endl;
    // Example 6

    vector<int> vec5{1,3,5,7,9,1,3,13,19,5};
    if(all_of(vec5.begin(),vec5.end(),[](int x){return x>10;})){
        cout << "All the elements are > 10" << endl;
    } else{
        cout << "Not all the elements are > 10" << endl;
    }

    if(all_of(vec5.begin(), vec5.end(), [](int x){return x<20;})){
        cout << "All the elements are < 20" << endl;
    } else {
        cout << "Not all the elements are < 20" << endl;
    }

    // Example 6
    cout << "=====================" << endl;
    // Example 7

    string str1 {"This is a test"};
    cout << "Before transform: " << str1 << endl;
    transform(str1.begin(),str1.end(),str1.begin(),::toupper);
    cout << "After transform: " << str1 << endl;

    // Example 7
    cout << "=====================" << endl;

    std::cout << std::endl;
    return 0;
}
/** @} */