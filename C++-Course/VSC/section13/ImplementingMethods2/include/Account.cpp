#include "Account.h"

void Account::set_name(std::string n){
    name = n;
    return;
}
std::string Account::get_name(){
    return name;
}

bool Account::deposit(double amount){
    // if balance valid
    balance += amount;
    return true;
}
bool Account::withdraw(double amount){
    if(balance-amount>=0){
        balance -= amount;
        return true;
    }
    else{
        return false;
    }
}