/**
 * @file header.h
 * @brief showcase of the default constructor parameters and how to set them up and its best use
 * @details these default parameters can be used to simplify the use of delegating constructors and reduce
 * the amount of constructors used while overloading the class constructor
 */
/**
 * @addtogroup s13_p10
 * @{
 */
#ifndef _HEADER_H_
#define _HEADER_H_

#include <string>
#include <iostream>

class Player7 {
private:   
    std::string name ;
    int health;
    int xp;
public:
    void set_name(std::string name_val);
    std::string get_name();
    Player7(std::string name_val = "None", int health_val = 0, int xp_val = 0);
    // Player7 (); // will give out a compiler error because the compiler can not decide what constructor to use
};

#endif
/** @} */