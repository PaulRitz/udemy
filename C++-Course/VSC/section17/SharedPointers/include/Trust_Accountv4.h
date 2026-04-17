/**
 * @file Trust_Accountv4.h
 * @brief code challenge: practice using c++ polymorphism
 */
/**
 * @addtogroup s16_cc
 * @{
 */
#ifndef _TRUST_Accountv4_H_
#define _TRUST_Accountv4_H_

#include "Savings_Accountv4.h"

class Trust_Accountv4: public Savings_Accountv4 {
private:
    int withdrawal_counter;
public:
    Trust_Accountv4(std::string name, double balance, double interest_rate);
    virtual ~Trust_Accountv4();

    virtual std::ostream &print(std::ostream &out) const override;

    virtual bool deposit(double amount);
    virtual bool withdraw(double amount);

    bool operator+=(const double amount);
    bool operator-=(const double amount);
};

#endif
/** @} */