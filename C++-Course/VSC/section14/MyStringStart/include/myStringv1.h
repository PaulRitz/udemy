/**
 * @file myStringv1.h
 * @brief start of the my string class
 */
/**
 * @addtogroup s14_p01
 * @{
 */
#ifndef _MYSTRINGV1_H_
#define _MYSTRINGV1_H_

#include <cstring>
#include <iostream>

class myStringv1{
private:
    char *str; // pointer char[] that holds a C-Style string
public:
    myStringv1();                         // no args constructor
    myStringv1(const char *s);            // overloaded constructor
    myStringv1(const myStringv1 &source);   // copy constructor
    ~myStringv1();                        // destructor

    void display() const;
    int get_length() const;
    const char *get_str() const;
};

#endif
/** @} */