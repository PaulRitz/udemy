/**
 * @file Trust_Accountv5.h
 * @brief showcase of ConstructorExceptions
 */
/**
 * @addtogroup s18_07
 * @{
 */
#ifndef _TRUST_ACCOUNTV5_H_
#define _TRUST_ACCOUNTV5_H_

#include "Savings_Accountv5.h"

class Trust_Accountv5: public Savings_Accountv5 {
private:
    int withdrawal_counter;
public:
    Trust_Accountv5(std::string name, double balance, double interest_rate);
    virtual ~Trust_Accountv5();

    virtual std::ostream &print(std::ostream &out) const override;

    virtual bool deposit(double amount);
    virtual bool withdraw(double amount);

    bool operator+=(const double amount);
    bool operator-=(const double amount);
};

#endif
/** @} */