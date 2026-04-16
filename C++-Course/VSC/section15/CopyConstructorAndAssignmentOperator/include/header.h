/**
 * @file header.h
 * @brief showcase of the copy constructor and the assignment operator and their behaviour with inheritance
 */
/**
 * @addtogroup s15_p05
 * @{
 */
#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>

class Base3 {
private:
    int value;
public:
    Base3();
    Base3(int x);
    Base3(const Base3 &source);
    ~Base3();
    
    Base3 &operator=(const Base3 &rhs);
};

class Derived3: public Base3 {
private:
    int doubled_value;
public:
    Derived3();
    Derived3(int x);
    Derived3(const Derived3 &source);
    ~Derived3();

    Derived3 &operator=(const Derived3 &rhs);
};

#endif
 /** @} */