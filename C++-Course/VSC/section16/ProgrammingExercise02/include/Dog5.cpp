#include "Dog5.h"

Dog5::Dog5(std::string name, int age)
    :Animal1(name, age) {}

std::string Dog5::get_noise(){
    return "Woof";
}
int Dog5::get_num_legs(){
    return 4;
}