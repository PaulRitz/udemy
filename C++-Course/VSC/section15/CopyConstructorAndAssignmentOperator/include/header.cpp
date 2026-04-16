#include "header.h"
Base3::Base3()
    :value{0} {
        std::cout << "Base3 -- no-args constructor" << std::endl;
    }
Base3::Base3(int x)
    :value{x} {
        std::cout << "Base3 -- (int) overloaded constructor" << std::endl;
    }
Base3::Base3(const Base3 &source)
    :value{source.value} {
        std::cout << "Base3 -- copy constructor" << std::endl;
    }
Base3::~Base3(){
    std::cout << "Base3 --  destructor" << std::endl;
}

Base3 &Base3::operator=(const Base3 &rhs) {
    std::cout << "Base3 -- operator=" << std::endl;
    if(this == &rhs){
        return *this;
    }
    this->value = rhs.value;
    return *this;
}


Derived3::Derived3()
    :Base3{}, doubled_value{0} {
        std::cout << "Derived3 -- no-args constructor" << std::endl;
    }
Derived3::Derived3(int x)
    :Base3{x}, doubled_value{x*2} {
        std::cout << "Derived3 -- (int) overloaded constructor" << std::endl;
    }
Derived3::Derived3(const Derived3 &source)
    :Base3{source},doubled_value{source.doubled_value} {
        std::cout << "Derived3 -- copy constructor" << std::endl;
    }
Derived3::~Derived3(){
    std::cout << "Derived3 -- destructor" << std::endl;
}

Derived3 &Derived3::operator=(const Derived3 &rhs){
    std::cout << "Derived3 -- operator=" << std::endl;
    if(this == &rhs){
        return *this;
    }
    this->doubled_value = rhs.doubled_value;
    Base3::operator=(rhs);
    return *this;
}