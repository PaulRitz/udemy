/**
 * @file header.h
 * @brief showcase of static class members in c++
 */
/**
 * @addtogroup s13_p16
 * @{
 */
#ifndef _HEADER_H_
#define _HEADER_H_

#include <string>

class Player10{
private:
    std::string name;
    static int player_count;
    int health;
    int xp;
public:
    std::string get_name();
    int get_health();
    int get_xp();

    static int get_player_count();

    Player10(std::string name_val = "None", int health_val = 0, int xp_val = 0);
    Player10(const Player10 & source);
    ~Player10();
};

#endif
/** @} */