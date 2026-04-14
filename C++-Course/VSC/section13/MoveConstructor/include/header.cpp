#include "header.h"

Move0::Move0(int d){
    data = new int;
    *data = d;
    std::cout << "Constructor for: " << d << std::endl;
}

Move0::Move0(const Move0 &source)
    :Move0{*source.data} {
        std::cout << "Copy constructor - deep copy for: " << *data << std::endl;
    }

Move0::Move0(Move0 &&source)noexcept
    :data{source.data} {
        source.data = nullptr;
        std::cout << "Move constructor - moving resource: " << *data << std::endl;
    }

Move0::~Move0(){
    if(data != nullptr){
        std::cout << "Destructor freeing data for: " << *data << std::endl;
    }else{
        std::cout << "Destructor freeing data for nullptr" << std::endl;
    }
    delete data;
}