/**
 * @file main.cpp
 * @note this is the version with global functions
 * @brief code challenge: practice overloading operators as member and non member functions
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
 * @addtogroup section14
 * @{
 * @defgroup s14_cc_ CodeChallengev2
 * @note this is the version with global functions
 * @brief code challenge: practive overloading operators as member and non member functions
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
 * @}
 */
/**
 * @ingroup CCs
 * @addtogroup s14_cc_
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

#include "../include/myString2.h"

int main() {

    myString2 obj1 {"TEST"};
    myString2 obj2 {"Hallo"};
    myString2 obj3 {"Halzo"};
    myString2 obj4 {"Hallenbad"};
    myString2 obj5 {obj1 + " " + obj2};
    myString2 obj6 {obj1};
    obj6+=obj3;
    myString2 obj7 {obj6};
    obj7*=3;

    cout << obj1 << endl;
    cout << -obj1 << endl;

    cout << obj2 << endl;

    cout << boolalpha << endl;
    cout << "\nTesting == & != operator" << endl;
    cout << "Expected: (obj1==obj2)=>false,     Actual: " << (obj1==obj2) << endl;
    cout << "Expected: (obj1!=obj2)=>true,      Actual: " << (obj1!=obj2) << endl;

    cout << "\nTesting < operator" << endl;
    cout << "Expected: (obj2<obj1)=>true,       Actual: " << (obj2<obj1) << endl;
    cout << "Expected: (obj2<obj3)=>true,       Actual: " << (obj2<obj3) << endl;
    cout << "Expected: (obj2<obj4)=>false,      Actual: " << (obj2<obj4) << endl;
    
    cout << "\nTesting < operator" << endl;
    cout << "Expected: (obj2>obj1)=>false,      Actual: " << (obj2>obj1) << endl;
    cout << "Expected: (obj2>obj3)=>false,      Actual: " << (obj2>obj3) << endl;
    cout << "Expected: (obj2>obj4)=>true,       Actual: " << (obj2>obj4) << endl;

    cout << "\nTesting + operator" << endl;
    cout << "Expected: (obj1+ \" \" + obj2)=>\"TEST Hallo\",    Actual: " << obj5 << endl;
   
    cout << "\nTesting += operator" << endl;
    cout << "Expected: (obj6 += obj3)=>\"TESTHalzo\",         Actual: " << obj6 << endl;

    cout << "\nTesting * operator" << endl;
    cout << "Expected: (obj4*3)=>[3*Hallenbad],           Actual: " << (obj4*3) << endl;

    cout << "\nTesting *= operator" << endl;
    cout << "Expected: (obj7*=3)=>[3*TESTHalzo],            Actual: " << obj7 << endl;

    cout << endl;
    return 0;
}
/** @} */