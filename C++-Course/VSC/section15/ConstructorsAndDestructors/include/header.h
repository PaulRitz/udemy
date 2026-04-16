/**
 * @file header.h
 * @brief showcase of constructors and destructors and their behaviour with inheritance
 */
/**
 * @addtogroup s15_p03
 * @{
 */
#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>

class Base1 {
private:
    int value;
public:
    Base1();
    Base1(int x);
    ~Base1();
};

class Derived1: public Base1 {
private:
    int doubled_value;
public:
    Derived1();
    Derived1(int x);
    ~Derived1();
};

#endif
 /** @} */