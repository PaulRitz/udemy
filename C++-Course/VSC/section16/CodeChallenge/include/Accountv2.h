/**
 * @file Accountv2.h
 * @brief code challenge: practice using c++ polymorphism
 */
/**
 * @addtogroup s16_cc
 * @{
 */
#ifndef _ACCOUNTV2_H_
#define _ACCOUNTV2_H_

#include <iostream>
#include <string>

#include "I_printablev0.h"

class Accountv2: public I_printablev0 {
private:
    static constexpr const char* default_name = "Unnamed Account";  // local constants
    static constexpr double default_balance = 0.0;                  // local constants
protected:
    std::string name;
    double balance;
public:
    Accountv2(std::string name = default_name, double balance = default_balance);
    // Accountv2(std::string name = "Unnamed Account", double balance = 0.0);

    virtual std::ostream &print(std::ostream &out) const override;

    virtual bool deposit(double amount);
    virtual bool withdraw(double amount);

    double get_balance() const;

    bool operator+=(const double amount);
    bool operator-=(const double amount);

    virtual ~Accountv2();
};
#endif
/** @} */