#include "Trust_Accountv6.h"

Trust_Accountv6::Trust_Accountv6(std::string name, double balance, double interest_rate)
    :Savings_Accountv6(name, balance, interest_rate), withdrawal_counter{0} {}
Trust_Accountv6::~Trust_Accountv6() {}



std::ostream &Trust_Accountv6::print(std::ostream &out) const{
    out << "[TRUST Accountv6] name: " << this->name << ", balance: $" << this->balance << ", interest rate: " << this->interest_rate << "%";
    return out;
}
bool Trust_Accountv6::operator+=(const double amount){
    return this->deposit(amount);
}
bool Trust_Accountv6::operator-=(const double amount){
    return this->withdraw(amount);
}

bool Trust_Accountv6::withdraw(double amount){
    if(this->withdrawal_counter > 3){
        std::cout << "[ERROR]: withdrawal unsuccessfull" << std::endl;
        std::cout << "[ERROR]: Too many withdrawals, come back next year" << std::endl << std::endl;
        return false;
    }else{
        if(Accountv6::withdraw(amount)){
            this->withdrawal_counter++;
            return true;
        }else{
            return false;
        }
    }
}

bool Trust_Accountv6::deposit(double amount){
    if(amount >= 5000.0){
        amount += 50.0;
    }
    return Savings_Accountv6::deposit(amount);
}