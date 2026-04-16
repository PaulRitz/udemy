/**
 * @file Savings_Account1.h
 * @brief showcase of how to redefine base class methods for derived classes
 * @details Savings Account class
 * Deposit method increments amount to be deposited amount * int_rate percentage!!
 * So a 1000 deposit at a 5% interest rate will deposit 100 + 50 = 1050
 * 
 * withdraw method does not specialize
 */
/**
 * @addtogroup s15_p06
 * @{
 */
#ifndef _SAVINGS_ACCOUNT6_H_
#define _SAVINGS_ACCOUNT6_H_

#include "Account7.h"
/**
 * @brief showcase of how to redefine base class methods for derived classes
 * @details Savings Account class
 * Deposit method increments amount to be deposited amount * int_rate percentage!!
 * So a 1000 deposit at a 5% interest rate will deposit 100 + 50 = 1050
 * 
 * withdraw method does not specialize
 */
class Savings_Account1: public Account7 {
    friend std::ostream &operator<<(std::ostream &out, const Savings_Account1 &source);
protected:
    double interest_rate;
public:
    Savings_Account1();
    Savings_Account1(double balance, double interest_rate);

    void deposit(double amount);
    // withdraw is inherited
};
#endif
/** @} */