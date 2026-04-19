#include "Accountv6.h"

Accountv6::Accountv6(std::string name, double balance)
    :name{name},balance{balance} {
        if(balance < 0.0){
            throw IllegalBalanceException1{};
        }
        // std::cout << "[STATUS]: Constructor called -- Accountv6" << std::endl;
        // std::cout << "[STATUS]: object successfully initialized with:" << std::endl;
        // std::cout << "[STATUS]: --Name: " << this->name << std::endl << std::endl;
        // std::cout << "[STATUS]: --Balance: " << this->balance << std::endl << std::endl;
    }
Accountv6::~Accountv6(){}

std::ostream &Accountv6::print(std::ostream &out) const {
    out << "[Accountv6] name: " << this->name << ", balance: $" << this->balance; 
    return out;
}

bool Accountv6::operator+=(const double amount){
    return this->deposit(amount);
}
bool Accountv6::operator-=(const double amount){
    return this->withdraw(amount);
}

bool Accountv6::deposit(double amount) {
    if(amount < 0){
        std::cout << "[ERROR]: deposit not successfull" << std::endl,
        std::cout << "[ERROR]: No valid account balance found" << std::endl << std::endl;
        return false;
    } else {
        this->balance += amount;
        std::cout << "[STATUS]: deposit successfull" << std::endl;
        std::cout << "[STATUS]: balance now: $" << this->balance << std::endl << std::endl;
        return true;
    }
}

bool Accountv6::withdraw(double amount){
    if(this->balance-amount<0){
        throw InsufficientFundsException0{};
    }
    this->balance-=amount;
    std::cout << "[STATUS]: withdrawal successfull" << std::endl;
    std::cout << "[STATUS]: balance now: $" << this->balance << std::endl << std::endl;

    // if(this->balance-amount>=0){
    //     this->balance-=amount;
    //     std::cout << "[STATUS]: withdrawal successfull" << std::endl;
    //     std::cout << "[STATUS]: balance now: $" << this->balance << std::endl << std::endl;
    //     return true;
    // }else{
    //     std::cout << "[ERROR]: withdrawal unsuccessfull" << std::endl;
    //     std::cout << "[ERROR]: Insufficient funds" << std::endl << std::endl;
    //     return false;
    // }
    return true;
}

double Accountv6::get_balance() const {
    return balance;
}