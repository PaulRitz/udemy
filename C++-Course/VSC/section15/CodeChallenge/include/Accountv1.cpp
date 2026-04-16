#include "Accountv1.h"

Accountv1::Accountv1(std::string name, double balance)
    :name{name},balance{balance} {
        // std::cout << "[STATUS]: Constructor called -- Accountv1" << std::endl;
        // std::cout << "[STATUS]: object successfully initialized with:" << std::endl;
        // std::cout << "[STATUS]: --Name: " << this->name << std::endl << std::endl;
        // std::cout << "[STATUS]: --Balance: " << this->balance << std::endl << std::endl;
    }

std::ostream &operator<<(std::ostream &out, const Accountv1 &source){
    out << "[Account] " << source.name << ": " << source.balance;
    return out;
}

bool Accountv1::deposit(double amount){
    if(amount < 0){
        // std::cout << "[ERROR]: deposit not successfull" << std::endl,
        // std::cout << "[ERROR]: No valid account balance found" << std::endl << std::endl;
        return false;
    } else {
        // std::cout << "[STATUS]: deposit successfull" << std::endl;
        // std::cout << "[STATUS]: balance now: " << this->balance  << "$" << std::endl << std::endl;
        this->balance += amount;
        return true;
    }
}

bool Accountv1::withdraw(double amount){
    if(balance-amount>=0){
        this->balance-=amount;
        // std::cout << "[STATUS]: withdrawal successfull" << std::endl;
        // std::cout << "[STATUS]: balance now: " << this->balance << "$" << std::endl << std::endl;
        return true;
    }else{
        // std::cout << "[ERROR]: withdrawal unsuccessfull" << std::endl;
        // std::cout << "[ERROR]: Insufficient funds" << std::endl << std::endl;
        return false;
    }
}

double Accountv1::get_balance() const {
    return balance;
}