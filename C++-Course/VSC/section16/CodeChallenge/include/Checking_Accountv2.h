/**
 * @file Checking_Accountv2.h
 * @brief code challenge: practice using c++ polymorphism
 */
/**
 * @addtogroup s16_cc
 * @{
 */
#ifndef _CHECKING_ACCOUNTV2_H_
#define _CHECKING_ACCOUNTV2_H_

#include "Accountv2.h"

class Checking_Accountv2: public Accountv2 {
private:
    static constexpr double default_fee = 1.50;
public:
    Checking_Accountv2(std::string name, double balance);
    virtual ~Checking_Accountv2();

    virtual std::ostream &print(std::ostream &out) const override;

    virtual bool withdraw(const double amount);
    bool operator-=(const double amount);
};

#endif
/** @} */