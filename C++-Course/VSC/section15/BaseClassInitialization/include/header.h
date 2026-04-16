/**
 * @file header.h
 * @brief showcase of base class initialization
 */
/**
 * @addtogroup s15_p04
 * @{
 */
#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>

class Base2 {
private:
    int value;
public:
    Base2();
    Base2(int x);
    ~Base2();
};

class Derived2: public Base2 {
private:
    int doubled_value;
public:
    Derived2();
    Derived2(int x);
    ~Derived2();
};

#endif
 /** @} */