/**
 * @file Accountv6.h
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
 * @addtogroup s18_cc
 * @{
 */
#ifndef _ACCOUNTV6_H_
#define _ACCOUNTV6_H_

#include <iostream>
#include <string>

#include "I_printablev4.h"
#include "IllegalBalanceException1.h"
#include "InsufficientFundsException0.h"

class Accountv6: public I_printablev4 {
private:
    static constexpr const char* default_name = "Unnamed Account";  // local constants
    static constexpr double default_balance = 0.0;                  // local constants
protected:
    std::string name;
    double balance;
public:
    Accountv6(std::string name = default_name, double balance = default_balance);
    // Accountv6(std::string name = "Unnamed Account", double balance = 0.0);

    virtual std::ostream &print(std::ostream &out) const override;

    virtual bool deposit(double amount);
    virtual bool withdraw(double amount);

    double get_balance() const;

    bool operator+=(const double amount);
    bool operator-=(const double amount);

    virtual ~Accountv6();
};
#endif
/** @} */