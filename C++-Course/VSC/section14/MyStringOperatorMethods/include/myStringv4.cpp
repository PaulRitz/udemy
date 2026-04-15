#include "myStringv4.h"

myStringv4::myStringv4()
    :str{nullptr}{
        str = new char[1];
        *str = '\0';
    }
myStringv4::myStringv4(const char* s)
    :str{nullptr} {
        if(s==nullptr){
            str == new char [1];
            *str = '\0';
        } else {
            str = new char [std::strlen(s)+1];
            std::strcpy(str,s);
        }
    }
myStringv4::myStringv4(const myStringv4 &source)
    :str{nullptr} {
        str = new char [std::strlen(source.str)+1];
        std::strcpy(str, source.str);
        std::cout << "Copy constructor used" << std::endl;
    }
myStringv4::myStringv4(myStringv4 &&source)
    :str(source.str){
        source.str = nullptr;
        std::cout << "Move constructor used" << std::endl;
    }
myStringv4::~myStringv4(){
    // if(str==nullptr){
    //     std::cout << "calling destructor for myStringv4: nullptr" << std::endl;
    // }else{    
    // std::cout << "calling destructor for myStringv4: " << str << std::endl;
    // }    
delete [] str;
}

void myStringv4::display()const{
    std::cout << str << ": " << get_length() << std::endl;
}
int myStringv4::get_length()const{
    return strlen(str);
}
const char *myStringv4::get_str()const{
    return str;
}

myStringv4 &myStringv4::operator=(const myStringv4 &rhs){
    std::cout << "Copy assignment" << std::endl;
    if(this == &rhs){
        return *this;
    }
    delete [] this->str;
    str = new char [std::strlen(rhs.str)+1];
    std::strcpy(this->str, rhs.str);
    return *this;
}
myStringv4 &myStringv4::operator=(myStringv4 &&rhs){
    std::cout << "Using move assignment" << std::endl;
    if(this == &rhs){
        return *this;
    }
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}
bool myStringv4::operator==(const myStringv4 &rhs) const{
    return (std::strcmp(str,rhs.str)==0);
}
myStringv4 myStringv4::operator-() const{
    char* buffer = new char[std::strlen(this->str) + 1];
    std::strcpy(buffer,this->str);
    for(size_t i{}; i < std::strlen(buffer);i++){
        buffer[i] = std::tolower(buffer[i]);
        // if(buffer[i] >= 'A' && buffer[i] <= 'Z'){ // macht für - operator meiner meinung nach mehr sinn
        //     buffer[i] = std::tolower(buffer[i]);
        // }else{
        //     buffer[i] = std::toupper(buffer[i]);
        // }
    }
    myStringv4 temp {buffer};
    delete [] buffer;
    return temp;
}
myStringv4 myStringv4::operator+(const myStringv4 &rhs) const{
    char* buffer = new char[std::strlen(this->str) + std::strlen(rhs.str) + 1];
    std::strcpy(buffer, this->str);
    std::strcat(buffer,rhs.str);
    myStringv4 temp {buffer};
    delete [] buffer;
    return temp;
}
