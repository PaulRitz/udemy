/**
 * @file Checking_Accountv3.h
 * @brief showcase of the unique smart pointer
 */
/**
 * @addtogroup s17_p01
 * @{
 */
#ifndef _CHECKING_ACCOUNTV3_H_
#define _CHECKING_ACCOUNTV3_H_

#include "Accountv3.h"

class Checking_Accountv3: public Accountv3 {
private:
    static constexpr double default_fee = 1.50;
public:
    Checking_Accountv3(std::string name, double balance);
    virtual ~Checking_Accountv3();

    virtual std::ostream &print(std::ostream &out) const override;

    virtual bool withdraw(const double amount);
    bool operator-=(const double amount);
};

#endif
/** @} */