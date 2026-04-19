/**
 * @file Accountv5.h
 * @brief showcase of ConstructorExceptions
 */
/**
 * @addtogroup s18_p07
 * @{
 */
#ifndef _ACCOUNTV5_H_
#define _ACCOUNTV5_H_

#include <iostream>
#include <string>

#include "I_printablev3.h"
#include "IllegalBalanceException.h"

class Accountv5: public I_printablev3 {
private:
    static constexpr const char* default_name = "Unnamed Account";  // local constants
    static constexpr double default_balance = 0.0;                  // local constants
protected:
    std::string name;
    double balance;
public:
    Accountv5(std::string name = default_name, double balance = default_balance);
    // Accountv5(std::string name = "Unnamed Account", double balance = 0.0);

    virtual std::ostream &print(std::ostream &out) const override;

    virtual bool deposit(double amount);
    virtual bool withdraw(double amount);

    double get_balance() const;

    bool operator+=(const double amount);
    bool operator-=(const double amount);

    virtual ~Accountv5();
};
#endif
/** @} */