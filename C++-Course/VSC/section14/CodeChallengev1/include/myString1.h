/**
 * @file myString1.h
 * @brief custom operator overloading stream insertion and extraction
 * @details Overloading the folling operators in the provided myString1 class.
 * To gain experience overloading operators, you should do this challenge twice.
 * First, overload the operators using member functions and then in another project overload the same operators
 * again using non-member functions.
 * 
 * Please do it once using member merhods and then again using non member functions.
 * 
 * Here is a list of some of the operators that you can overload for this class:
 * 
 * -- [-]unary minus. Returns the lowercase version of the object's string
 *      -s1
 * -- [==]Returns true if the two strings are equal
 *      (s1==s2)
 * -- [!=]Returns true if the two strings are *not* equal
 *      (s1!=s2)
 * -- [<]Returns true if the lhs string is lexically less than the rhs string
 *      (s1<s2)
 * -- [>]Returns true if the lhs string is lexically greater than the rhs string
 *      (s1>s2)
 * -- [+]concatenation. Returns an object that concatenates the lhs and rhs
 *      (s1+s2) 
 * -- [+=]concatenate the rhs string to the lhs string and store the result in lhs object
 *      (s1+=s2) equivalent to s1 = s1 + s2;
 * -- [*]repeat. Results in a string that is copied n times;
 *      (s2*3) e.g.) s2 = "abc";
 *                   s1 = s2*3;
 *                   s1 = "abcabcabc";
 * -- [*=]Repeat the string on the lhs n times and store the result back in the lhs object
 *      s1 = "abc";
 *      s1*=3 => s1="abcabcabc"
 */
/**
 * @addtogroup s14_cc
 * @{
 */
#ifndef _MYSTRING1_H_
#define _MYSTRING1_H_

#include <cstring>
#include <iostream>

class myString1{

    friend std::ostream &operator<<(std::ostream &out, const myString1 &rhs);
    /**
     * @brief a custom operator function that will tell the input stream how to handle the input to the myString1 object
     */
    friend std::istream &operator>>(std::istream &in,  myString1 &rhs);
private:
    char *str; // pointer char[] that holds a C-Style string
public:
    myString1();                                       // no args constructor
    myString1(const char *s);                          // overloaded constructor
    myString1(const myString1 &source);               // copy constructor
    myString1(myString1 &&source);
    ~myString1();                                      // destructor

    /**
     * @brief a custom copy assignment for the assignment operator "="
     */
    myString1 &operator=(const myString1 &rhs);       // copy assignement
    /**
     * @brief a custom move assignement for the assignment operator "="
     */
    myString1 &operator=(myString1 &&rhs);            // move assignment

    /**
     * @brief [-]unary minus. Returns the lowercase version of the object's string
     */
    myString1 operator-() const;
    /**
     * @brief [==]Returns true if the two strings are equal
     */
    bool operator==(const myString1 &rhs) const;
    /**
     * @brief [!=]Returns true if the two strings are equal
     */
    bool operator!=(const myString1 &rhs) const;

    void display() const;
    int get_length() const;
    const char *get_str() const;
};

#endif
/** @} */