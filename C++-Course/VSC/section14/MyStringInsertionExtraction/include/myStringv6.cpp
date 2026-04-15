#include "myStringv6.h"

myStringv6::myStringv6()
    :str{nullptr}{
        str = new char[1];
        *str = '\0';
    }
myStringv6::myStringv6(const char* s)
    :str{nullptr} {
        if(s==nullptr){
            str == new char [1];
            *str = '\0';
        } else {
            str = new char [std::strlen(s)+1];
            std::strcpy(str,s);
        }
    }
myStringv6::myStringv6(const myStringv6 &source)
    :str{nullptr} {
        str = new char [std::strlen(source.str)+1];
        std::strcpy(str, source.str);
        std::cout << "Copy constructor used" << std::endl;
    }
myStringv6::myStringv6(myStringv6 &&source)
    :str(source.str){
        source.str = nullptr;
        std::cout << "Move constructor used" << std::endl;
    }
myStringv6::~myStringv6(){
    // if(str==nullptr){
    //     std::cout << "calling destructor for myStringv6: nullptr" << std::endl;
    // }else{    
    // std::cout << "calling destructor for myStringv6: " << str << std::endl;
    // }    
delete [] str;
}

void myStringv6::display()const{
    std::cout << str << ": " << get_length() << std::endl;
}
int myStringv6::get_length()const{
    return strlen(str);
}
const char *myStringv6::get_str()const{
    return str;
}

myStringv6 &myStringv6::operator=(const myStringv6 &rhs){
    std::cout << "Copy assignment" << std::endl;
    if(this == &rhs){
        return *this;
    }
    delete [] this->str;
    str = new char [std::strlen(rhs.str)+1];
    std::strcpy(this->str, rhs.str);
    return *this;
}
myStringv6 &myStringv6::operator=(myStringv6 &&rhs){
    std::cout << "Using move assignment" << std::endl;
    if(this == &rhs){
        return *this;
    }
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

bool operator==(const myStringv6 &lhs, const myStringv6 &rhs){
    return(std::strcmp(lhs.str,rhs.str));
}
myStringv6 operator-(const myStringv6 &obj){
    char* buffer = new char[std::strlen(obj.str)+1];
    std::strcpy(buffer,obj.str);
    for(size_t i{0}; i < std::strlen(buffer) ; i++){
        buffer[i] = std::tolower(buffer[i]);
    }
    myStringv6 temp {buffer};
    delete [] buffer;
    return temp;
}
myStringv6 operator+(const myStringv6 &lhs, const myStringv6 &rhs){
    char* buffer = new char [std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(buffer, lhs.str);
    std::strcat(buffer, rhs.str);
    myStringv6 temp {buffer};
    delete [] buffer;
    return temp;
}

std::ostream &operator<<(std::ostream &out, const myStringv6 &rhs){
    out << rhs.str;
    return out;
}
std::istream &operator>>(std::istream &in,  myStringv6 &rhs){
    char *buffer = new char [1000];
    in >> buffer;
    rhs = myStringv6{buffer};
    delete []buffer;
    return in;
}
