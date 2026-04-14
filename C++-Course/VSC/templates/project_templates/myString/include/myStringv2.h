/**
 * @file myStringv2.h
 * @brief start of the my string class
 */
/**
 * @addtogroup s14_p02
 * @{
 */
#ifndef _MYSTRINGV2_H_
#define _MYSTRINGV2_H_

#include <cstring>
#include <iostream>

class myStringv2{
private:
    char *str; // pointer char[] that holds a C-Style string
public:
    myStringv2();                                       // no args constructor
    myStringv2(const char *s);                          // overloaded constructor
    myStringv2(const myStringv2 &source);               // copy constructor
    ~myStringv2();                                      // destructor

    myStringv2 &operator=(const myStringv2 &rhs);       // copy assignement

    void display() const;
    int get_length() const;
    const char *get_str() const;
};

#endif
/** @} */