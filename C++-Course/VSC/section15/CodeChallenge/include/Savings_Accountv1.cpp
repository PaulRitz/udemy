#include "Savings_Accountv1.h"

Savings_Accountv1::Savings_Accountv1(std::string name, double balance, double interest_rate)
    :Accountv1(name, balance), interest_rate{interest_rate} {
        // std::cout << "[STATUS]: Constructor called -- Savings_Account1" << std::endl;
        // std::cout << "[STATUS]: object successfully initialized with:" << std::endl;
        // std::cout << "[STATUS]: --Name: " << this->name << std::endl;
        // std::cout << "[STATUS]: --Balance: " << this->balance << std::endl;
        // std::cout << "[STATUS]: --Interest rate: " << this->interest_rate << std::endl << std::endl;
    }

std::ostream &operator<<(std::ostream &out, const Savings_Accountv1 &source){
    out << "[SAVINGS ACCOUNT] name: " << source.name << ", balance: " << source.balance << ", interest rate: " << source.interest_rate << "%";
    return out;
}
bool Savings_Accountv1::operator+=(const double amount){
    return this->deposit(amount);
}

bool Savings_Accountv1::deposit(double amount){
    // std::cout << "Savings Account deposit called with " << amount << std::endl;
    amount +=this->interest_rate*amount/100;
    return Accountv1::deposit(amount);
}