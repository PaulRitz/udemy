/**
 * @file main.cpp
 * @brief the problem of static function usage -- introduction to polymorphism
 */
/**
 * @defgroup section16 Section 16: Polymorphism
 * @brief everything about polymorphism in c++ programming
 * @details Polymorphism is in c++ the definition of felxibility, with polymorphism we can make the functions,
 * that normally are static and only can work with the data types you tell them to use, dynamic and let them work
 * with multiple different data types without overloading the same funktion etc.
 */
/**
 * @addtogroup section16
 * @{
 * @defgroup s16_p01 TheProblem
 * @brief the problem of static function usage -- introduction to polymorphism
 * @}
 */
/**
 * @addtogroup s16_p01
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

#include "../include/header.h"

void greetings(const Base4 &obj);

int main() {

    Base4 b;
    b.say_hello();

    Derived4 d;
    d.say_hello();

    greetings(b);
    greetings(d);

    Base4 *ptr = new Derived4();
    ptr->say_hello();
    greetings(*ptr);

    delete ptr;

    cout << endl;
    return 0;
}

void greetings(const Base4 &obj){
    std::cout << "Greetings: ";
    obj.say_hello();
}
/** @} */