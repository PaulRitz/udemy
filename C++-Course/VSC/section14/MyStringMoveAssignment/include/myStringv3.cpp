#include "myStringv3.h"

myStringv3::myStringv3()
    :str{nullptr}{
        str = new char[1];
        *str = '\0';
    }
myStringv3::myStringv3(const char* s)
    :str{nullptr} {
        if(s==nullptr){
            str == new char [1];
            *str = '\0';
        } else {
            str = new char [std::strlen(s)+1];
            std::strcpy(str,s);
        }
    }
myStringv3::myStringv3(const myStringv3 &source)
    :str{nullptr} {
        str = new char [std::strlen(source.str)+1];
        std::strcpy(str, source.str);
        std::cout << "Copy constructor used" << std::endl;
    }
myStringv3::myStringv3(myStringv3 &&source)
    :str(source.str){
        source.str = nullptr;
        std::cout << "Move constructor used" << std::endl;
    }
myStringv3::~myStringv3(){
    if(str==nullptr){
        std::cout << "calling destructor for myStringv3: nullptr" << std::endl;
    }else{    
    std::cout << "calling destructor for myStringv3: " << str << std::endl;
    }    
delete [] str;
}

void myStringv3::display()const{
    std::cout << str << ": " << get_length() << std::endl;
}
int myStringv3::get_length()const{
    return strlen(str);
}
const char *myStringv3::get_str()const{
    return str;
}

myStringv3 &myStringv3::operator=(const myStringv3 &rhs){
    std::cout << "Copy assignment" << std::endl;
    if(this == &rhs){
        return *this;
    }
    delete [] this->str;
    str = new char [std::strlen(rhs.str)+1];
    std::strcpy(this->str, rhs.str);
    return *this;
}
myStringv3 &myStringv3::operator=(myStringv3 &&rhs){
    std::cout << "Using move assignment" << std::endl;
    if(this == &rhs){
        return *this;
    }
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}
