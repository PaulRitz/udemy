#include "Accountv4.h"

Accountv4::Accountv4(std::string name, double balance)
    :name{name},balance{balance} {
        // std::cout << "[STATUS]: Constructor called -- Accountv4" << std::endl;
        // std::cout << "[STATUS]: object successfully initialized with:" << std::endl;
        // std::cout << "[STATUS]: --Name: " << this->name << std::endl << std::endl;
        // std::cout << "[STATUS]: --Balance: " << this->balance << std::endl << std::endl;
    }
Accountv4::~Accountv4(){}

std::ostream &Accountv4::print(std::ostream &out) const {
    out << "[ACCOUNTV4] name: " << this->name << ", balance: $" << this->balance; 
    return out;
}

bool Accountv4::operator+=(const double amount){
    return this->deposit(amount);
}
bool Accountv4::operator-=(const double amount){
    return this->withdraw(amount);
}

bool Accountv4::deposit(double amount) {
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

bool Accountv4::withdraw(double amount){
    if(balance-amount>=0){
        this->balance-=amount;
        std::cout << "[STATUS]: withdrawal successfull" << std::endl;
        std::cout << "[STATUS]: balance now: $" << this->balance << std::endl << std::endl;
        return true;
    }else{
        std::cout << "[ERROR]: withdrawal unsuccessfull" << std::endl;
        std::cout << "[ERROR]: Insufficient funds" << std::endl << std::endl;
        return false;
    }
}

double Accountv4::get_balance() const {
    return balance;
}