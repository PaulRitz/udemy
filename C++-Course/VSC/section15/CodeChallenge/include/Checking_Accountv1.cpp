#include "Checking_Accountv1.h"

Checking_Accountv1::Checking_Accountv1(std::string name, double balance)
    :Accountv1(name, balance) {}


std::ostream &operator<<(std::ostream &out, const Checking_Accountv1 &source){
    out << "[CHECKING ACCOUNT] name: " << source.name << ": $" << source.balance;
    return out;
}

bool Checking_Accountv1::withdraw(double amount){
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