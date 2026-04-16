/**
 * @file main.cpp
 * @brief showcase of how to redefine base class methods for derived classes
 */
/**
 * @addtogroup section15
 * @{
 * @defgroup s15_p06 RedefiningBaseClassMethods
 * @brief showcase of how to redefine base class methods for derived classes
 * @}
 */
/**
 * @addtogroup s15_p06
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

#include "../include/Account7.h"
#include "../include/Savings_Account1.h"

int main() {
    cout << "\n================ Account ================" << endl << endl;
    Account7 std_acc1 {150.0};
    std_acc1.deposit(50.0);
    std_acc1.withdraw(300.0);
    std_acc1.withdraw(100.0);
    cout << "The first Account: " << std_acc1 << endl;

    cout << "\n================ Savings Account ================" << endl << endl;
    
    Savings_Account1 sav_acc1{500.0, 12.0};
    sav_acc1.deposit(10);
    sav_acc1.withdraw(1000);
    sav_acc1.withdraw(100);
    cout << "The first savings account: " << sav_acc1 << endl;
    
    cout << endl;
    return 0;
}
/** @} */