/**
 * @file myStringv4.h
 * @brief custom operator overloading with member methods
 */
/**
 * @addtogroup s14_p04
 * @{
 */
#ifndef _MYSTRINGV4_H_
#define _MYSTRINGV4_H_

#include <cstring>
#include <iostream>

class myStringv4{
private:
    char *str; // pointer char[] that holds a C-Style string
public:
    myStringv4();                                       // no args constructor
    myStringv4(const char *s);                          // overloaded constructor
    myStringv4(const myStringv4 &source);               // copy constructor
    myStringv4(myStringv4 &&source);
    ~myStringv4();                                      // destructor

    /**
     * @brief a custom copy assignment for the assignment operator "="
     */
    myStringv4 &operator=(const myStringv4 &rhs);       // copy assignement
    /**
     * @brief a custom move assignement for the assignment operator "="
     */
    myStringv4 &operator=(myStringv4 &&rhs);            // move assignment

    /**
     * @brief a custom member method for the subtraction operator "-" -- makes everything lowercase
     * @note in my opinion a inverting operation makes more sense (even though there is no practical use),
     * -> also implemented
     */
    myStringv4 operator-() const;                       // make lowercase
    /**
     * @brief a custom member method for the addition operator "+" -- concatenates two strings
     * @param rhs the reference to the object that will be concatenated with the left hand side object
     */
    myStringv4 operator+(const myStringv4 &rhs) const;        // concatenate
    /**
     * @brief a custom member method for the equality operator "==" -- compares two strings for equality
     * @param rhs the reference to the object that will be compared with the left hand side object
     */
    bool operator==(const myStringv4 &rhs) const;

    void display() const;
    int get_length() const;
    const char *get_str() const;
};

#endif
/** @} */