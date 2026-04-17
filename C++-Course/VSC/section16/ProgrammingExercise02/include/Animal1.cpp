#include "Animal1.h"

Animal1::Animal1(const std::string& name, int age)
    :name{name}, age{age} {}

std::string Animal1::get_name(){
    return this->name;
}
int Animal1::get_age(){
    return this->age;
}
