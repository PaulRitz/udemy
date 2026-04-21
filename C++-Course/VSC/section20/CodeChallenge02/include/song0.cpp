#include "song0.h"

Song0::Song0(std::string name, std::string artist, int rating)
    :name{name}, artist{artist}, rating{rating} {}

std::ostream &operator<<(std::ostream &out, const Song0 &source){
    out << std::setw(25) << std::left << source.name;
    out << std::setw(30) << std::left << source.artist;
    out << std::left << source.rating;
    return out;
}

std::string Song0::get_name(){
    return this->name;
}
std::string Song0::get_artist(){
    return this->artist;
}
int Song0::get_rating(){
    return this->rating;
}

bool Song0::operator<(const Song0 &rhs) const {
    return this->name < rhs.name;
}
bool Song0::operator==(const Song0 &rhs) const {
    return this->name == rhs.name;
}