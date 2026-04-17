/**
 * @file header.h
 * @brief showcase of virual destructors in c++ polymorphism
 */
/**
 * @addtogroup s16_p03
 * @{
 */
#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>

class Account9{
public:
    virtual void withdraw(double amount);
    virtual ~Account9();
};
class Checking1: public Account9{
public:
    virtual void withdraw(double amount);
    virtual ~Checking1();
};
class Savings1: public Account9{
public:
    virtual void withdraw(double amount);
    virtual ~Savings1();
};
class Trust1: public Savings1{
    virtual void withdraw(double amount);
    virtual ~Trust1();
};
#endif
/** @} */