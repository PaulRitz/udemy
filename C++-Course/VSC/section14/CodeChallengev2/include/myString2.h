/**
 * @file myString2.h
 * @note this is the version with global functions
 * @brief custom operator overloading stream insertion and extraction
 * @details Overloading the folling operators in the provided myString2 class.
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
 * @addtogroup s14_cc_
 * @{
 */
#ifndef _MYSTRING2_H_
#define _MYSTRING2_H_

#include <cstring>
#include <iostream>

class myString2{
    /**
     * @brief a custom operator function that will tell the output stream how to handle the output from the myString2 object
     */
    friend std::ostream &operator<<(std::ostream &out, const myString2 &rhs);
    /**
     * @brief a custom operator function that will tell the input stream how to handle the input to the myString2 object
     */
    friend std::istream &operator>>(std::istream &in,  myString2 &rhs);
    /**
     * @brief [-]unary minus. Returns the lowercase version of the object's string
     */
    friend myString2 operator-(const myString2 &obj);
    /**
     * @brief [==]Returns true if the two strings are equal
     */
    friend bool operator==(const myString2 &lhs, const myString2 &rhs);
    /**
     * @brief [!=]Returns true if the two strings are *not* equal
     */
    friend bool operator!=(const myString2 &lhs, const myString2 &rhs);
    /**
     * @brief [<]Returns true if the lhs string is lexically less than the rhs string
     */
    friend bool operator<(const myString2 &lhs, const myString2 &rhs);
    /**
     * @brief [>]Returns true if the lhs string is lexically greater than the rhs string
     */
    friend bool operator>(const myString2 &lhs, const myString2 &rhs);
    /**
     * @brief [+]concatenation. Returns an object that concatenates the lhs and rhs
     */
    friend myString2 operator+(const myString2 &lhs, const myString2 &rhs);
    /**
     * @brief [+=]concatenate the rhs string to the lhs string and store the result in lhs object
     */
    friend void operator+=(myString2 &lhs, const myString2 &rhs);
    /**
     * @brief [*]repeat. Results in a string that is copied n times;
     */
    friend myString2 operator*(const myString2 &obj, const int n);
    /**
     * @brief [*=]Repeat the string on the lhs n times and store the result back in the lhs object
     */
    friend void operator*=(myString2 &obj, const int n);
private:
    char *str; // pointer char[] that holds a C-Style string
public:
    myString2();                                       // no args constructor
    myString2(const char *s);                          // overloaded constructor
    myString2(const myString2 &source);               // copy constructor
    myString2(myString2 &&source);
    ~myString2();                                      // destructor

    /**
     * @brief a custom copy assignment for the assignment operator "="
     */
    myString2 &operator=(const myString2 &rhs);       // copy assignement
    /**
     * @brief a custom move assignement for the assignment operator "="
     */
    myString2 &operator=(myString2 &&rhs);            // move assignment

    void display() const;
    int get_length() const;
    const char *get_str() const;
};

#endif
/** @} */