/**
 * @file Savings_Accountv5.h
 * @brief showcase of ConstructorExceptions
 */
/**
 * @addtogroup s18_p07
 * @{
 */
#ifndef _SAVINGS_ACCOUNTV5_H_
#define _SAVINGS_ACCOUNTV5_H_

#include "Accountv5.h"
class Savings_Accountv5: public Accountv5 {
private:
    static constexpr const char* default_name = "Unnamed Savings Account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_interest_rate = 0.0;
protected:
    double interest_rate;
public:
    Savings_Accountv5(std::string name = default_name, 
                        double balance = default_balance, 
                        double interest_rate = default_interest_rate);
    virtual ~Savings_Accountv5();

    virtual std::ostream &print(std::ostream &out) const override;

    virtual bool deposit(double amount);
    virtual bool operator+=(const double amount);
};
#endif
/** @} */