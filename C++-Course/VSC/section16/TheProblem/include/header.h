/**
 * @file header.h
 * @brief the problem of static function usage -- introduction to polymorphism
 */
/**
 * @addtogroup s16_p01
 * @{
 */
#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>

class Base4 {
public:
    void say_hello() const;
};

class Derived4: public Base4 {
public:
    void say_hello() const;
    void greetings(const Base4 &obj);
};

#endif
/** @} */