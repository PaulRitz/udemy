#include "Dog.h"

std::string Dog::get_name(){
    return Dog::name;
}
void Dog::set_name(std::string n){
    Dog::name = n;
}

int Dog::get_age(){
    return Dog::age;
}
void Dog::set_age(int n){
    Dog::age = n;
}

int Dog::get_human_years(){
    return age*7;
}

std::string Dog::speak(){
    return "Woof";
}