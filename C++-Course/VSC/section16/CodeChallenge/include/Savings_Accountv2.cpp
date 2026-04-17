#include "Savings_Accountv2.h"

Savings_Accountv2::Savings_Accountv2(std::string name, double balance, double interest_rate)
    :Accountv2(name, balance), interest_rate{interest_rate} {
        // std::cout << "[STATUS]: Constructor called -- Savings_Account1" << std::endl;
        // std::cout << "[STATUS]: object successfully initialized with:" << std::endl;
        // std::cout << "[STATUS]: --Name: " << this->name << std::endl;
        // std::cout << "[STATUS]: --Balance: " << this->balance << std::endl;
        // std::cout << "[STATUS]: --Interest rate: " << this->interest_rate << std::endl << std::endl;
    }
Savings_Accountv2::~Savings_Accountv2() {}

std::ostream &Savings_Accountv2::print(std::ostream &out) const{
    out << "[SAVINGS ACCOUNTV2] name: " << this->name << ", balance: $" << this->balance << ", interest rate: " << this->interest_rate << "%";
    return out;
}

bool Savings_Accountv2::operator+=(const double amount){
    return this->deposit(amount);
}

bool Savings_Accountv2::deposit(double amount){
    // std::cout << "Savings Account deposit called with " << amount << std::endl;
    amount +=this->interest_rate*amount/100;
    return Accountv2::deposit(amount);
}