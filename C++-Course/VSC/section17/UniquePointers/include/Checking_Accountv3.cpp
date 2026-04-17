#include "Checking_Accountv3.h"

Checking_Accountv3::Checking_Accountv3(std::string name, double balance)
    :Accountv3(name, balance) {}
Checking_Accountv3::~Checking_Accountv3() {}


std::ostream &Checking_Accountv3::print(std::ostream &out) const{
    out << "[CHECKING ACCOUNTV2] name: " << this->name << ", balance: $" << this->balance;
    return out;
}
bool Checking_Accountv3::operator-=(const double amount){
    return this->withdraw(amount);
}

bool Checking_Accountv3::withdraw(const double amount){
    return Accountv3::withdraw(amount+this->default_fee);
}