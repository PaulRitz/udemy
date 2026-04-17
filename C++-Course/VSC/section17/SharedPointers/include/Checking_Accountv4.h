/**
 * @file Checking_Accountv4.h
 * @brief showcase of the unique smart pointer
 */
/**
 * @addtogroup s17_p02
 * @{
 */
#ifndef _CHECKING_Accountv4_H_
#define _CHECKING_Accountv4_H_

#include "Accountv4.h"

class Checking_Accountv4: public Accountv4 {
private:
    static constexpr double default_fee = 1.50;
public:
    Checking_Accountv4(std::string name, double balance);
    virtual ~Checking_Accountv4();

    virtual std::ostream &print(std::ostream &out) const override;

    virtual bool withdraw(const double amount);
    bool operator-=(const double amount);
};

#endif
/** @} */