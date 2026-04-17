#include "Lion1.h"

Lion1::Lion1(const std::string &name, int age)
    :Animal1(name, age) {};



std::string Lion1::get_noise() {
    return "Roar";
}
int Lion1::get_num_legs() {
    return 4;
}