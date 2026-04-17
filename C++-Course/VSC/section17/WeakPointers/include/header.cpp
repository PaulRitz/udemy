#include "header.h"
A::A() {
    std::cout << "A -- Constructor" << std::endl;
}
A::~A() {
    std::cout << "A -- Destructor" << std::endl;
}
void A::set_B(std::shared_ptr<B> &b){
    b_ptr = b;
}

B::B() {
    std::cout << "B -- Constructor" << std::endl;
}
B::~B() {
    std::cout << "B -- Destructor" << std::endl;
}
void B::set_A(std::shared_ptr<A> &a){
    a_ptr = a;
}