#include "myString2.h"

myString2::myString2()
    :str{nullptr}{
        str = new char[1];
        *str = '\0';
    }
myString2::myString2(const char* s)
    :str{nullptr} {
        if(s==nullptr){
            str = new char [1];
            *str = '\0';
        } else {
            str = new char [std::strlen(s)+1];
            std::strcpy(str,s);
        }
    }
myString2::myString2(const myString2 &source)
    :str{nullptr} {
        str = new char [std::strlen(source.str)+1];
        std::strcpy(str, source.str);
        std::cout << "Copy constructor used" << std::endl;
    }
myString2::myString2(myString2 &&source)
    :str(source.str){
        source.str = nullptr;
        std::cout << "Move constructor used" << std::endl;
    }
myString2::~myString2(){
    // if(str==nullptr){
    //     std::cout << "calling destructor for myString2: nullptr" << std::endl;
    // }else{    
    // std::cout << "calling destructor for myString2: " << str << std::endl;
    // }    
delete [] str;
}

void myString2::display()const{
    std::cout << str << ": " << get_length() << std::endl;
}
int myString2::get_length()const{
    return strlen(str);
}
const char *myString2::get_str()const{
    return str;
}

myString2 &myString2::operator=(const myString2 &rhs){
    std::cout << "Copy assignment" << std::endl;
    if(this == &rhs){
        return *this;
    }
    delete [] this->str;
    str = new char [std::strlen(rhs.str)+1];
    std::strcpy(this->str, rhs.str);
    return *this;
}
myString2 &myString2::operator=(myString2 &&rhs){
    std::cout << "Using move assignment" << std::endl;
    if(this == &rhs){
        return *this;
    }
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

std::ostream &operator<<(std::ostream &out, const myString2 &rhs){
    out << rhs.str;
    return out;
}
std::istream &operator>>(std::istream &in,  myString2 &rhs){
    char *buffer = new char [1000];
    in >> buffer;
    rhs = myString2{buffer};
    delete []buffer;
    return in;
}

myString2 operator-(const myString2 &obj){
    char*  buffer = new char [std::strlen(obj.str)+1];
    std::strcpy(buffer,obj.str);
    for(size_t i{};i<std::strlen(buffer);i++){
        buffer[i] = tolower(buffer[i]);
    }
    myString2 temp {buffer};
    delete [] buffer;
    return temp;
}
bool operator==(const myString2 &lhs, const myString2 &rhs){
    return (std::strcmp(lhs.str,rhs.str)==0);
}
bool operator!=(const myString2 &lhs, const myString2 &rhs){
    return !(lhs.str==rhs.str);
}
bool operator<(const myString2 &lhs, const myString2 &rhs){
    char* buffer_lhs = new char [std::strlen(lhs.str)+1];
    char* buffer_rhs = new char [std::strlen(rhs.str)+1];
    std::strcpy(buffer_lhs,(-lhs).str);
    std::strcpy(buffer_rhs,(-rhs).str);
    size_t loop_size {(std::strlen(buffer_lhs)>std::strlen(buffer_rhs))?(std::strlen(buffer_lhs)):(std::strlen(buffer_rhs))};
    size_t break_size {(std::strlen(buffer_lhs)>std::strlen(buffer_rhs))?(std::strlen(buffer_rhs)):(std::strlen(buffer_rhs))};
    for(size_t i{};i<loop_size;i++){
        if(i>break_size){
            break;
        }
        if((buffer_lhs[i]>='a'&&buffer_lhs[i]<='z')&&(buffer_rhs[i]>='a'&&buffer_rhs[i]<='z')){
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
bool operator>(const myString2 &lhs, const myString2 &rhs){
    char* buffer_lhs = new char [std::strlen(lhs.str)+1];
    char* buffer_rhs = new char [std::strlen(rhs.str)+1];
    std::strcpy(buffer_lhs,(-lhs).str);
    std::strcpy(buffer_rhs,(-rhs).str);
    size_t loop_size {(std::strlen(buffer_lhs)>std::strlen(buffer_rhs))?(std::strlen(buffer_lhs)):(std::strlen(buffer_rhs))};
    size_t break_size {(std::strlen(buffer_lhs)>std::strlen(buffer_rhs))?(std::strlen(buffer_rhs)):(std::strlen(buffer_rhs))};
    for(size_t i{};i<loop_size;i++){
        if(i>break_size){
            break;
        }
        if((buffer_lhs[i]>='a'&&buffer_lhs[i]<='z')&&(buffer_rhs[i]>='a'&&buffer_rhs[i]<='z')){
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
myString2 operator+(const myString2 &lhs, const myString2 &rhs){
    char* buffer = new char [std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(buffer, lhs.str);
    std::strcat(buffer,rhs.str);
    myString2 temp {buffer};
    delete [] buffer;
    return temp;
}
void operator+=(myString2 &lhs, const myString2 &rhs){
    std::strcat(lhs.str,rhs.str);
}
myString2 operator*(const myString2 &obj, const int n){
    char* buffer = new char [(std::strlen(obj.str)*n)+1];
    for(size_t i{};i<n;i++){
        std::strcat(buffer,obj.str);
    }
    myString2 temp {buffer};
    delete [] buffer;
    return temp;
}
void operator*=(myString2 &obj, const int n){
    char* buffer = new char [std::strlen(obj.str)+1];
    std::strcpy(buffer,obj.str);
    for(size_t i{};i<(n-1);i++){
        std::strcat(obj.str,buffer);
    }
}
