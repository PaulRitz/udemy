/**
 * @file main.cpp
 * @brief code challenge: practice using inheritance
 * @details You are provided a simple Account class hierarchy that contains
 * Accountv1 - Base class
 * Savings_Accountv1 - Derived class
 * 
 * An Account has a name and a balance.
 * A Savings Account is an Account and adds an interest rate.
 * 
 * I have also provided some Account helper functions in Account_Util.h and Account_Util.cpp
 * that make it easy to display, deposit to, and withdraw from a vector of Accounts and Savings Accounts.
 * 
 * Please refer to the source code provided and the video explanation of this challenge for more details.
 * 
 * Your challenge is the following:
 * 
 * 1. Add a Checking account class to the Account hierarchy
 *    A Checking account has a name and a balance and has a fee of $1.50 per withdrawal transaction.
 *    Every withdrawal transaction will be assessed this flat fee.
 * 
 * 2. Add a Trust account class to the Account hierarchy
 *    A Trust account has a name, a balance, and an interest rate.
 *    The Trust account deposit works just lika a savings account deposit.
 *    However, any deposits of $5000.00 or more will receive  a $50.00 bonus deposited to the account.
 * 
 *    The Trust account withdrawal should only allow 3 withdrawals per year and each of these must be less than 20% of the account balance.
 *    You don't have to keep track of calendar time for this application, just make sure the 4th deposit fails
 */
/**
 * @addtogroup section15
 * @{
 * @defgroup s15_cc CodeChallenge
 * @brief code challenge: practice using inheritance
 * @details You are provided a simple Account class hierarchy that contains
 * Accountv1 - Base class
 * Savings_Accountv1 - Derived class
 * 
 * An Account has a name and a balance.
 * A Savings Account is an Account and adds an interest rate.
 * 
 * I have also provided some Account helper functions in Account_Util.h and Account_Util.cpp
 * that make it easy to display, deposit to, and withdraw from a vector of Accounts and Savings Accounts.
 * 
 * Please refer to the source code provided and the video explanation of this challenge for more details.
 * 
 * Your challenge is the following:
 * 
 * 1. Add a Checking account class to the Account hierarchy
 *    A Checking account has a name and a balance and has a fee of $1.50 per withdrawal transaction.
 *    Every withdrawal transaction will be assessed this flat fee.
 * 
 * 2. Add a Trust account class to the Account hierarchy
 *    A Trust account has a name, a balance, and an interest rate.
 *    The Trust account deposit works just lika a savings account deposit.
 *    However, any deposits of $5000.00 or more will receive  a $50.00 bonus deposited to the account.
 * 
 *    The Trust account withdrawal should only allow 3 withdrawals per year and each of these must be less than 20% of the account balance.
 *    You don't have to keep track of calendar time for this application, just make sure the 4th deposit fails
 * @}
 */
/**
 * @ingroup CCs
 * @addtogroup s15_cc
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

#include "../include/Accountv1.h"
#include "../include/Savings_Accountv1.h"
#include "../include/Account_Util.h"
#include "../include/Checking_Accountv1.h"
#include "../include/Trust_Accountv1.h"

int main() {
    cout.precision(2);
    cout << fixed;
    cout << "\n==================== Accountv1 ====================" << endl;

    Accountv1 acc1 {"Anna", 700.0};
    cout << acc1 << endl;
    acc1 += 700;
    acc1 -= 1400;

    cout << "\n==================== Savings Accountv1 ====================" << endl;
    Savings_Accountv1 s_acc1 {"Paul", 1200.0, 12};
    cout << s_acc1 << endl;
    s_acc1 += 1000;
    s_acc1 -= 200.0;

    cout << "\n==================== Checking Accountv1 ====================" << endl;
    Checking_Accountv1 c_acc1 {"David", 1000.0};
    cout << c_acc1 << endl;
    c_acc1 += 1000.0;
    c_acc1 -= 10;

    cout << "\n==================== Trust Accountv1 ====================" << endl;
    Trust_Accountv1 t_acc1 {"Markus", 50000.0, 27};
    cout << t_acc1 << endl;
    t_acc1 += 1000.0;
    t_acc1 -= 50;
    t_acc1 -= 50;
    t_acc1 -= 50;
    t_acc1 -= 50;
    t_acc1 -= 50;

    cout << endl;
    return 0;
}
/** @} */