/**
 * @file player11.h
 * @brief showcase of friends in c++
 */
/**
 * @addtogroup s13_p17
 * @{
 */
#ifndef _PLAYER11_H_
#define _PLAYER11_H_
#include <string>

#include "Other_class.h"
class Friend_class;

class Player11{
    friend void Other_class::display_player(Player11 &p);
    friend void display_player(Player11 &p);
    friend class Friend_class;
private:
    static int player_count;
    std::string name;
    int health;
    int xp;
public:
    std::string get_name();
    int get_health();
    int get_xp();
    
    Player11(std::string name_val = "None", int health_val = 0, int xp_val = 0);
    Player11(const Player11 &source);
    ~Player11();

    static int get_num_players();

};
#endif
/** @} */