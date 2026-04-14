#include "movie.h"

Movie::Movie(std::string name_val, std::string rating_val, int watched_val)
    :name{name_val},rating{rating_val},watched{watched_val} {}

void Movie::set_name(std::string str){
    name = str;
}
void Movie::set_rating(std::string str){
    bool valid_rating {false};
    for(auto val : ratings){
        if(val == str){
            valid_rating = true;
        }
    }
    if(valid_rating){
        rating = str;
        return;
    }
    rating = "[ERROR]: No valid rating provided";
}
void Movie::set_watched(int val){
    watched = val;
}
void Movie::increment_watched(){
    watched++;
}
void Movie::display() const{
    std::cout << "[ name: " << name << " | rating: " << rating << " | times watched: " << watched << " ]" << std::endl; 
}

std::string Movie::get_name() const{
    return name;
}
std::string Movie::get_rating() const{
    return rating;
}
int Movie::get_watched() const{
    return watched;
}

