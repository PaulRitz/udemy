#include "Account_Util.h"

void display(const std::vector<Accountv1> &source){
    std::cout << "\n========== Accounts ==========" << std::endl;
    for(const auto &acc : source){
        std::cout << acc << std::endl;
    }
    std::cout << std::endl;
}
void deposit(std::vector<Accountv1> &source, double amount){
    std::cout << "\n========== Deposit To Accounts ==========" << std::endl;
    for(auto &acc : source){
        if(acc.deposit(amount)){
            std::cout << "Deposited " << amount << " to \n" << acc << std::endl << std::endl;
        } else {
            std::cout << "Failed Deposit of " << amount << " to \n" << acc << std::endl << std::endl;
        }
    }
}
void withdraw(std::vector<Accountv1> &source, double amount){
    std::cout << "\n========== Withdraw From Accounts ==========" << std::endl;
    for(auto &acc : source){
        if(acc.withdraw(amount)){
            std::cout << "Withdrew " << amount << " from \n" << acc << std::endl << std::endl;
        }else{
            std::cout << "Failed Withdrawal of " << amount << " from \n" << acc << std::endl << std::endl;
        }
    }
}


void display(const std::vector<Savings_Accountv1> &source){
    std::cout << "\n========== Savings Accounts ==========" << std::endl;
    for(const auto &acc : source){
        std::cout << acc << std::endl;
    }
    std::cout << std::endl;
}
void deposit(std::vector<Savings_Accountv1> &source, double amount){
    std::cout << "\n========== Deposit To Savings Accounts ==========" << std::endl;
    for(auto &acc : source){
        if(acc.deposit(amount)){
            std::cout << "Deposited " << amount << " to \n" << acc << std::endl << std::endl;
        } else {
            std::cout << "Failed Deposit of " << amount << " to \n" << acc << std::endl << std::endl;
        }
    }
}
void withdraw(std::vector<Savings_Accountv1> &source, double amount){
    std::cout << "\n========== Withdraw From Savings Accounts ==========" << std::endl;
    for(auto &acc : source){
        if(acc.withdraw(amount)){
            std::cout << "Withdrew " << amount << " from \n" << acc << std::endl << std::endl;
        }else{
            std::cout << "Failed Withdrawal of " << amount << " from \n" << acc << std::endl << std::endl;
        }
    }
}


void display(const std::vector<Trust_Accountv1> &source){
    std::cout << "\n========== Trust Accounts ==========" << std::endl;
    for(const auto &acc : source){
        std::cout << acc << std::endl;
    }
    std::cout << std::endl;
}
void deposit(std::vector<Trust_Accountv1> &source, double amount){
    std::cout << "\n========== Deposit To Trust Accounts ==========" << std::endl;
    for(auto &acc : source){
        if(acc.deposit(amount)){
            std::cout << "Deposited " << amount << " to \n" << acc << std::endl << std::endl;
        } else {
            std::cout << "Failed Deposit of " << amount << " to \n" << acc << std::endl << std::endl;
        }
    }
}
void withdraw(std::vector<Trust_Accountv1> &source, double amount){
    std::cout << "\n========== Withdraw From Trust Accounts ==========" << std::endl;
    for(auto &acc : source){
        if(acc.withdraw(amount)){
            std::cout << "Withdrew " << amount << " from \n" << acc << std::endl << std::endl;
        }else{
            std::cout << "Failed Withdrawal of " << amount << " from \n" << acc << std::endl << std::endl;
        }
    }
}


void display(const std::vector<Checking_Accountv1> &source){
    std::cout << "\n========== Checking Accounts ==========" << std::endl;
    for(const auto &acc : source){
        std::cout << acc << std::endl;
    }
    std::cout << std::endl;
}
void deposit(std::vector<Checking_Accountv1> &source, double amount){
    std::cout << "\n========== Deposit To Checking Accounts ==========" << std::endl;
    for(auto &acc : source){
        if(acc.deposit(amount)){
            std::cout << "Deposited " << amount << " to \n" << acc << std::endl << std::endl;
        } else {
            std::cout << "Failed Deposit of " << amount << " to \n" << acc << std::endl << std::endl;
        }
    }
}
void withdraw(std::vector<Checking_Accountv1> &source, double amount){
    std::cout << "\n========== Withdraw From Checking Accounts ==========" << std::endl;
    for(auto &acc : source){
        if(acc.withdraw(amount)){
            std::cout << "Withdrew " << amount << " from \n" << acc << std::endl << std::endl;
        }else{
            std::cout << "Failed Withdrawal of " << amount << " from \n" << acc << std::endl << std::endl;
        }
    }
}