#include "header.h"

int Player10::player_count {0};
int Player10::get_player_count(){
    return player_count;
}

Player10::Player10(std::string name_val, int health_val, int xp_val)
    :name{name_val},health{health_val},xp{xp_val} {
        player_count++;
    }

Player10::Player10(const Player10 &source)
    :Player10{source.name, source.health, source.xp} {}

Player10::~Player10() {
    player_count--;
}

std::string Player10::get_name(){
    return name;
}
int Player10::get_health(){
    return health;
}
int Player10::get_xp(){
    return xp;
}