#include "myString1.h"

myString1::myString1()
    :str{nullptr}{
        str = new char[1];
        *str = '\0';
    }
myString1::myString1(const char* s)
    :str{nullptr} {
        if(s==nullptr){
            str = new char [1];
            *str = '\0';
        } else {
            str = new char [std::strlen(s)+1];
            std::strcpy(str,s);
        }
    }
myString1::myString1(const myString1 &source)
    :str{nullptr} {
        str = new char [std::strlen(source.str)+1];
        std::strcpy(str, source.str);
        std::cout << "Copy constructor used" << std::endl;
    }
myString1::myString1(myString1 &&source)
    :str(source.str){
        source.str = nullptr;
        std::cout << "Move constructor used" << std::endl;
    }
myString1::~myString1(){
    // if(str==nullptr){
    //     std::cout << "calling destructor for myString1: nullptr" << std::endl;
    // }else{    
    // std::cout << "calling destructor for myString1: " << str << std::endl;
    // }    
delete [] str;
}

void myString1::display()const{
    std::cout << str << ": " << get_length() << std::endl;
}
int myString1::get_length()const{
    return strlen(str);
}
const char *myString1::get_str()const{
    return str;
}

myString1 &myString1::operator=(const myString1 &rhs){
    std::cout << "Copy assignment" << std::endl;
    if(this == &rhs){
        return *this;
    }
    delete [] this->str;
    str = new char [std::strlen(rhs.str)+1];
    std::strcpy(this->str, rhs.str);
    return *this;
}
myString1 &myString1::operator=(myString1 &&rhs){
    std::cout << "Using move assignment" << std::endl;
    if(this == &rhs){
        return *this;
    }
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

std::ostream &operator<<(std::ostream &out, const myString1 &rhs){
    out << rhs.str;
    return out;
}
std::istream &operator>>(std::istream &in,  myString1 &rhs){
    char *buffer = new char [1000];
    in >> buffer;
    rhs = myString1{buffer};
    delete []buffer;
    return in;
}

myString1 myString1::operator-() const{
    char* buffer = new char [std::strlen(this->str)+1];
    std::strcpy(buffer,this->str);
    for(size_t i{};i<std::strlen(buffer);i++){
        buffer[i] = std::tolower(buffer[i]); 
    }
    myString1 temp {buffer};
    delete [] buffer;
    return temp;
}
bool myString1::operator==(const myString1 &rhs) const{
    return (std::strcmp(this->str,rhs.str)==0);
}
bool myString1::operator!=(const myString1 &rhs) const{
    return !(*this==rhs);
}
bool myString1::operator<(const myString1 &rhs) const{
    char* buffer_lhs = new char [std::strlen(this->str)+1];
    char* buffer_rhs = new char [std::strlen(rhs.str)+1];
    std::strcpy(buffer_lhs, (-(*this)).str);
    std::strcpy(buffer_rhs, (-rhs).str);
    size_t loop_size{(std::strlen(buffer_lhs)>std::strlen(buffer_rhs))?(std::strlen(buffer_lhs)):(std::strlen(buffer_rhs))};
    size_t break_size{(std::strlen(buffer_lhs)>std::strlen(buffer_rhs))?(std::strlen(buffer_rhs)):(std::strlen(buffer_lhs))};
    for(size_t i{};i<loop_size;i++){
        if(i > break_size-1){
            break;
        }
        if((buffer_lhs[i] >= 'a' && buffer_lhs[i] <= 'z') && (buffer_rhs[i] >= 'a' && buffer_rhs[i] <= 'z')){
            if(buffer_lhs[i] > buffer_rhs[i]){
                delete [] buffer_lhs;
                delete [] buffer_rhs;
                return false;
            }
        }
    }
    delete [] buffer_lhs;
    delete [] buffer_rhs;
    return true;
}
bool myString1::operator>(const myString1 &rhs) const{
        char* buffer_lhs = new char [std::strlen(this->str)+1];
    char* buffer_rhs = new char [std::strlen(rhs.str)+1];
    std::strcpy(buffer_lhs, (-(*this)).str);
    std::strcpy(buffer_rhs, (-rhs).str);
    size_t loop_size{(std::strlen(buffer_lhs)>std::strlen(buffer_rhs))?(std::strlen(buffer_lhs)):(std::strlen(buffer_rhs))};
    size_t break_size{(std::strlen(buffer_lhs)>std::strlen(buffer_rhs))?(std::strlen(buffer_rhs)):(std::strlen(buffer_lhs))};
    for(size_t i{};i<loop_size;i++){
        if(i > break_size-1){
            break;
        }
        if((buffer_lhs[i] >= 'a' && buffer_lhs[i] <= 'z') && (buffer_rhs[i] >= 'a' && buffer_rhs[i] <= 'z')){
            if(buffer_lhs[i] < buffer_rhs[i]){
                delete [] buffer_lhs;
                delete [] buffer_rhs;
                return false;
            }
        }
    }
    delete [] buffer_lhs;
    delete [] buffer_rhs;
    return true;
}
myString1 myString1::operator+(const myString1 &rhs){
    char* buffer = new char [std::strlen(this->str) + std::strlen(rhs.str) + 1];
    std::strcpy(buffer, this->str);
    std::strcat(buffer,rhs.str);
    myString1 temp {buffer};
    delete [] buffer;
    return temp;

}
void myString1::operator+=(const myString1 &rhs){
    std::strcat(this->str,rhs.str);
}
myString1 myString1::operator*(const int n) const{
    char* buffer = new char[(std::strlen(this->str)*n)+1];
    for(size_t i{};i<n;i++){
        std::strcat(buffer,this->str);
    }
    myString1 temp {buffer};
    delete [] buffer;
    return temp;
}
void myString1::operator*=(const int n){
    char* buffer = new char[std::strlen(this->str)+1];
    std::strcpy(buffer,this->str);
    for(size_t i{};i<(n-1);i++){
        std::strcat(this->str,buffer);
    }
}
