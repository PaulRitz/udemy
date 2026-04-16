#include "Account7.h"

Account7::Account7()
    :Account7(0.0) {}
Account7::Account7(double balance)
    :balance{balance} {
        std::cout << "[STATUS]: Constructor called -- Account1" << std::endl;
        std::cout << "[STATUS]: object successfully initialized with:" << std::endl;
        std::cout << "[STATUS]: --Balance: " << this->balance << std::endl << std::endl;
    }

std::ostream &operator<<(std::ostream &out, const Account7 &source){
    out << "Account balance: " << source.balance << "$";
    return out;
}

void Account7::deposit(double amount){
    std::cout << "Account deposit called with " << amount << std::endl;
    this->balance += amount;
    std::cout << "[STATUS]: deposit successfull" << std::endl;
    std::cout << "[STATUS]: balance now: " << this->balance << std::endl << std::endl;
}
void Account7::withdraw(double amount){
    std::cout << "Account withdraw called with " << amount << std::endl;
    if(this->balance-amount>=0){
        this->balance -= amount;
        std::cout << "[STATUS]: withdrawal successfull" << std::endl;
        std::cout << "[STATUS]: balance now: " << this->balance << "$" << std::endl << std::endl;
    }
    else {
        std::cout << "[ERROR]: withdrawal unsuccessfull" << std::endl;
        std::cout << "[ERROR]: Insufficient funds" << std::endl << std::endl;
    }
}