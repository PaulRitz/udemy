#include "Checking_Accountv2.h"

Checking_Accountv2::Checking_Accountv2(std::string name, double balance)
    :Accountv2(name, balance) {}
Checking_Accountv2::~Checking_Accountv2() {}


std::ostream &Checking_Accountv2::print(std::ostream &out) const{
    out << "[CHECKING ACCOUNTV2] name: " << this->name << ", balance: $" << this->balance;
    return out;
}
bool Checking_Accountv2::operator-=(const double amount){
    return this->withdraw(amount);
}

bool Checking_Accountv2::withdraw(const double amount){
    return Accountv2::withdraw(amount+this->default_fee);
}