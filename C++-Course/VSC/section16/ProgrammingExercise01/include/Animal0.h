/**
 * @file Animal0.h
 * @brief programming exercise 01: learn using c++ polymorphism
 */
/**
 * @addtogroup s16_pe01
 * @{
 */
#ifndef _ANIMAL0_H_
#define _ANIMAL0_H_

#include <string>

class Animal0 {
public:
    virtual std::string get_noise() = 0;
    virtual int get_num_legs() = 0;
};
#endif
/** @} */