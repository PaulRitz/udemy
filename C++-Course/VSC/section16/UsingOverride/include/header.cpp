#include "header.h"

void Base4::say_hello() const {
    std::cout << "Hello - I'm a Base4 class object" << std::endl;
}
Base4::~Base4(){
    std::cout << "Base4::destructor" << std::endl;
}

void Derived4::say_hello() const {
    std::cout << "Hello - I'm a Derived4 class object" << std::endl;
}
Derived4::~Derived4(){
    std::cout << "Derived4::destructor" << std::endl;
}