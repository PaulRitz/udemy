/**
 * @file IllegalBalanceException1.h
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
#ifndef _ILLEGAL_BALANCE_EXCEPTION1_H_
#define _ILLEGAL_BALANCE_EXCEPTION1_H_

class IllegalBalanceException1: public std::exception{
public: 
    IllegalBalanceException1() = default;
    ~IllegalBalanceException1() = default;

    virtual const char* what() const noexcept override {
        return "[ILLEGAL BALANCE EXCEPTION]: Cannot create an account with negative balance!";
    }
};

#endif
/** @} */