/**
 * @file header.h
 * @brief programming exercise 04: practice using the constructor overloading in c++
 */
/**
 * @addtogroup s13_pe04
 * @{
 */
#ifndef _HEADER_H_
#define _HEADER_H_

#include <string>

class Dog3 {
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

    Dog3(){
        name = "None";
        age = 0;
    }
    Dog3(std::string name_val, int age_val){
        name = name_val;
        age = age_val;
    };
};

#endif
/** @} */