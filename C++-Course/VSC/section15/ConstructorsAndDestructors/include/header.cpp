#include "header.h"
Base1::Base1()
    :value{0} {
        std::cout << "Base1 -- no-args constructor" << std::endl;
    }
Base1::Base1(int x)
    :value{x} {
        std::cout << "Base1 -- (int) overloaded constructor" << std::endl;
    }
Base1::~Base1(){
    std::cout << "Base1 --  destructor" << std::endl;
}

Derived1::Derived1()
    :doubled_value{0} {
        std::cout << "Derived1 -- no-args constructor" << std::endl;
    }
Derived1::Derived1(int x)
    :doubled_value{x*2} {
        std::cout << "Derived1 -- (int) overloaded constructor" << std::endl;
    }
Derived1::~Derived1(){
    std::cout << "Derived1 -- destructor";
}