/**
 * @file header.h
 * @brief introduction to the problem
 * @details the problem: using functions like the overloaded operator<< is a problem in
 * c++ polymorphism, because they are no virtual functions and therefore have no polymorphic
 * behaviour
 */
/**
 * @addtogroup s16_p07_01
 * @{
 */
#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>

class Account11{
    friend std::ostream &operator<<(std::ostream &out, const Account11 &source);
public:
    virtual void withdraw(double amount);
    virtual ~Account11();
};
class Checking3: public Account11{
    friend std::ostream &operator<<(std::ostream &out, const Checking3 &source);
public:
    virtual void withdraw(double amount);
    virtual ~Checking3();
};
class Savings3: public Account11{
    friend std::ostream &operator<<(std::ostream &out, const Savings3 &source);
public:
    virtual void withdraw(double amount);
    virtual ~Savings3();
};
class Trust3: public Savings3{
    friend std::ostream &operator<<(std::ostream &out, const Trust3 &source);
public:
    virtual void withdraw(double amount);
    virtual ~Trust3();
};
#endif
/** @} */