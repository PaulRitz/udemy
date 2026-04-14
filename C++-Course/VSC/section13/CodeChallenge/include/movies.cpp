#include "movies.h"

Movies::Movies(){}
Movies::~Movies(){}

bool Movies::add_movie(std::string name_val, std::string rating_val, int watched_count){
    for(size_t i{}; i < list.size(); i++){
        if(list.at(i).name == name_val){
            std::cout << "[ERROR]: No duplicates allowed" << std::endl;
            return false;
        }
    }
    // movie_count++;
    list.push_back(Movie {name_val, rating_val, watched_count});
    return true;
}
bool Movies::increment_movie(std::string name_val){
    for(size_t i{}; i < list.size(); i++){
        if(list.at(i).name == name_val){
            list.at(i).increment_watched();
            return true;
        }
    }
    std::cout << "[ERROR]: Movie not in the list, therefore can not be incremented" << std::endl;
    return false;
}

void Movies::display(){
    for(size_t i{}; i < list.size(); i++){
        list.at(i).display();
    }
}