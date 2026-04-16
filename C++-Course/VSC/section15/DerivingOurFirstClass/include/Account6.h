/**
 * @file Account6.h
 * @brief deriving our first class
 */
/**
 * @addtogroup s15_p01
 * @{
 */
#ifndef _ACCOUNT6_H_
#define _ACCOUNT6_H_

#include <iostream>

class Account6 {
private:
public:
    void deposit(double amount);
    void withdraw(double amount);
    Account6();
    ~Account6();
};
#endif
/** @} */