/**
 * @file main.cpp
 * @brief code challenge: practice using c++ polymorphism
 * @details You are provided with a complete Account class hierarchy (from section 15 code challenge)
 * The provided class hierarchy does not use polymorphism!
 * 
 * Your challenge is the following:
 * 
 * 1. Modify the Account class so that it is now an Abstract class by adding the following pure functions
 *      virtual bool deposit(double amount) = 0;
 *      virtual bool withdraw(double amount) = 0;
 * 
 *      Hint: you can implement these functions in the Account class if it makes sense
 * 
 * 2. Create an I_printable class interface as we did in the section and provide functionality so
 *    all accounts are printable to an ostream using the overloaded insertion operator.
 * 
 *    class I_printablev0 {
 *        friend std::ostream &operator<<(std::ostream &out, const I_printablev0 &source);
 *    public:
 *        virtual void print(std::ostream &out,) const = 0;
 *        virtual ~I_printablev0() = default;
 *    }
 * 
 * 3. Modify the functions in the Account_Util files so we only have one function that displays all classes
 * 
 * 4. Test the code with base class pointers & local objects
 */
/**
 * @addtogroup section16
 * @{
 * @defgroup s16_cc CodeChallenge
 * @brief code challenge: practice using c++ polymorphism
 * @details You are provided with a complete Account class hierarchy (from section 15 code challenge)
 * The provided class hierarchy does not use polymorphism!
 * 
 * Your challenge is the following:
 * 
 * 1. Modify the Account class so that it is now an Abstract class by adding the following pure functions
 *      virtual bool deposit(double amount) = 0;
 *      virtual bool withdraw(double amount) = 0;
 * 
 *      Hint: you can implement these functions in the Account class if it makes sense
 * 
 * 2. Create an I_printable class interface as we did in the section and provide functionality so
 *    all accounts are printable to an ostream using the overloaded insertion operator.
 * 
 *    class I_printablev0 {
 *        friend std::ostream &operator<<(std::ostream &out, const I_printablev0 &source);
 *    public:
 *        virtual void print(std::ostream &out,) const = 0;
 *        virtual ~I_printablev0() = default;
 *    }
 * 
 * 3. Modify the functions in the Account_Util files so we only have one function that displays all classes
 * 
 * 4. Test the code with base class pointers & local objects
 * @}
 */
/**
 * @ingroup CCs
 * @addtogroup s16_cc
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

#include "../include/I_printablev0.h"
#include "../include/Accountv2.h"
#include "../include/Savings_Accountv2.h"
#include "../include/Account_Util.h"
#include "../include/Checking_Accountv2.h"
#include "../include/Trust_Accountv2.h"

int main() {
    cout << "########################" << endl;
    cout << "Accountv2 ##############" << endl;
    cout << "########################" << endl;
    cout << "========================" << endl;
    Accountv2 local_obj1 {"01", 100.0};
    cout << local_obj1 << endl << endl;
    local_obj1.deposit(1900.0);
    local_obj1 += 10;
    local_obj1.withdraw(4000.0);
    local_obj1.withdraw(1000.0);
    local_obj1 -= 1;
    cout << local_obj1 << endl;
    cout << "========================" << endl;
    Accountv2* ptr1 = new Accountv2("p01", 100.0);
    cout << *ptr1 << endl << endl;
    ptr1->deposit(1900.0);
    *ptr1 += 10;
    ptr1->withdraw(4000.0);
    ptr1->withdraw(1000.0);
    *ptr1 -= 1;
    cout << *ptr1 << endl;
    cout << "========================" << endl << endl;

    cout << "\n########################" << endl;
    cout << "Savings Accountv2 ######" << endl;
    cout << "########################" << endl;
    Savings_Accountv2 local_obj2 {"02", 200.0, 20.0};
    cout << local_obj2 << endl << endl;
    local_obj2.deposit(1800.0);
    local_obj2 += 10;
    local_obj2.withdraw(4000.0);
    local_obj2.withdraw(1000.0);
    local_obj2 -= 1;
    cout << local_obj2 << endl;
    cout << "========================" << endl;
    Accountv2* ptr2 = new Savings_Accountv2("p02", 200.0, 20.0);
    cout << *ptr2 << endl << endl;
    ptr2->deposit(1800.0);
    *ptr2 += 10;
    ptr2->withdraw(4000.0);
    ptr2->withdraw(1000.0);
    *ptr2 -= 1;
    cout << *ptr2 << endl;
    cout << "========================" << endl << endl;

    cout << "\n########################" << endl;
    cout << "Checking Accountv2 #####" << endl;
    cout << "########################" << endl;
    Checking_Accountv2 local_obj3 {"03", 300.0};
    cout << local_obj3 << endl << endl;
    local_obj3.deposit(1700.0);
    local_obj3 += 10;
    local_obj3.withdraw(4000.0);
    local_obj3.withdraw(1000.0);
    local_obj3 -= 1;
    cout << local_obj3 << endl;
    cout << "========================" << endl;
    Accountv2* ptr3 = new Checking_Accountv2("p03", 300.0);
    cout << *ptr3 << endl << endl;
    ptr3->deposit(1700.0);
    *ptr3 += 10;
    ptr3->withdraw(4000.0);
    ptr3->withdraw(1000.0);
    *ptr3 -= 1;
    cout << *ptr3 << endl;
    cout << "========================" << endl << endl;

    cout << "\n########################" << endl;
    cout << "Trust Accountv2 ########" << endl;
    cout << "########################" << endl;
    Trust_Accountv2 local_obj4 {"04", 400.0, 40.0};
    cout << local_obj4 << endl << endl;
    local_obj4.deposit(1600.0);
    local_obj4 += 10;
    local_obj4.withdraw(4000.0);
    local_obj4.withdraw(1000.0);
    local_obj4 -= 1;
    cout << local_obj4 << endl;
    cout << "========================" << endl;
    Accountv2* ptr4 = new Trust_Accountv2("p04", 400.0, 40.0);
    cout << *ptr4 << endl << endl;
    ptr4->deposit(1600.0);
    *ptr4 += 10;
    ptr4->withdraw(4000.0);
    ptr4->withdraw(1000.0);
    *ptr4 -= 1; 
    ptr4->withdraw(1);
    ptr4->withdraw(1);
    ptr4->withdraw(1);
    cout << *ptr4 << endl;
    cout << "========================" << endl << endl;
    cout << "\n########################" << endl;
    cout << "Vectors ################" << endl;
    cout << "########################" << endl;
    vector<Accountv2*> ptrs {ptr1,ptr2,ptr3,ptr4};
    display(ptrs);
    deposit(ptrs, 2000.0);
    withdraw(ptrs, 1000.0);
    vector<Accountv2*> locals {&local_obj1,&local_obj2,&local_obj3,&local_obj4};
    display(locals);
    deposit(locals, 2000.0);
    withdraw(locals, 1000.0);
    cout << endl;
    return 0;
}
/** @} */