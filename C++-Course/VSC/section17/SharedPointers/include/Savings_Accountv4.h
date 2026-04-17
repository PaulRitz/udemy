/**
 * @file Savings_Accountv4.h
 * @brief code challenge: practice using c++ polymorphism
 */
/**
 * @addtogroup s17_p02
 * @{
 */
#ifndef _SAVINGS_Accountv4_H_
#define _SAVINGS_Accountv4_H_

#include "Accountv4.h"
class Savings_Accountv4: public Accountv4 {
private:
    static constexpr const char* default_name = "Unnamed Savings Account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_interest_rate = 0.0;
protected:
    double interest_rate;
public:
    Savings_Accountv4(std::string name = default_name, 
                        double balance = default_balance, 
                        double interest_rate = default_interest_rate);
    virtual ~Savings_Accountv4();

    virtual std::ostream &print(std::ostream &out) const override;

    virtual bool deposit(double amount);
    virtual bool operator+=(const double amount);
};
#endif
/** @} */