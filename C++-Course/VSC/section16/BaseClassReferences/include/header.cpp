#include "header.h"

void Account10::withdraw(double amount){
    std::cout << "In Account10::withdraw" << std::endl;
}
Account10::~Account10(){
    std::cout << "Account10::destructor" << std::endl;
}
void Trust2::withdraw(double amount){
    std::cout << "In Trust2::withdraw" << std::endl;
}
Trust2::~Trust2(){
    std::cout << "Trust2::destructor" << std::endl;
}
void Savings2::withdraw(double amount){
    std::cout << "In Savings2::withdraw" << std::endl;
}
Savings2::~Savings2(){
    std::cout << "Savings2::destructor" << std::endl;
}
void Checking2::withdraw(double amount){
    std::cout << "In Checking2::withdraw" << std::endl;
}
Checking2::~Checking2(){
    std::cout << "Checking2::destructor" << std::endl;
}