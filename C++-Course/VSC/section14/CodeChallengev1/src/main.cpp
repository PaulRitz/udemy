/**
 * @file main.cpp
 * @brief code challenge: practice overloading operators as member and non member functions
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
 * @addtogroup section14
 * @{
 * @defgroup s14_cc CodeChallengev1
 * @brief code challenge: practive overloading operators as member and non member functions
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
 * @}
 */
/**
 * @ingroup CCs
 * @addtogroup s14_cc
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

#include "../include/myString1.h"

int main() {

    myString1 test {"TEST"};
    cout << test << endl;
    cout << -test << endl;
    cout << endl;
    return 0;
}
/** @} */