#include "myStringv2.h"

myStringv2::myStringv2()
    :str{nullptr}{
        str = new char[1];
        *str = '\0';
    }
myStringv2::myStringv2(const char* s)
    :str{nullptr} {
        if(s==nullptr){
            str == new char [1];
            *str = '\0';
        } else {
            str = new char [std::strlen(s)+1];
            std::strcpy(str,s);
        }
    }
myStringv2::myStringv2(const myStringv2 &source)
    :str{nullptr} {
        str = new char [std::strlen(source.str)+1];
        std::strcpy(str, source.str);
    }
myStringv2::~myStringv2(){
    delete [] str;
}

void myStringv2::display()const{
    std::cout << str << ": " << get_length() << std::endl;
}
int myStringv2::get_length()const{
    return strlen(str);
}
const char *myStringv2::get_str()const{
    return str;
}

myStringv2 &myStringv2::operator=(const myStringv2 &rhs){
    std::cout << "Copy assignment" << std::endl;
    if(this == &rhs){
        return *this;
    }
    delete [] this->str;
    str = new char [std::strlen(rhs.str)+1];
    std::strcpy(this->str, rhs.str);
    return *this;
}