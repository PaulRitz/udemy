/**
 * @file Savings_Accountv2.h
 * @brief code challenge: practice using c++ polymorphism
 */
/**
 * @addtogroup s16_cc
 * @{
 */
#ifndef _SAVINGS_ACCOUNTV2_H_
#define _SAVINGS_ACCOUNTV2_H_

#include "Accountv2.h"
class Savings_Accountv2: public Accountv2 {
private:
    static constexpr const char* default_name = "Unnamed Savings Account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_interest_rate = 0.0;
protected:
    double interest_rate;
public:
    Savings_Accountv2(std::string name = default_name, 
                        double balance = default_balance, 
                        double interest_rate = default_interest_rate);
    virtual ~Savings_Accountv2();

    virtual std::ostream &print(std::ostream &out) const override;

    virtual bool deposit(double amount);
    virtual bool operator+=(const double amount);
};
#endif
/** @} */