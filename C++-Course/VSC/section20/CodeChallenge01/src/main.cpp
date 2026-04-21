/**
 * @file main.cpp
 * @brief code challenge 01: practice using deques
 * @details A Palindrome is a string that reads the same backwards or forwards.
 * Simple examples are:
 * madam
 * bob
 * toot
 * radar
 * hannah
 * anna
 * 
 * An entire phrase can also be a palindrome, for example:
 * A Toyota's a toyota
 * A Santa at NASA
 * A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!
 * 
 * For the purposes of this assignement we will only consider alpha characters and omit all other characters.
 * We will also not be considering case.
 * 
 * So,
 * A Santa at Nasa, will be processed as:
 * ASANTAATNASA
 * 
 * A common method to solve this problem is to compare the string to its reverse and 
 * if they are equal then it must be a palindrome. But we will use a deque.
 * 
 * I am providing the main driver for you which will automatically run several test cases.
 * Your challenge is to write the following function.
 * 
 * bool is_palindrome(const std::string &s){}
 * 
 * This function will expect a string and it must determine if that string is a palindrome and return true if it is, or false if it is not.
 * 
 * So,
 * is_palindrome("A Santa at Nasa"); will return true
 * is_palindrome("Hello"); will return false
 * 
 * Please use a deque to solve the problem
 */
/**
 * @addtogroup section20
 * @{
 * @defgroup s20_cc01 CodeChallenge01
 * @brief code challenge 01: practice using deques
 * @details A Palindrome is a string that reads the same backwards or forwards.
 * Simple examples are:
 * madam
 * bob
 * toot
 * radar
 * hannah
 * anna
 * 
 * An entire phrase can also be a palindrome, for example:
 * A Toyota's a toyota
 * A Santa at NASA
 * A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!
 * 
 * For the purposes of this assignement we will only consider alpha characters and omit all other characters.
 * We will also not be considering case.
 * 
 * So,
 * A Santa at Nasa, will be processed as:
 * ASANTAATNASA
 * 
 * A common method to solve this problem is to compare the string to its reverse and 
 * if they are equal then it must be a palindrome. But we will use a deque.
 * 
 * I am providing the main driver for you which will automatically run several test cases.
 * Your challenge is to write the following function.
 * 
 * bool is_palindrome(const std::string &s){}
 * 
 * This function will expect a string and it must determine if that string is a palindrome and return true if it is, or false if it is not.
 * 
 * So,
 * is_palindrome("A Santa at Nasa"); will return true
 * is_palindrome("Hello"); will return false
 * 
 * Please use a deque to solve the problem
 * @}
 */
/**
 * @ingroup CCs
 * @addtogroup s20_cc01
 * @{
 */

#ifndef FILES_IN_DIR
#define FILES_IN_DIR "files/in/"
#endif
#ifndef FILES_OUT_DIR
#define FILES_OUT_DIR "files/out/"
#endif

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <memory>
#include <fstream>
#include <algorithm>
#include <deque>

const std::string input_file_path = std::string(FILES_IN_DIR);
const std::string output_file_path = std::string(FILES_OUT_DIR);

using namespace std;

bool is_palindrome(std::string input); 

int main() {
    cout << boolalpha;
    
    cout << "[A Santa at Nasa] --  Expected: true, Actual: " << is_palindrome("A Santa at Nasa") << endl;
    
    cout << "[A Toyota's a toyota] -- Expected: true, Actual: " << is_palindrome("A Toyota's a toyota") << endl;
    
    cout << "[A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!] -- Expected: true,  Actual: "
    << is_palindrome("A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!") << endl;

    cout << "[hannah] -- Expected: true, Actual: " << is_palindrome("hannah") << endl;

    cout << "[Apf!)182elsaft] -- Expected: false, Actual: " << is_palindrome("Apf!)182elsaft") << endl;

    std::cout << std::endl;
    return 0;
}

bool is_palindrome(std::string input){
    //###########################################################
    //###########################################################
    transform(input.begin(),input.end(),input.begin(),::toupper);
    auto it = input.begin();
    while(it != input.end()){
        if(*it < 'A' || *it > 'Z'){
            input.erase(it);
        }else{
            it++;
        }
    }
    //###########################################################
    //###########################################################
    deque<char> back {};
    deque<char> front {};

    for(const auto val : input){
        back.push_back(val);
        front.push_front(val);
    }

    if(back == front){
        return true;
    }
    return false;
}
/** @} */