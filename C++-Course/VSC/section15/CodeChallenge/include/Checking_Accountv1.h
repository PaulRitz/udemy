#ifndef _CHECKING_ACCOUNTV1_H_
#define _CHECKING_ACCOUNTV1_H_

#include "Accountv1.h"

class Checking_Accountv1: public Accountv1 {
    friend std::ostream &operator<<(std::ostream &out, Checking_Accountv1 &source);
private:
    static constexpr double default_fee = 1.50;
public:
    Checking_Accountv1(std::string name, double balance);

    bool withdraw(double amount);
};

#endif