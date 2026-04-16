#include "Savings_Account1.h"

Savings_Account1::Savings_Account1()
    :Savings_Account1(0.0, 0.0) {}
Savings_Account1::Savings_Account1(double balance, double interest_rate)
    :Account7(balance),interest_rate{interest_rate} {
        std::cout << "[STATUS]: Constructor called -- Savings_Account1" << std::endl;
        std::cout << "[STATUS]: object successfully initialized with:" << std::endl;
        std::cout << "[STATUS]: --Balance: " << this->balance << std::endl;
        std::cout << "[STATUS]: --Interest rate: " << this->interest_rate << std::endl << std::endl;
    }

std::ostream &operator<<(std::ostream &out, const Savings_Account1 &source){
    out << "Account balance: " << source.balance << "; " << "Account interest rate: " << source.interest_rate;
    return out;
}

void Savings_Account1::deposit(double amount) {
    std::cout << "Savings Account deposit called with " << amount << std::endl;
    amount = amount + (amount * interest_rate/100);
    Account7::deposit(amount);
    std::cout << "[STATUS]: deposit successfull" << std::endl;
    std::cout << "[STATUS]: balance now: " << this->balance << std::endl << std::endl;
}
