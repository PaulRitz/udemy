/**
 * @file Animal1.h
 * @brief programming exercise 02: learn using c++ polymorphism
 */
/**
 * @addtogroup s16_pe02
 * @{
 */
#ifndef _ANIMAL1_H_
#define _ANIMAL1_H_

#include <string>

class Animal1 {
protected:
    std::string name;
    int age;
public:
    Animal1(const std::string& name, int age);

    virtual std::string get_name();
    virtual int get_age();
    virtual std::string get_noise() = 0;
    virtual int get_num_legs() = 0;
};
#endif
/** @} */