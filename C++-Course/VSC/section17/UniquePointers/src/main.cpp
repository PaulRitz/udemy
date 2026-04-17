/**
 * @file main.cpp
 * @brief showcase of the unique smart pointer
 */
/**
 * @defgroup section17 Section 17: Smart Pointers
 * @brief this section showcases smart pointers in c++
 */
/**
 * @addtogroup section17
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

#include "../include/I_printablev1.h"
#include "../include/Accountv3.h"
#include "../include/Savings_Accountv3.h"
#include "../include/Account_Util.h"
#include "../include/Checking_Accountv3.h"
#include "../include/Trust_Accountv3.h"
#include "../include/Test0.h"

int main() {
    cout << "========================" << endl;
    // Example 1 -- Raw Pointer
    
    Test0* t1 = new Test0 {1000};
    delete t1;
    
    // Example 1 -- Raw Pointer
    cout << "========================" << endl;
    // Example 2 -- Unique Pointer
    
    std::unique_ptr<Test0> t2 {new Test0{100}};

    
    // Example 2 -- Unique Pointer
    cout << "========================" << endl;
    // Example 3

    std::unique_ptr<Test0> t3 = std::make_unique<Test0>(1000);
    
    // Example 3
    cout << "========================" << endl;
    // Example 4

    std::unique_ptr<Test0> t4;
    t4 = std::move(t2);
    if(!t2){
        cout << "t1 is nullptr" << endl;
    }
    // Example 4
    cout << "========================" << endl;
    // Example 5

    std::unique_ptr<Accountv3> a1 = std::make_unique<Checking_Accountv3>("Moe",5000);
    cout << *a1 << endl;
    a1->deposit(5000);
    cout << *a1 << endl;

    // Example 5
    cout << "========================" << endl;
    // Example 6

    std::vector<std::unique_ptr<Accountv3>> accounts;
    accounts.push_back(make_unique<Checking_Accountv3>("James", 1000));
    accounts.push_back(make_unique<Savings_Accountv3>("Billy", 4000, 5.2));
    accounts.push_back(make_unique<Trust_Accountv3>("Bobby",5000,4.5));

    display(accounts);

    // Example 6
    cout << "========================" << endl;
    cout << endl;
    return 0;
}
/** @} */