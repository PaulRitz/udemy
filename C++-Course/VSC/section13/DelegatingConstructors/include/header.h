/**
 * @file header.h
 * @brief showcase of the delegating constructors and how to set them up
 */
/**
 * @addtogroup s13_p09
 * @{
 */
#ifndef _HEADER_H_
#define _HEADER_H_

#include <string>
#include <iostream>

class Player6 {
private:   
    std::string name ;
    int health;
    int xp;
public:
    void set_name(std::string name_val);
    std::string get_name();
    Player6();
    Player6(std::string name_val);
    Player6(std::string name_val, int health_val, int xp_val);
};

#endif
/** @} */