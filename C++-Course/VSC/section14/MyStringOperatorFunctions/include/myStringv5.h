/**
 * @file myStringv5.h
 * @brief custom operator overloading global functions
 */
/**
 * @addtogroup s14_p05
 * @{
 */
#ifndef _MYSTRINGV5_H_
#define _MYSTRINGV5_H_

#include <cstring>
#include <iostream>

class myStringv5{
    /**
     * @brief a custom member method for the equality operator "==" -- compares two strings for equality
     * @param rhs the reference to the object that will be compared with the left hand side object
     */
    friend bool operator==(const myStringv5 &lhs, const myStringv5 &rhs);
    /**
     * @brief a custom member method for the subtraction operator "-" -- makes everything lowercase
     * @note in my opinion a inverting operation makes more sense (even though there is no practical use),
     * -> also implemented
     */
    friend myStringv5 operator-(const myStringv5 &obj);
    /**
     * @brief a custom member method for the addition operator "+" -- concatenates two strings
     * @param rhs the reference to the object that will be concatenated with the left hand side object
     */
    friend myStringv5 operator+(const myStringv5 &lhs, const myStringv5 &rhs);
private:
    char *str; // pointer char[] that holds a C-Style string
public:
    myStringv5();                                       // no args constructor
    myStringv5(const char *s);                          // overloaded constructor
    myStringv5(const myStringv5 &source);               // copy constructor
    myStringv5(myStringv5 &&source);
    ~myStringv5();                                      // destructor

    /**
     * @brief a custom copy assignment for the assignment operator "="
     */
    myStringv5 &operator=(const myStringv5 &rhs);       // copy assignement
    /**
     * @brief a custom move assignement for the assignment operator "="
     */
    myStringv5 &operator=(myStringv5 &&rhs);            // move assignment

    // myStringv5 operator-() const;                             // make lowercase
    // myStringv5 operator+(const myStringv5 &rhs) const;        // concatenate
    // bool operator==(const myStringv5 &rhs) const;

    void display() const;
    int get_length() const;
    const char *get_str() const;
};

#endif
/** @} */