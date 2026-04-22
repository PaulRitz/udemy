/**
 * @file main.cpp
 * @brief showcase of stateless lambda expressions
 */
/**
 * @addtogroup section21
 * @{
 * @defgroup s21_p02 StateLessLambda
 * @brief showcase of stateless lambda expressions
 * @}
 */
/**
 * @addtogroup s21_p02
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
#include <functional>

const std::string input_file_path = std::string(FILES_IN_DIR);
const std::string output_file_path = std::string(FILES_OUT_DIR);

// using namespace std;

class Person4 {
    friend std::ostream &operator<<(std::ostream &out, const Person4 &rhs){
        out << "[Person4: " << rhs.name << ": " << rhs.age << "]";
        return out;
    }
private:
    int age;
    std::string name;
public:
    Person4(std::string name, int age)
        :name{name},age{age} {};
    Person4(const Person4 &p)
        :name{p.name},age{p.age} {};
    ~Person4() = default;
    std::string get_name() const{
        return this->name;
    }
    void set_name(std::string name){
        this->name = name;
    }
    int get_age() const{
        return this->age;
    }
    void set_age(int age){
        this->age = age;
    }
};

void filter_vector(const std::vector<int> &vec, std::function<bool(int)> func){
// void filter_vector(const std::vector<int> &vec, auto func){
    std::cout << "[ ";
    for(int i : vec){
        if(func(i)){
            std::cout << i << " ";
        }
    }
    std::cout << "]" << std::endl;
}

auto make_lambda(){
    return [](){std::cout << "This lambda was made using the make_lambda function" << std::endl;};
}

int main() {
    std::cout << "=============================" << std::endl;
    // Example 1
    {

        [] () {std::cout << "Hi" << std::endl;}();

        [] (int x) {std::cout << x << std::endl;}(100);

        [](int x, int y){std::cout << x+y << std::endl;}(100,200);

    }
    // Example 1
    std::cout << "=============================" << std::endl;
    // Example 2
    {

        auto l1 = [](){std::cout << "Hi" << std::endl;};
        l1();

        int num1{100};
        int num2{100};

        auto l2 = [](int x, int y) {std::cout << x+y << std::endl;};
        l2(10,20);
        l2(num1,num2);

        auto l3 = [](int &x, int y){
            std::cout << "x: " << x << "y: " << y << std::endl;
            x = 1000;
            y = 2000;
        };
        l3(num1, num2);
        std::cout << "num1: " << num1 << " num2: " << num2 << std::endl;

    }
    // Example 2
    std::cout << "=============================" << std::endl;
    // Example 3
    {

        Person4 stooge {"Larry", 18};
        std::cout << stooge << std::endl;

        auto l1 = [](Person4 p){
            std::cout << p << std::endl;
        };
        l1(stooge);

        auto l2 = [](const Person4 &p){
            std::cout << p << std::endl;
        };
        l2(stooge);

        auto l3 = [](Person4 &p){
            p.set_name("Frank");
            p.set_age(25);
            std::cout << p << std::endl;
        };
        l3(stooge);

        std::cout << stooge << std::endl;

    }
    // Example 3
    std::cout << "=============================" << std::endl;
    // Example 4
    {

        std::vector<int> nums {10,20,30,40,50,60,70,80,90,100};

        filter_vector(nums,[](int x){return x>50;});

        filter_vector(nums, [](int x){return x<=30;});

        filter_vector(nums, [](int x){return x>=30&&x<=60;});

    }
    // Example 4
    std::cout << "=============================" << std::endl;
    // Example 5
    {

        auto l1 = make_lambda();
        l1();

    }
    // Example 5
    std::cout << "=============================" << std::endl;
    // Example 6
    {

        auto l1 = [](auto x, auto y){
            std::cout << "x: " << x << " y: " << y << std::endl;
        };

        l1(10,20);
        l1(100.3,200);
        l1(12.5,15.54);
        l1("Hello", 553);
        l1(Person4("Larry",18), Person4("Curly",22));

    }
    // Example 6
    std::cout << "=============================" << std::endl;
    // Example 7
    {

        std::vector<Person4> stooges {
            {"Larry",18},
            {"Moe",30},
            {"Curly",25},
        };
        std::sort(begin(stooges),stooges.end(),[](const Person4 &p1,const Person4 &p2){
            return p1.get_name()<p2.get_name();
        });
        std::for_each(stooges.begin(),stooges.end(),[](const Person4 &p){
            std::cout << p << std::endl;
        });

        std::cout << std::endl;

        std::sort(stooges.begin(),stooges.end(),[](const Person4 &p1, const Person4 &p2){
            return p1.get_age() < p2.get_age();
        });

        std::for_each(stooges.begin(),stooges.end(),[](const Person4 &p){
            std::cout << p << std::endl;
        });

    }
    // Example 7
    std::cout << "=============================" << std::endl;

    std::cout << std::endl;
    return 0;
}
/** @} */