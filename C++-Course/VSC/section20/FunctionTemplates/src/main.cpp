/**
 * @file main.cpp
 * @brief showcase of function templates, using pre-processor statements
 */
/**
 * @defgroup section20  Section 20: Standard Template Library
 * @brief showcase and introduction to c++ generic programming and the standard template library
 */
/**
 * @addtogroup section20
 * @{
 * @defgroup s20_p01 FunctionTemplates
 * @brief showcase of function templates, using pre-processor statements
 * @}
 */
/**
 * @addtogroup s20_p01
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

const std::string input_file_path = std::string(FILES_IN_DIR);
const std::string output_file_path = std::string(FILES_OUT_DIR);

template <typename T>
T min(T a, T b){
    return (a<b)?a:b;
}
template <typename T1, typename T2>
void func(T1 a, T2 b){
    std::cout << a << ", " << b << std::endl;
}
template <typename T>
void swap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

struct Person {
    std::string name;
    int age;
    bool operator<(const Person &rhs) const{
        return this->age < rhs.age;
    }
};

std::ostream &operator<<(std::ostream &out, const Person &source){
    out << source.name << ": " << source.age;
    return out;
}
// using namespace std;


int main() {

    std::cout << "==============================" << std::endl;
    // Example 1
    
    std::cout << min<int>(2,3) << std::endl;
    std::cout << min(2,3) << std::endl;
    std::cout << min('A','B') << std::endl;
    std::cout << min(12.5,9.2) << std::endl;
    std::cout << min(5+2*2,7+40) << std::endl;
    
    // Example 1
    std::cout << "==============================" << std::endl;
    // Example 2

    Person p1 {"Curly", 15};
    Person p2 {"Moe", 30};

    Person p3 = min(p1,p2);
    std::cout << p3.name << " is younger" << std::endl;

    // Example 2
    std::cout << "==============================" << std::endl;
    // Example 3

    func<int,int>(10,20);
    func(10,20);
    func<char,double>('A',12.4);
    func('A',12.4);
    func(1000, "TESTING");
    func(2000,std::string{"FRANK"});

    // Example 3
    std::cout << "==============================" << std::endl;
    // Example 4

    func(p1,p2);

    // Example 4
    std::cout << "==============================" << std::endl;
    // Example 5

    int x{100};
    int y{200};

    func(x,y);
    swap(x,y);
    func(x,y);

    // Example 5
    std::cout << "==============================" << std::endl;
    // Example 6

    func(p1,p2);
    swap(p1,p2);
    func(p1,p2);

    // Example 6
    std::cout << "==============================" << std::endl;

    std::cout << std::endl;
    return 0;
}
/** @} */