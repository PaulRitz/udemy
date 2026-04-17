/**
 * @file Accountv3.h
 * @brief showcase of the unique smart pointer
 */
/**
 * @addtogroup s17_p01
 * @{
 */
#ifndef _ACCOUNTV3_H_
#define _ACCOUNTV3_H_

#include <iostream>
#include <string>

#include "I_printablev1.h"

class Accountv3: public I_printablev1 {
private:
    static constexpr const char* default_name = "Unnamed Account";  // local constants
    static constexpr double default_balance = 0.0;                  // local constants
protected:
    std::string name;
    double balance;
public:
    Accountv3(std::string name = default_name, double balance = default_balance);
    // Accountv3(std::string name = "Unnamed Account", double balance = 0.0);

    virtual std::ostream &print(std::ostream &out) const override;

    virtual bool deposit(double amount);
    virtual bool withdraw(double amount);

    double get_balance() const;

    bool operator+=(const double amount);
    bool operator-=(const double amount);

    virtual ~Accountv3();
};
#endif
/** @} */