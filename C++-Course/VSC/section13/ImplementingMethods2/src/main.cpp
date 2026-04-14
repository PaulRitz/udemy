/**
 * @file main.cpp
 * @brief showcase on how to implement methods and classes
 */
/**
 * @addtogroup section13
 * @{
 * @defgroup s13_p05 ImplementingMethods2
 * @brief showcase on how to implement methods and classes
 * @}
 */
/**
 * @addtogroup s13_p05
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

#include "../include/Account.h"

using namespace std;

int main() {

    Account5 frank_account;

    frank_account.set_name("Frank's account5");
    frank_account.set_balance(1000.0);

    if(frank_account.deposit(200.0)){
        cout << "Deposit OK" << endl;
    }
    else{
        cout << "Deposit Not allowed" << endl;
    }

    if(frank_account.withdraw(500.0)){
        cout << "Withdrawal OK" << endl;
    }
    else {
        cout << "Not sufficient funds" << endl;
    }

    if(frank_account.withdraw(1500.0)){
        cout << "Withdrawal OK" << endl;
    }
    else{
        cout << "Not sufficient funds" << endl;
    }

    cout << endl;
    return 0;
}
/** @} */