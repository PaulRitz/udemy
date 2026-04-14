/**
 * @file friend.h
 * @brief showcase of friends in c++
 */
/**
 * @addtogroup s13_p17
 * @{
 */
#ifndef _FRIEND_H_
#define _FRIEND_H_
#include <string>
#include "player11.h"

class Friend_class {
public:
    void set_hero_name(Player11 &p, std::string name);
    void display_player(Player11 &p);
};
#endif
/** @} */