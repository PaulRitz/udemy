/**
 * @file Savings_Accountv6.h
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
#ifndef _SAVINGS_ACCOUNTV6_H_
#define _SAVINGS_ACCOUNTV6_H_

#include "Accountv6.h"
class Savings_Accountv6: public Accountv6 {
private:
    static constexpr const char* default_name = "Unnamed Savings Account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_interest_rate = 0.0;
protected:
    double interest_rate;
public:
    Savings_Accountv6(std::string name = default_name, 
                        double balance = default_balance, 
                        double interest_rate = default_interest_rate);
    virtual ~Savings_Accountv6();

    virtual std::ostream &print(std::ostream &out) const override;

    virtual bool deposit(double amount);
    virtual bool operator+=(const double amount);
};
#endif
/** @} */