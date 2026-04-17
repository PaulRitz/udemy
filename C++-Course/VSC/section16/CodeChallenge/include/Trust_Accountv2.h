/**
 * @file Trust_Accountv2.h
 * @brief code challenge: practice using c++ polymorphism
 */
/**
 * @addtogroup s16_cc
 * @{
 */
#ifndef _TRUST_ACCOUNTV2_H_
#define _TRUST_ACCOUNTV2_H_

#include "Savings_Accountv2.h"

class Trust_Accountv2: public Savings_Accountv2 {
private:
    int withdrawal_counter;
public:
    Trust_Accountv2(std::string name, double balance, double interest_rate);
    virtual ~Trust_Accountv2();

    virtual std::ostream &print(std::ostream &out) const override;

    virtual bool deposit(double amount);
    virtual bool withdraw(double amount);

    bool operator+=(const double amount);
    bool operator-=(const double amount);
};

#endif
/** @} */