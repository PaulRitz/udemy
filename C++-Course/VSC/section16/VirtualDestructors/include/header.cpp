#include "header.h"

void Account9::withdraw(double amount){
    std::cout << "In Account9::withdraw" << std::endl;
}
Account9::~Account9(){
    std::cout << "Account9::destructor" << std::endl;
}
void Trust1::withdraw(double amount){
    std::cout << "In Trust1::withdraw" << std::endl;
}
Trust1::~Trust1(){
    std::cout << "Trust1::destructor" << std::endl;
}
void Savings1::withdraw(double amount){
    std::cout << "In Savings1::withdraw" << std::endl;
}
Savings1::~Savings1(){
    std::cout << "Savings1::destructor" << std::endl;
}
void Checking1::withdraw(double amount){
    std::cout << "In Checking1::withdraw" << std::endl;
}
Checking1::~Checking1(){
    std::cout << "Checking1::destructor" << std::endl;
}