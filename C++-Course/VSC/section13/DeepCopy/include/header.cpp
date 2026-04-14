#include "header.h"

Deep0::Deep0(int d){
    data = new int;
    *data = d;
}

Deep0::Deep0(const Deep0 &source)
    :Deep0 {*source.data} {
        std::cout << "Copy constructor - shallow copy" << std::endl;
    }

Deep0::~Deep0(){
    delete data;
    std::cout << "Destructor" << std::endl;
}

int Deep0::get_data_value(){
    return *data;
}

void Deep0::set_data_value(int d){
    *data = d;
}