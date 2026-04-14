/**
 * @file header.h
 * @brief showcase of the copy constructor its best practice
 */
/**
 * @addtogroup s13_p11
 * @{
 */
#ifndef _HEADER_H_
#define _HEADER_H_

#include <string>
#include <iostream>

class Player8 {
private:   
    std::string name ;
    int health;
    int xp;
public:
    // methods
    void set_name(std::string name_val);
    std::string get_name();
    int get_health();
    int get_xp();

    // constructors
    Player8(std::string name_val = "None", int health_val = 0, int xp_val = 0);
    // copy constructor
    Player8(const Player8 &soure);
    // destructor
    ~Player8();
};

#endif
/** @} */