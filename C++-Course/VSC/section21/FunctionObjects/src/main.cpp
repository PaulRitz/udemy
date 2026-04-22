/**
 * @file main.cpp
 * @brief showcase of function objects
 */
/**
 * @defgroup section21 Section 21: Lambda Expressions
 * @brief all about basic lambda expressions
 */
/**
 * @addtogroup section21
 * @{
 * @defgroup s21_p01
 * @brief showcase of function objects
 * @}
 */
/**
 * @addtogroup s21_p01
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

using namespace std;

struct Square_Functor{
    void operator()(int x){
        std::cout << x * x << " ";
    }
};

template<typename T>
struct Displayer{
    void operator()(const T &data){
        std::cout << data << " ";
    }
};

class Multiplier0 {
private:
    int num {};
public:
    Multiplier0(int n)
        :num{n} {}
    int operator()(int n) const {
        return n * this->num;
    }
};

int main() {

    cout << "====================" << endl;
    // Example 1
    {

        Square_Functor square;
        square(4);                  // square.operator()(4) -> displays 16

        Displayer<int> d1;
        Displayer<string> d2;
        d1(100);
        d2("Frank");
        cout << endl;
        
    }
    // Example 1
    cout << "====================" << endl;
    // Example 2
    {
        
        Square_Functor square;
        Displayer<int> d1;
        Displayer<string> d2;

        vector<int> vec1 {1,2,3,4,5};
        vector<string> vec2 {"Larry","Moe","Curly"};

        for_each(vec1.begin(),vec1.end(),square);
        cout << endl;

        for_each(vec1.begin(), vec1.end(), Displayer<int>());
        cout << endl;

        for_each(vec1.begin(),vec1.end(), d1);
        cout << endl;

        for_each(vec2.begin(),vec2.end(),Displayer<string>());
        cout << endl;

        for_each(vec2.begin(),vec2.end(),d2);
        cout << endl;

    }
    // Example 2
    cout << "====================" << endl;
    // Example 3
    {
        vector<int> vec1 {1,2,3,4,5};
        vector<string> vec2 {"Larry","Moe","Curly"};

        for_each(vec1.begin(),vec1.end(),[](int x){cout << x * x << " ";});
        cout << endl;

        for_each(vec1.begin(), vec1.end(), [](int x){cout << x * 10 << " ";});
        cout << endl;

        for_each(vec1.begin(),vec1.end(),[](int x){cout << x << " ";});
        cout << endl;

        for_each(vec2.begin(), vec2.end(),[](string s){cout << s << " ";});
        cout << endl;

    }
    // Example 3
    cout << "====================" << endl;
    // Example 4
    {

        Multiplier0 mult(100);
        vector<int> vec1 {1,2,3,4};
        Displayer<int> d1;

        transform(vec1.begin(),vec1.end(),vec1.begin(),mult);
        for_each(vec1.begin(),vec1.end(),d1);
        cout << endl;

        vec1 = {1,2,3,4};
        transform(vec1.begin(),vec1.end(),vec1.begin(),[](int x){return x*100;});
        for_each(vec1.begin(),vec1.end(),[](int x){cout << x << " ";});
        cout << endl;
    

    }
    // Example 4
    cout << "====================" << endl;

    std::cout << std::endl;
    return 0;
}
/** @} */