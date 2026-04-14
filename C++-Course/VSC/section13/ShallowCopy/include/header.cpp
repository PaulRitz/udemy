#include "header.h"

Shallow0::Shallow0(int d){
    data = new int;
    *data = d;
}

Shallow0::Shallow0(const Shallow0 &source)
    :data(source.data) {
        std::cout << "Copy constructor - shallow copy" << std::endl;
    }

Shallow0::~Shallow0(){
    delete data;
    std::cout << "Destructor" << std::endl;
}

int Shallow0::get_data_value(){
    return *data;
}

void Shallow0::set_data_value(int d){
    *data = d;
}