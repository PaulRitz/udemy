/**
 * @file Account7.h
 * @brief showcase of how to redefine base class methods for derived classes
 */
/**
 * @addtogroup s15_p06
 * @{
 */
#ifndef _ACCOUNT7_H_
#define _ACCOUNT7_H_

#include <iostream>
#include <string>

class Account7 {
    friend std::ostream &operator<<(std::ostream &out, const Account7 &source);
protected:
    double balance;
public:
    void deposit(double amount);
    void withdraw(double amount);

    Account7();
    Account7(double balance);
};
#endif
/** @} */