/**
 * @file Savings_Accountv3.h
 * @brief code challenge: practice using c++ polymorphism
 */
/**
 * @addtogroup s16_cc
 * @{
 */
#ifndef _SAVINGS_ACCOUNTV3_H_
#define _SAVINGS_ACCOUNTV3_H_

#include "Accountv3.h"
class Savings_Accountv3: public Accountv3 {
private:
    static constexpr const char* default_name = "Unnamed Savings Account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_interest_rate = 0.0;
protected:
    double interest_rate;
public:
    Savings_Accountv3(std::string name = default_name, 
                        double balance = default_balance, 
                        double interest_rate = default_interest_rate);
    virtual ~Savings_Accountv3();

    virtual std::ostream &print(std::ostream &out) const override;

    virtual bool deposit(double amount);
    virtual bool operator+=(const double amount);
};
#endif
/** @} */