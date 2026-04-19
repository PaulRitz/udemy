/**
 * @file main.cpp
 * @brief code challenge: practice using exception handling 
 * @details For this challenge we want to integrate our own user-defined  exception classes into the Account class 
 * hierarchy.
 * 
 * The account classes are provided for you.
 * Also, the IllegalBalanceException.h file contains the declaration for the IllegalBalanceException class.
 * 
 * What I would like you to do is:
 * 1. Derive IllegalBalanceException from std::exception and implement the what() method to provide an exception message.
 *    This exception objecct should be thrown from the Account class construcctor is an account ob ject is created with a negative
 *    balance.
 * 
 * 2. Derive InsufficentFundsException from std::exception and implement the what() method to provide an exception message.
 *    This exception object should be thrown if a withdraw results in a negative balance.
 *    You should throw this exception object from the Account withdraw method.
 */
/**
 * @addtogroup section18
 * @{
 * @defgroup s18_cc CodeChallenge
 * @brief code challenge: practice using exception handling 
 * @details For this challenge we want to integrate our own user-defined  exception classes into the Account class 
 * hierarchy.
 * 
 * The account classes are provided for you.
 * Also, the IllegalBalanceException.h file contains the declaration for the IllegalBalanceException class.
 * 
 * What I would like you to do is:
 * 1. Derive IllegalBalanceException from std::exception and implement the what() method to provide an exception message.
 *    This exception objecct should be thrown from the Account class construcctor is an account ob ject is created with a negative
 *    balance.
 * 
 * 2. Derive InsufficentFundsException from std::exception and implement the what() method to provide an exception message.
 *    This exception object should be thrown if a withdraw results in a negative balance.
 *    You should throw this exception object from the Account withdraw method.
 */
/**
 * @ingroup CCs
 * @addtogroup s18_cc
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <memory>

using namespace std;

#include "../include/I_printablev4.h"
#include "../include/Accountv6.h"
#include "../include/Savings_Accountv6.h"
#include "../include/Account_Util.h"
#include "../include/Checking_Accountv6.h"
#include "../include/Trust_Accountv6.h"

int main() {
    cout << "========================" << endl;

    try{
        unique_ptr<Accountv6> moes_account = make_unique<Checking_Accountv6>("Moe", -10.0);
        cout << *moes_account << endl;
    }
    catch(const IllegalBalanceException1 &ex){
        cout << ex.what() << endl;
    }
    cout << "Programm completed successfully" << endl;
    cout << "========================" << endl;
    try {
        // Create a valid account with $100
        unique_ptr<Accountv6> barneys_account = make_unique<Savings_Accountv6>("Barney", 100.0, 5.0);
        cout << *barneys_account << endl;
        
        // Try to withdraw $500 (this should throw the exception)
        barneys_account->withdraw(500.0); 
    }
    catch(const InsufficientFundsException0 &ex) {
        // Catch and print your custom error message
        cout << ex.what() << endl; 
    }
    cout << "========================" << endl;
    cout << endl;
    return 0;
}


/** @} */