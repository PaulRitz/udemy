#include "player11.h"
int Player11::player_count{0};

std::string Player11::get_name(){
    return name;
}
int Player11::get_health(){
    return health;
}
int Player11::get_xp(){
    return xp;
}
int Player11::get_num_players(){
    return player_count;
}

Player11::Player11(std::string name_val, int health_val, int xp_val)
    :name{name_val},health{health_val},xp{xp_val} {
        player_count++;
    }
Player11::Player11(const Player11 &source) 
    :Player11(source.name,source.health,source.xp) {}
Player11::~Player11() {
    player_count--;
};

