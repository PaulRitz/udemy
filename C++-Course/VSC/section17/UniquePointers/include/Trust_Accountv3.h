/**
 * @file Trust_Accountv3.h
 * @brief code challenge: practice using c++ polymorphism
 */
/**
 * @addtogroup s16_cc
 * @{
 */
#ifndef _TRUST_ACCOUNTV3_H_
#define _TRUST_ACCOUNTV3_H_

#include "Savings_Accountv3.h"

class Trust_Accountv3: public Savings_Accountv3 {
private:
    int withdrawal_counter;
public:
    Trust_Accountv3(std::string name, double balance, double interest_rate);
    virtual ~Trust_Accountv3();

    virtual std::ostream &print(std::ostream &out) const override;

    virtual bool deposit(double amount);
    virtual bool withdraw(double amount);

    bool operator+=(const double amount);
    bool operator-=(const double amount);
};

#endif
/** @} */