/**
 * @file Accountv4.h
 * @brief showcase of the unique smart pointer
 */
/**
 * @addtogroup s17_p02
 * @{
 */
#ifndef _ACCOUNTV4_H_
#define _ACCOUNTV4_H_

#include <iostream>
#include <string>

#include "I_printablev2.h"

class Accountv4: public I_printablev2 {
private:
    static constexpr const char* default_name = "Unnamed Account";  // local constants
    static constexpr double default_balance = 0.0;                  // local constants
protected:
    std::string name;
    double balance;
public:
    Accountv4(std::string name = default_name, double balance = default_balance);
    // Accountv4(std::string name = "Unnamed Account", double balance = 0.0);

    virtual std::ostream &print(std::ostream &out) const override;

    virtual bool deposit(double amount);
    virtual bool withdraw(double amount);

    double get_balance() const;

    bool operator+=(const double amount);
    bool operator-=(const double amount);

    virtual ~Accountv4();
};
#endif
/** @} */