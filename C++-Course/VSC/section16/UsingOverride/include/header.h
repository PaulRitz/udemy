/**
 * @file header.h
 * @brief showcase of override functionality in c++
 */
/**
 * @addtogroup s16_p04
 * @{
 */
#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>

class Base4 {
public:
    virtual void say_hello() const ;
    virtual ~Base4();
};

class Derived4: public Base4 {
public:
    virtual void say_hello() const override;
    virtual ~Derived4();
};

#endif
/** @} */