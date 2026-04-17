/**
 * @file header.h
 * @brief showcase of base class references
 */
/**
 * @addtogroup s16_p05
 * @{
 */
#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>

class Account10{
public:
    virtual void withdraw(double amount);
    virtual ~Account10();
};
class Checking2: public Account10{
public:
    virtual void withdraw(double amount);
    virtual ~Checking2();
};
class Savings2: public Account10{
public:
    virtual void withdraw(double amount);
    virtual ~Savings2();
};
class Trust2: public Savings2{
public:
    virtual void withdraw(double amount);
    virtual ~Trust2();
};
#endif
/** @} */