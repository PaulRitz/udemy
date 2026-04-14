#include "myStringv1.h"

myStringv1::myStringv1()
    :str{nullptr}{
        str = new char[1];
        *str = '\0';
    }
myStringv1::myStringv1(const char* s)
    :str{nullptr} {
        if(s==nullptr){
            str == new char [1];
            *str = '\0';
        } else {
            str = new char [std::strlen(s)+1];
            std::strcpy(str,s);
        }
    }
myStringv1::myStringv1(const myStringv1 &source)
    :str{nullptr} {
        str = new char [std::strlen(source.str)+1];
        std::strcpy(str, source.str);
    }
myStringv1::~myStringv1(){
    delete [] str;
}

void myStringv1::display()const{
    std::cout << str << ": " << get_length() << std::endl;
}
int myStringv1::get_length()const{
    return strlen(str);
}
const char *myStringv1::get_str()const{
    return str;
}