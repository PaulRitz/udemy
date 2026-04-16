#include "Checking_Accountv1.h"

Checking_Accountv1::Checking_Accountv1(std::string name, double balance)
    :Accountv1(name, balance) {}


std::ostream &operator<<(std::ostream &out, const Checking_Accountv1 &source){
    out << "[CHECKING ACCOUNT] " << source.name << ": $" << source.balance;
    return out;
}
bool Checking_Accountv1::operator-=(const double amount){
    return this->withdraw(amount);
}

bool Checking_Accountv1::withdraw(const double amount){
    return Accountv1::withdraw(amount+this->default_fee);
}