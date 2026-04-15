/**
 * @file myStringv6.h
 * @brief custom operator overloading stream insertion and extraction
 */
/**
 * @addtogroup s14_p06
 * @{
 */
#ifndef _MYSTRINGV6_H_
#define _MYSTRINGV6_H_

#include <cstring>
#include <iostream>

class myStringv6{
    /**
     * @brief a custom member method for the equality operator "==" -- compares two strings for equality
     * @param rhs the reference to the object that will be compared with the left hand side object
     */
    friend bool operator==(const myStringv6 &lhs, const myStringv6 &rhs);
    /**
     * @brief a custom operator function for the subtraction operator "-" -- makes everything lowercase
     * @note in my opinion a inverting operation makes more sense (even though there is no practical use),
     * -> also implemented
     */
    friend myStringv6 operator-(const myStringv6 &obj);
    /**
     * @brief a custom operator function for the addition operator "+" -- concatenates two strings
     * @param rhs the reference to the object that will be concatenated with the left hand side object
     */
    friend myStringv6 operator+(const myStringv6 &lhs, const myStringv6 &rhs);
    /**
     * @brief a custom operator function that will tell the output stream how to display the myStringv6 object 
     */
    friend std::ostream &operator<<(std::ostream &out, const myStringv6 &rhs);
    /**
     * @brief a custom operator function that will tell the input stream how to handle the input to the myStringv6 object
     */
    friend std::istream &operator>>(std::istream &in,  myStringv6 &rhs);
private:
    char *str; // pointer char[] that holds a C-Style string
public:
    myStringv6();                                       // no args constructor
    myStringv6(const char *s);                          // overloaded constructor
    myStringv6(const myStringv6 &source);               // copy constructor
    myStringv6(myStringv6 &&source);
    ~myStringv6();                                      // destructor

    /**
     * @brief a custom copy assignment for the assignment operator "="
     */
    myStringv6 &operator=(const myStringv6 &rhs);       // copy assignement
    /**
     * @brief a custom move assignement for the assignment operator "="
     */
    myStringv6 &operator=(myStringv6 &&rhs);            // move assignment

    // myStringv6 operator-() const;                             // make lowercase
    // myStringv6 operator+(const myStringv6 &rhs) const;        // concatenate
    // bool operator==(const myStringv6 &rhs) const;

    void display() const;
    int get_length() const;
    const char *get_str() const;
};

#endif
/** @} */