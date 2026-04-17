/**
 * @file header.h
 * @brief solution to the problem
 * @details To solve the problem a interface class is created that enable the use of the operator<< 
 * as a virtual function
 */
/**
 * @addtogroup s16_p07_02
 * @{
 */
#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>
class I_printable0 {
friend  std::ostream &operator<<(std::ostream &out, const I_printable0 &source);
public:
    virtual void print(std::ostream &out) const = 0;
};
class Account12: public I_printable0{
public:
    virtual void print(std::ostream &out) const override;

    virtual void withdraw(double amount);
    virtual ~Account12();
};
class Checking4: public Account12{
public:
    virtual void print(std::ostream &out) const override;

    virtual void withdraw(double amount);
    virtual ~Checking4();
};
class Savings4: public Account12{
public:
    virtual void print(std::ostream &out) const override;

    virtual void withdraw(double amount);
    virtual ~Savings4();
};
class Trust4: public Savings4{
public:
    virtual void print(std::ostream &out) const override;

    virtual void withdraw(double amount);
    virtual ~Trust4();
};
class Dog6: public I_printable0{
public:
    virtual void print(std::ostream &out) const override;

    virtual ~Dog6();
};
#endif
/** @} */