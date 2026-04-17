/**
 * @file Lion0.h
 * @brief programming exercise 01: learn using c++ polymorphism
 */
/**
 * @addtogroup s16_pe01
 * @{
 */
#ifndef _LION0_H_
#define _LION0_H_

#include <string>

#include "Animal0.h"

class Lion0: public Animal0{
public:
    virtual std::string get_noise();
    virtual int get_num_legs();
};
#endif
/** @} */