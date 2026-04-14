#include "Dog.h"

std::string Dog2::get_name(){
    return Dog2::name;
}
void Dog2::set_name(std::string n){
    Dog2::name = n;
}

int Dog2::get_age(){
    return Dog2::age;
}
void Dog2::set_age(int n){
    Dog2::age = n;
}

int Dog2::get_human_years(){
    return age*7;
}

std::string Dog2::speak(){
    return "Woof";
}