#include "header.h"

Test3::Test3()
    :Test3(0) {
        std::cout << "Test3 -- constructor (" << this->data << ")" << std::endl;
    }
Test3::Test3(int data)
    :data{data} {
        std::cout << "Test3 -- constructor (" << this->data << ")" << std::endl;
    }
Test3::~Test3() {
    std::cout << "Test3 -- destructor (" << this->data << ")" << std::endl; 
}

int Test3::get_data() const{
    return this->data;
}