/**
 * @file main.cpp
 * @brief code challenge 04: learn using stl queues and stacks
 * @details Section 20
 * Challenge 4 - Stack and Queue Challenge
 * 
 * A Palindrome is a string that reads the same backwards or forwards.
 * Simple examples are:
 * madam
 * bob
 * toot
 * radar
 * 
 * An entire phrase can also be a palindome, for example:
 * A Toyota's a toyota
 * A Santa at NASA
 * A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!
 * 
 * For the purposes of this assignment we will only consider alpha characters and omit all other characters.
 * We will also not be considering case.
 * So,
 * A Santa at Nasa, will be processed as:
 * ASANTAATNASA
 * 
 * A common method to solve this problem is to compare the string to its reverse and
 * if the are equal then it must be a palindrome. But we will use a deque.
 * 
 * I am providing the main driver for you which will automatically run several test cases.
 * You challenge is to write the following function:
 *
 * bool is_palindrome(const std::string &s) {
 * 
 * This function will expect a string and it must determine if that string is a palindrome and return true if it is, or false if it is not.
 *
 * So,
 * 
 * is_palindrome("A Santa at Nasa");   will return true 
 * is_palindrome("Hello");   will return false
 * 
 * Please use a stack and a queue to solve the problem.
 * 
 * If you need a hint, please as in the Q/A.
 * Good luck and have fun!
 * 
 */
/**
 * @addtogroup section20
 * @{
 * @defgroup s20_cc04 CodeChallenge04
 * @brief code challenge 04: learn using stl queues and stacks
 * @details Section 20
 * Challenge 4 - Stack and Queue Challenge
 * 
 * A Palindrome is a string that reads the same backwards or forwards.
 * Simple examples are:
 * madam
 * bob
 * toot
 * radar
 * 
 * An entire phrase can also be a palindome, for example:
 * A Toyota's a toyota
 * A Santa at NASA
 * A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!
 * 
 * For the purposes of this assignment we will only consider alpha characters and omit all other characters.
 * We will also not be considering case.
 * So,
 * A Santa at Nasa, will be processed as:
 * ASANTAATNASA
 * 
 * A common method to solve this problem is to compare the string to its reverse and
 * if the are equal then it must be a palindrome. But we will use a deque.
 * 
 * I am providing the main driver for you which will automatically run several test cases.
 * You challenge is to write the following function:
 *
 * bool is_palindrome(const std::string &s) {
 * 
 * This function will expect a string and it must determine if that string is a palindrome and return true if it is, or false if it is not.
 *
 * So,
 * 
 * is_palindrome("A Santa at Nasa");   will return true 
 * is_palindrome("Hello");   will return false
 * 
 * Please use a stack and a queue to solve the problem.
 * 
 * If you need a hint, please as in the Q/A.
 * Good luck and have fun!
 * @}
 */
/**
 * @ingroup CCs
 * @addtogroup s20_cc04
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
#include <queue>
#include <stack>

const std::string input_file_path = std::string(FILES_IN_DIR);
const std::string output_file_path = std::string(FILES_OUT_DIR);

using namespace std;

bool is_palindrome(string input);

template<typename T>
void display_queue(queue<T> q){
    cout << "[ ";
    while(!q.empty()){
        T val = q.front();
        q.pop();
        cout << val << " ";
    }
    cout << "]" << endl;
}

template<typename T>
void display_stack(stack<T> s){
    cout << "[ ";
    while(!s.empty()){
        T val = s.top();
        s.pop();
        cout << val << " ";
    }
    cout << "]" << endl;
}


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

bool is_palindrome(string input){
    queue<char> q;
    stack<char> s;

    transform(input.begin(), input.end(),input.begin(),::toupper);
    auto it = input.begin();
    while(it != input.end()){
        if(*it < 'A' || *it > 'Z'){
            input.erase(it);
        }else{
        it++;
        }
    }
    //############################################################
    //############################################################

    for(const auto c : input){
        q.push(c);
        s.push(c);
    }

    while(!q.empty() || !s.empty()){
        char q_val {q.front()};
        char s_val {s.top()};

        if(q_val != s_val){
            return false;
        }else{
            q.pop();
            s.pop();
        }
    }
    return true;

}
/** @} */