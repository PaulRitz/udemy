#include "header.h"

void Base0::display(){
    std::cout << a << ", " << b << ", " << c << std::endl;
}

void Derived0::access_base_members(){
    a = 100;
    b = 200;
    // c = 300; // not accessible
}