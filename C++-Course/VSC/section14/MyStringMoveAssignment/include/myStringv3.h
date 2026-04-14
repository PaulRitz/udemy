/**
 * @file myStringv3.h
 * @brief start of the my string class
 */
/**
 * @addtogroup s14_p03
 * @{
 */
#ifndef _MYSTRINGV3_H_
#define _MYSTRINGV3_H_

#include <cstring>
#include <iostream>

class myStringv3{
private:
    char *str; // pointer char[] that holds a C-Style string
public:
    myStringv3();                                       // no args constructor
    myStringv3(const char *s);                          // overloaded constructor
    myStringv3(const myStringv3 &source);               // copy constructor
    myStringv3(myStringv3 &&source);
    ~myStringv3();                                      // destructor

    myStringv3 &operator=(const myStringv3 &rhs);       // copy assignement
    myStringv3 &operator=(myStringv3 &&rhs);            // move assignment

    void display() const;
    int get_length() const;
    const char *get_str() const;
};

#endif
/** @} */