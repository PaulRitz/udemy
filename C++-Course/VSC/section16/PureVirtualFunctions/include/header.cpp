#include "header.h"

Shape0::~Shape0() {}
Open_Shape0::~Open_Shape0() {}
Closed_Shape0::~Closed_Shape0() {}
Circle0::~Circle0() {}
Line0::~Line0() {}
Square0::~Square0() {}

void Line0::draw() {
    std::cout << "Drawing a line" << std::endl;
}
void Line0::rotate() {
    std::cout << "Rotating a line" << std::endl;
}

void Square0::draw() {
    std::cout << "Drawing a square" << std::endl;
}
void Square0::rotate() {
    std::cout << "Rotating a square" << std::endl;
}

void Circle0::draw() {
    std::cout << "Drawing a circle" << std::endl;
}
void Circle0::rotate() {
    std::cout << "Rotating a circle" << std::endl;
}