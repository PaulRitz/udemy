/**
 * @file Savings_Account0.h
 * @brief deriving our first class
 */
/**
 * @addtogroup s15_p01
 * @{
 */
#ifndef _SAVINGS_ACCOUNT6_H_
#define _SAVINGS_ACCOUNT6_H_

#include "Account6.h"

class Savings_Account0: public Account6 {
public:
    Savings_Account0();
    ~Savings_Account0();

    void deposit(double amount);
    void withdraw(double amount);
};
#endif
/** @} */