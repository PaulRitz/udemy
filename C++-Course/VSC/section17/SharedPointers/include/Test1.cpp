#include "Test1.h"

Test1::Test1(int data)
    :data{data} {
        std::cout << "Test1 -- constructor (" << this->data << ")" << std::endl;
    }
Test1::~Test1() {
    std::cout << "Test1 -- destructor (" << this->data << ")" << std::endl; 
}