#include "Checking_Accountv5.h"

Checking_Accountv5::Checking_Accountv5(std::string name, double balance)
    :Accountv5(name, balance) {}
Checking_Accountv5::~Checking_Accountv5() {}


std::ostream &Checking_Accountv5::print(std::ostream &out) const{
    out << "[CHECKING ACCOUNTV2] name: " << this->name << ", balance: $" << this->balance;
    return out;
}
bool Checking_Accountv5::operator-=(const double amount){
    return this->withdraw(amount);
}

bool Checking_Accountv5::withdraw(const double amount){
    return Accountv5::withdraw(amount+this->default_fee);
}