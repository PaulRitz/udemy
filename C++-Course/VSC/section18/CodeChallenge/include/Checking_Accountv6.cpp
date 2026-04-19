#include "Checking_Accountv6.h"

Checking_Accountv6::Checking_Accountv6(std::string name, double balance)
    :Accountv6(name, balance) {}
Checking_Accountv6::~Checking_Accountv6() {}


std::ostream &Checking_Accountv6::print(std::ostream &out) const{
    out << "[CHECKING ACCOUNTV2] name: " << this->name << ", balance: $" << this->balance;
    return out;
}
bool Checking_Accountv6::operator-=(const double amount){
    return this->withdraw(amount);
}

bool Checking_Accountv6::withdraw(const double amount){
    return Accountv6::withdraw(amount+this->default_fee);
}