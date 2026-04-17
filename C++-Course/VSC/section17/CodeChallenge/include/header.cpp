#include "header.h"

Test4::Test4()
    :Test4(0) {
        std::cout << "-- Test4 -- constructor (" << this->data << ")" << std::endl;
    }
Test4::Test4(int data)
    :data{data} {
        std::cout << "-- Test4 -- constructor (" << this->data << ")" << std::endl;
    }
Test4::~Test4() {
    std::cout << "-- Test4 -- destructor (" << this->data << ")" << std::endl;
}

int Test4::get_data() const{
    return this->data;
}