#include "header.h"

void Base4::say_hello() const {
    std::cout << "Hello - I'm a Base4 class object" << std::endl;
}

void Derived4::say_hello() const {
    std::cout << "Hello - I'm a Derived4 class object" << std::endl;
}
