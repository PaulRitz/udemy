/**
 * @file main.cpp
 * @brief showcase of pure virtual functions in c++ polymorphism
 */
/**
 * @addtogroup section16
 * @{
 * @defgroup s16_p06 PureVirtualFunctions
 * @brief showcase of pure virtual functions in c++ polymorphism
 * @}
 */
/**
 * @addtogroup s16_p06
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

#include "../include/header.h"

void screen_refresh(const vector<Shape0*> &shapes);

int main() {
    cout << "=========================" << endl;
    // Example 1

    // Shape0 s;
    // Shape0* p = new Shape0();
    
    // Open_Shape0 s1;
    // Closed_Shape0 s2;
    // ############ pure abstract classes (contain only virtual functions) can not be used to create objects (can only be used as base classes) ############# 
    
    Circle0 circle1;
    circle1.draw();

    // Example 1
    cout << "=========================" << endl;
    // Example 2

    Shape0* ptr1 = new Circle0();
    ptr1->draw();
    ptr1->rotate();

    // Example 2
    cout << "=========================" << endl;
    // Example 3

    Shape0* s1 = new Circle0();
    Shape0* s2 = new Line0();
    Shape0* s3 = new Square0();

    vector<Shape0*> shapes {s1,s2,s3};

    for(const auto p : shapes){
        p->draw();
    }

    screen_refresh(shapes);

    delete s1;
    delete s2;
    delete s3;

    // Example 3
    cout << "=========================" << endl;
    cout << endl;
    return 0;
}

void screen_refresh(const vector<Shape0*> &shapes){
    cout << "--Start Refreshing--" << std::endl;
    for(const auto p : shapes){
        p->draw();
    }
    cout << "--Refreshing Done--" << std::endl;
}

/** @} */