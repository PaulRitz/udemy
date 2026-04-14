/**
 * @file header.h
 * @brief showcase of the const operator in classes, and showcase of the const correctness
 */
/**
 * @addtogroup s13_p15
 * @{
 */
#ifndef _HEADER_H_
#define _HEADER_H_

#include <string>

class Player9{
private:
    std::string name;
    int health;
    int xp;
public:
    // methods
    // std::string get_name() const;
    void set_name(std::string name_val);

    // Overloaded Constructors
    Player9();
    Player9(std::string name_val);
    Player9(std::string name_val, int health_val, int xp_val); 
};



#endif
/** @} */