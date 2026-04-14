/**
 * @file header.h
 * @brief programming exercise 03: practice using the default constructor in c++
 */
/**
 * @addtogroup s13_pe03
 * @{
 */
#ifndef _HEADER_H_
#define _HEADER_H_

#include <string>

class Dog2 {
private:
    std::string name;
    int age;
public:
    std::string get_name(){
        return name;
    }
    int get_age(){
        return age;
    }
    void set_name(std::string n){
        name = n;
    }
    void set_age(int n){
        age = n;
    }
    std::string speak(){
        return "Woof";
    }

    Dog2(){
        name = "None";
        age = 0;
    }
};

#endif
/** @} */