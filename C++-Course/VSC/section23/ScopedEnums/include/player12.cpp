#include "player12.h"
int Player12::player_count{0};

std::string Player12::get_name() const {
    return name;
}
void Player12::set_name(std::string name){
    this->name = name;
}

int Player12::get_health() const {
    return health;
}
void Player12::set_health(int health){
    this->health = health;
}

int Player12::get_xp() const{
    return xp;
}
void Player12::set_xp(int xp){
    this->xp = xp;
}

int Player12::get_num_players(){
    return player_count;
}

Player12::Mode Player12::get_mode() const {
    return this->mode;
}
void Player12::set_mode(Player12::Mode mode){
    this->mode = mode;
}

Player12::Direction Player12::get_direction() const {
    return this->direction;
}
void Player12::set_direction(Player12::Direction direction){
    this->direction = direction;
}

Player12::Player12(std::string name_val, Player12::Mode mode,
    Player12::Direction direction, int health_val, int xp_val)
    :name{name_val},mode{mode},direction{direction},health{health_val},xp{xp_val} {
        player_count++;
    }
Player12::Player12(const Player12 &source) 
    :Player12(source.name,source.mode,source.direction,source.health,source.xp) {}
Player12::~Player12() {
    player_count--;
};

// std::ostream &operator<<(std::ostream &out, const Player12 &source){
//     out << "[Player12]:" << std::endl;
//     out << "-- name: " << source.name << std::endl;
//     // out << "-- mode: " << source.mode << std::endl;
//     // out << "-- direction: " << source.direction << std::endl;
//     out << "-- health: " << source.health << std::endl;
//     out << "-- xp: " << source.xp << std::endl;
//     return out;
// }

