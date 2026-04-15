#include "myStringv5.h"

myStringv5::myStringv5()
    :str{nullptr}{
        str = new char[1];
        *str = '\0';
    }
myStringv5::myStringv5(const char* s)
    :str{nullptr} {
        if(s==nullptr){
            str == new char [1];
            *str = '\0';
        } else {
            str = new char [std::strlen(s)+1];
            std::strcpy(str,s);
        }
    }
myStringv5::myStringv5(const myStringv5 &source)
    :str{nullptr} {
        str = new char [std::strlen(source.str)+1];
        std::strcpy(str, source.str);
        std::cout << "Copy constructor used" << std::endl;
    }
myStringv5::myStringv5(myStringv5 &&source)
    :str(source.str){
        source.str = nullptr;
        std::cout << "Move constructor used" << std::endl;
    }
myStringv5::~myStringv5(){
    // if(str==nullptr){
    //     std::cout << "calling destructor for myStringv5: nullptr" << std::endl;
    // }else{    
    // std::cout << "calling destructor for myStringv5: " << str << std::endl;
    // }    
delete [] str;
}

void myStringv5::display()const{
    std::cout << str << ": " << get_length() << std::endl;
}
int myStringv5::get_length()const{
    return strlen(str);
}
const char *myStringv5::get_str()const{
    return str;
}

myStringv5 &myStringv5::operator=(const myStringv5 &rhs){
    std::cout << "Copy assignment" << std::endl;
    if(this == &rhs){
        return *this;
    }
    delete [] this->str;
    str = new char [std::strlen(rhs.str)+1];
    std::strcpy(this->str, rhs.str);
    return *this;
}
myStringv5 &myStringv5::operator=(myStringv5 &&rhs){
    std::cout << "Using move assignment" << std::endl;
    if(this == &rhs){
        return *this;
    }
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

// bool myStringv5::operator==(const myStringv5 &rhs) const{
//     return (std::strcmp(str,rhs.str)==0);
// }

// myStringv5 myStringv5::operator-() const{
//     char* buffer = new char[std::strlen(this->str) + 1];
//     std::strcpy(buffer,this->str);
//     for(size_t i{}; i < std::strlen(buffer);i++){
//         buffer[i] = std::tolower(buffer[i]);
//         // if(buffer[i] >= 'A' && buffer[i] <= 'Z'){ // macht für - operator meiner meinung nach mehr sinn
//         //     buffer[i] = std::tolower(buffer[i]);
//         // }else{
//         //     buffer[i] = std::toupper(buffer[i]);
//         // }
//     }
//     myStringv5 temp {buffer};
//     delete [] buffer;
//     return temp;
// }

// myStringv5 myStringv5::operator+(const myStringv5 &rhs) const{
//     char* buffer = new char[std::strlen(this->str) + std::strlen(rhs.str) + 1];
//     std::strcpy(buffer, this->str);
//     std::strcat(buffer,rhs.str);
//     myStringv5 temp {buffer};
//     delete [] buffer;
//     return temp;
// }

bool operator==(const myStringv5 &lhs, const myStringv5 &rhs){
    return(std::strcmp(lhs.str,rhs.str));
}
myStringv5 operator-(const myStringv5 &obj){
    char* buffer = new char[std::strlen(obj.str)+1];
    std::strcpy(buffer,obj.str);
    for(size_t i{0}; i < std::strlen(buffer) ; i++){
        buffer[i] = std::tolower(buffer[i]);
    }
    myStringv5 temp {buffer};
    delete [] buffer;
    return temp;
}
myStringv5 operator+(const myStringv5 &lhs, const myStringv5 &rhs){
    char* buffer = new char [std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(buffer, lhs.str);
    std::strcat(buffer, rhs.str);
    myStringv5 temp {buffer};
    delete [] buffer;
    return temp;
}