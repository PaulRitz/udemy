#include "header.h"
Base2::Base2()
    :value{0} {
        std::cout << "Base2 -- no-args constructor" << std::endl;
    }
Base2::Base2(int x)
    :value{x} {
        std::cout << "Base2 -- (int) overloaded constructor" << std::endl;
    }
Base2::~Base2(){
    std::cout << "Base2 --  destructor" << std::endl;
}

Derived2::Derived2()
    :Base2{}, doubled_value{0} {
        std::cout << "Derived2 -- no-args constructor" << std::endl;
    }
Derived2::Derived2(int x)
    :Base2{x}, doubled_value{x*2} {
        std::cout << "Derived2 -- (int) overloaded constructor" << std::endl;
    }
Derived2::~Derived2(){
    std::cout << "Derived2 -- destructor" << std::endl;
}