/**
 * @file Dog5.h
 * @brief programming exercise 02: learn using c++ polymorphism
 */
/**
 * @addtogroup s16_pe02
 * @{
 */
#ifndef _DOG1_H_
#define _DOG1_H_

#include <string>

#include "Animal1.h"

class Dog5: public Animal1{
public:
    Dog5(std::string name, int age);

    virtual int get_num_legs();
    virtual std::string get_noise();
};
#endif
/** @} */