#include "header.h"

// std::string Player9::get_name() const {
//     return name;
// }
void Player9::set_name(std::string name_val){
    name = name_val;
}

Player9::Player9()
    :Player9("None",0,0) {}

Player9::Player9(std::string name_val)
    :Player9(name_val,0,0) {}

Player9::Player9(std::string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp{xp_val} {}