#include "header.h"

std::ostream &operator<<(std::ostream &out, const I_printable0 &source){
    source.print(out);
    return out;
}

void Account12::withdraw(double amount){
    std::cout << "In Account12::withdraw" << std::endl;
}
void Account12::print(std::ostream &out) const{
    out << "Account12 -- Display";
}
Account12::~Account12(){
    // std::cout << "Account12::destructor" << std::endl;
}

void Trust4::withdraw(double amount){
    std::cout << "In Trust4::withdraw" << std::endl;
}
void Trust4::print(std::ostream &out) const{
    out << "Trust4 -- Display";
}
Trust4::~Trust4(){
    // std::cout << "Trust4::destructor" << std::endl;
}

void Savings4::withdraw(double amount){
    std::cout << "In Savings4::withdraw" << std::endl;
}
void Savings4::print(std::ostream &out) const{
    out << "Savings4 -- Display";
}
Savings4::~Savings4(){
    // std::cout << "Savings4::destructor" << std::endl;
}

void Checking4::withdraw(double amount){
    std::cout << "In Checking4::withdraw" << std::endl;
}
void Checking4::print(std::ostream &out) const{
    out << "Checking4 -- Display";
}
Checking4::~Checking4(){
    // std::cout << "Checking4::destructor" << std::endl;
}

void Dog6::print(std::ostream &out) const{
    out << "Woof Woof";
}
Dog6::~Dog6() {}