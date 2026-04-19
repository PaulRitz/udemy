/**
 * @file I_printablev4.h
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
#ifndef _I_PRINTABLEV3_H_
#define _I_PRINTABLEV3_H_

#include <iostream>

class I_printablev4 {
    friend std::ostream &operator<<(std::ostream &out, const I_printablev4 &source);
public:
    virtual ~I_printablev4();

    virtual std::ostream &print(std::ostream &out) const = 0;
};

#endif
/** @} */