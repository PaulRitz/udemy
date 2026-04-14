/**
 * @file header.h
 * @brief showcase of the default constructor and how to set it up
 */
/**
 * @addtogroup s13_p07
 * @{
 */
#ifndef _HEADER_H_
#define _HEADER_H_

#include <string>

class Player4 {
private:   
    std::string name;
    int health;
    int xp;
public:
    void set_name(std::string name_val){
        name = name_val;
    }
    std::string get_name(){
        return name;
    }
    Player4(){
        name = "None";
        health = 100;
        xp = 3;
    }
    Player4(std::string name_val, int health_val, int xp_val){
        name = name_val;
        health = health_val;
        xp = xp_val;
    }
};

#endif
/** @} */