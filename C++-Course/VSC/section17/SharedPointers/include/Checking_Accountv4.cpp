#include "Checking_Accountv4.h"

Checking_Accountv4::Checking_Accountv4(std::string name, double balance)
    :Accountv4(name, balance) {}
Checking_Accountv4::~Checking_Accountv4() {}


std::ostream &Checking_Accountv4::print(std::ostream &out) const{
    out << "[CHECKING ACCOUNTV2] name: " << this->name << ", balance: $" << this->balance;
    return out;
}
bool Checking_Accountv4::operator-=(const double amount){
    return this->withdraw(amount);
}

bool Checking_Accountv4::withdraw(const double amount){
    return Accountv4::withdraw(amount+this->default_fee);
}