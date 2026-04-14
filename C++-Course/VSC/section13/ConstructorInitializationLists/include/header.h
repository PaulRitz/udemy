/**
 * @file header.h
 * @brief showcase of the constructor initialization lists and how to set them up
 */
/**
 * @addtogroup s13_p08
 * @{
 */
#ifndef _HEADER_H_
#define _HEADER_H_

#include <string>

class Player5 {
private:   
    std::string name {"XXXXXXXXXXXXX"};
    int health;
    int xp;
public:
    void set_name(std::string name_val);
    std::string get_name();
    Player5();
    Player5(std::string name_val);
    Player5(std::string name_val, int health_val, int xp_val);
};

#endif
/** @} */