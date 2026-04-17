/**
 * @file header.h
 * @brief showcase of virual functions in c++ polymorphism
 */
/**
 * @addtogroup s16_p02
 * @{
 */
#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>

class Account8{
public:
    virtual void withdraw(double amount);
};
class Checking0: public Account8{
public:
    virtual void withdraw(double amount);
};
class Savings0: public Account8{
public:
    virtual void withdraw(double amount);
};
class Trust0: public Savings0{
    virtual void withdraw(double amount);
};
#endif
/** @} */