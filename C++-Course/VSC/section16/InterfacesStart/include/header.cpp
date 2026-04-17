#include "header.h"

void Account11::withdraw(double amount){
    std::cout << "In Account11::withdraw" << std::endl;
}
Account11::~Account11(){
    std::cout << "Account11::destructor" << std::endl;
}
std::ostream &operator<<(std::ostream &out, const Account11 &source){
    out << "Account11 -- Display";
    return out;
}

void Trust3::withdraw(double amount){
    std::cout << "In Trust3::withdraw" << std::endl;
}
Trust3::~Trust3(){
    std::cout << "Trust3::destructor" << std::endl;
}
std::ostream &operator<<(std::ostream &out, const Trust3 &source){
    out << "Trust3 -- Display";
    return out;
}

void Savings3::withdraw(double amount){
    std::cout << "In Savings3::withdraw" << std::endl;
}
Savings3::~Savings3(){
    std::cout << "Savings3::destructor" << std::endl;
}
std::ostream &operator<<(std::ostream &out, const Savings3 &source){
    out << "Savings3 -- Display";
    return out;
}

void Checking3::withdraw(double amount){
    std::cout << "In Checking3::withdraw" << std::endl;
}
Checking3::~Checking3(){
    std::cout << "Checking3::destructor" << std::endl;
}
std::ostream &operator<<(std::ostream &out, const Checking3 &source){
    out << "Checking3 -- Display";
    return out;
}