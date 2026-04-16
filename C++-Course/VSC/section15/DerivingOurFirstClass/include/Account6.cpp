#include "Account6.h"

Account6::Account6() {}
Account6::~Account6() {}

void Account6::deposit(double amount){
    std::cout << "Account deposit called with " << amount << std::endl;
}
void Account6::withdraw(double amount){
    std::cout << "Account withdraw called with " << amount << std::endl;
}