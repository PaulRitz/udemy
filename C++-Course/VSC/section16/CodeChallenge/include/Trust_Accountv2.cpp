#include "Trust_Accountv2.h"

Trust_Accountv2::Trust_Accountv2(std::string name, double balance, double interest_rate)
    :Savings_Accountv2(name, balance, interest_rate), withdrawal_counter{0} {}
Trust_Accountv2::~Trust_Accountv2() {}



std::ostream &Trust_Accountv2::print(std::ostream &out) const{
    out << "[TRUST ACCOUNTV2] name: " << this->name << ", balance: $" << this->balance << ", interest rate: " << this->interest_rate << "%";
    return out;
}
bool Trust_Accountv2::operator+=(const double amount){
    return this->deposit(amount);
}
bool Trust_Accountv2::operator-=(const double amount){
    return this->withdraw(amount);
}

bool Trust_Accountv2::withdraw(double amount){
    if(this->withdrawal_counter > 3){
        std::cout << "[ERROR]: withdrawal unsuccessfull" << std::endl;
        std::cout << "[ERROR]: Too many withdrawals, come back next year" << std::endl << std::endl;
        return false;
    }else{
        if(Accountv2::withdraw(amount)){
            this->withdrawal_counter++;
            return true;
        }else{
            return false;
        }
    }
}

bool Trust_Accountv2::deposit(double amount){
    if(amount >= 5000.0){
        amount += 50.0;
    }
    return Savings_Accountv2::deposit(amount);
}