#include "Test0.h"

Test0::Test0(int data)
    :data{data} {
        std::cout << "Test0 -- constructor (" << this->data << ")" << std::endl;
    }
Test0::~Test0() {
    std::cout << "Test0 -- destructor (" << this->data << ")" << std::endl; 
}