#include "Accountv3.h"

Accountv3::Accountv3(std::string name, double balance)
    :name{name},balance{balance} {
        // std::cout << "[STATUS]: Constructor called -- Accountv3" << std::endl;
        // std::cout << "[STATUS]: object successfully initialized with:" << std::endl;
        // std::cout << "[STATUS]: --Name: " << this->name << std::endl << std::endl;
        // std::cout << "[STATUS]: --Balance: " << this->balance << std::endl << std::endl;
    }
Accountv3::~Accountv3(){}

std::ostream &Accountv3::print(std::ostream &out) const {
    out << "[ACCOUNTV3] name: " << this->name << ", balance: $" << this->balance; 
    return out;
}

bool Accountv3::operator+=(const double amount){
    return this->deposit(amount);
}
bool Accountv3::operator-=(const double amount){
    return this->withdraw(amount);
}

bool Accountv3::deposit(double amount) {
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

bool Accountv3::withdraw(double amount){
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

double Accountv3::get_balance() const {
    return balance;
}