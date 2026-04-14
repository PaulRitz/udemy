/**
 * @file header.h
 * @brief programming exercise 05: practice using the copy constructor in c++
 */
/**
 * @addtogroup s13_pe05
 * @{
 */
#ifndef _HEADER_H_
#define _HEADER_H_

#include <string>
#include <iostream>

class Dog4 {
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

    Dog4(std::string name_val = "None", int age_val = 0)
        :name{name_val},age{age_val} {}
    Dog4(Dog4 &source)
        :Dog4(source.name, source.age) {
            std::cout << "copy constructor - copied " << source.name << std::endl;
        }
};

#endif
/** @} */