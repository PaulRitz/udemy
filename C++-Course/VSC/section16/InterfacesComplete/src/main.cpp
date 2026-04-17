/**
 * @file main.cpp
 * @brief showcase of best practice for interface classes in c++ polymorphism
 */
/**
 * @addtogroup s16_p07
 * @{
 * @defgroup s16_p07_02 InterfacesComplete
 * @brief solution to the problem
 * @details To solve the problem a interface class is created that enable the use of the operator<< 
 * as a virtual function
 * @}
 */
/**
 * @addtogroup s16_p07_02
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

#include "../include/header.h"

void do_withdraw(Account12 &source, double amount){
    source.withdraw(amount);
}
void print(const I_printable0 &source){
    cout << source << endl;
}

int main() {

    cout << "======================" << endl;
    // Example 1
    
    Account12 a;
    cout << a << endl;
    
    Checking4 c;
    cout << c << endl;
    
    Savings4 s;
    cout << s << endl;
    
    Trust4 t;
    cout << t << endl;
    
    // Example 1
    cout << "======================" << endl;
    // Example 2
    
    Account12* p1 = new Account12();
    cout << *p1 << endl;

    Account12* p2 = new Checking4();
    cout << *p2 << endl;

    Account12* p3 = new Trust4();
    cout << *p3 << endl;

    Account12* p4 = new Savings4();
    cout << *p4 << endl;

    delete p1;
    delete p2;
    delete p3;
    delete p4;

    // Example 2
    cout << "======================" << endl;
    // Example 3

    Dog6* dog = new Dog6();
    Account12 *p5 = new Account12();
    cout << *p5 << endl;
    cout << *dog << endl;
    print(*dog);
    print(*p5);
    
    delete p5;
    delete dog;

    // Example 3
    cout << "======================" << endl;
    
    cout << endl;
    return 0;
}
/** @} */