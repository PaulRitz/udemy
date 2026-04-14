#include "Account.h"

void Account5::set_name(std::string n){
    name = n;
    return;
}
std::string Account5::get_name(){
    return name;
}

bool Account5::deposit(double amount){
    // if balance valid
    balance += amount;
    return true;
}
bool Account5::withdraw(double amount){
    if(balance-amount>=0){
        balance -= amount;
        return true;
    }
    else{
        return false;
    }
}