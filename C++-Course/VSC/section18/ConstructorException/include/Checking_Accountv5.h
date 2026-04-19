/**
 * @file Checking_Accountv5.h
 * @brief showcase of ConstructorExceptions
 */
/**
 * @addtogroup s18_p07
 * @{
 */
#ifndef _CHECKING_ACCOUNTV5_H_
#define _CHECKING_ACCOUNTV5_H_

#include "Accountv5.h"

class Checking_Accountv5: public Accountv5 {
private:
    static constexpr double default_fee = 1.50;
public:
    Checking_Accountv5(std::string name, double balance);
    virtual ~Checking_Accountv5();

    virtual std::ostream &print(std::ostream &out) const override;

    virtual bool withdraw(const double amount);
    bool operator-=(const double amount);
};

#endif
/** @} */