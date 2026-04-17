/**
 * @file main.cpp
 * @brief showcase of the unique smart pointer
 */
/**
 * @addtogroup section16
 * @{
 * @defgroup s17_p01 UniquePointers
 * @brief showcase of the unique smart pointer
 */
/**
 * @addtogroup s17_p01
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <memory>

using namespace std;

#include "../include/I_printablev2.h"
#include "../include/Accountv4.h"
#include "../include/Savings_Accountv4.h"
#include "../include/Account_Util.h"
#include "../include/Checking_Accountv4.h"
#include "../include/Trust_Accountv4.h"
#include "../include/Test1.h"

void func(shared_ptr<Test1> p);

int main() {
    cout << "========================" << endl;
    // Example 1 
    
    shared_ptr<int> p1 {new int {100}};
    cout << "Use count: " << p1.use_count() << endl;

    shared_ptr<int> p2 {p1};
    cout << "Use count: " << p1.use_count() << endl;
    
    p1.reset();
    cout << "Use count: " << p1.use_count() << endl;
    cout << "Use count: " << p2.use_count() << endl;

    // Example 1 
    cout << "========================" << endl;
    // Example 2

    shared_ptr<Test1> ptr = make_shared<Test1>(100);
    func(ptr);
    cout << "Use count: " << ptr.use_count() << endl;
    {
        shared_ptr<Test1> ptr1 = ptr;
        cout << "Use count: " << ptr.use_count() << endl;
        {
            shared_ptr<Test1> ptr2 = ptr;
            cout << "Use count: " << ptr.use_count() << endl;
            ptr.reset();
        }
        cout << "Use count: " << ptr.use_count() << endl;
    }
    cout << "Use count: " << ptr.use_count() << endl;
    // Example 2
    cout << "========================" << endl;
    // Example 3

    shared_ptr<Accountv4>acc1 = make_shared<Accountv4>("Kevin", 700.0);
    shared_ptr<Accountv4>acc2 = make_shared<Trust_Accountv4>("Larry", 1000.0, 3.1);
    shared_ptr<Accountv4>acc3 = make_shared<Checking_Accountv4>("Moe", 5000);
    shared_ptr<Accountv4>acc4 = make_shared<Savings_Accountv4>("Curly", 6000);

    vector<shared_ptr<Accountv4>> accounts;
    accounts.push_back(acc1);
    accounts.push_back(acc2);
    accounts.push_back(acc3);
    accounts.push_back(acc4);

    // for(const auto &acc : accounts){
    //     cout << *acc << endl;
    //     cout << "Use count: " << acc.use_count() << endl;
    // }

    display(accounts);
    // Example 3
    cout << "========================" << endl;
    cout << endl;
    return 0;
}

void func(shared_ptr<Test1> p){
    cout << "Use count: " << p.use_count() << endl;
}
/** @} */