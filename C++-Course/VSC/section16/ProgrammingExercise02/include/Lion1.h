/**
 * @file Lion1.h
 * @brief programming exercise 02: learn using c++ polymorphism
 */
/**
 * @addtogroup s16_pe02
 * @{
 */
#ifndef _LION1_H_
#define _LION1_H_

#include <string>

#include "Animal1.h"

class Lion1: public Animal1{
public:
    Lion1(const std::string &name, int age);
    
    virtual std::string get_noise();
    virtual int get_num_legs();
};
#endif
/** @} */