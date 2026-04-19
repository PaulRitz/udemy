#include "Account_Util.h"

void display(const std::vector<Accountv5*> &source){
    std::cout << "========== Printing Vector ==========" << std::endl;
    for(const auto &acc : source){
        std::cout << *acc << std::endl;
    }
    std::cout << std::endl;
}
void display(const std::vector<std::unique_ptr<Accountv5>> &source){
    std::cout << "========== Printing Vector ==========" << std::endl;
    for(const auto &acc : source){
        std::cout << *acc << std::endl;
    }
    std::cout << std::endl;
}
void display(const std::vector<std::shared_ptr<Accountv5>> &source){
    std::cout << "========== Printing Vector ==========" << std::endl;
    for(const auto &acc : source){
        std::cout << *acc << std::endl;
        std::cout << "Use count: " << acc.use_count() << std::endl;
    }
    std::cout << std::endl;
}
void deposit(std::vector<Accountv5*> &source, double amount){
    std::cout << "\n========== Deposit To Accounts ==========" << std::endl;
    for(auto &acc : source){
        if(acc->deposit(amount)){
            std::cout << "Deposited " << amount << " to \n" << *acc << std::endl << std::endl;
        } else {
            std::cout << "Failed Deposit of " << amount << " to \n" << *acc << std::endl << std::endl;
        }
    }
}
void withdraw(std::vector<Accountv5*> &source, double amount){
    std::cout << "\n========== Withdraw From Accounts ==========" << std::endl;
    for(auto &acc : source){
        if(acc->withdraw(amount)){
            std::cout << "Withdrew " << amount << " from \n" << *acc << std::endl << std::endl;
        }else{
            std::cout << "Failed Withdrawal of " << amount << " from \n" << *acc << std::endl << std::endl;
        }
    }
}

