/**
 * @file header.h
 * @brief showcase of protected members and their class access behaviour
 */
/**
 * @addtogroup s15_p02
 * @{
 */
#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>

class Base0 {
// note: friends of class have access to all
public:
    int a{0};
    void display();
protected:
    int b{0};
private:
    int c{0};
};

class Derived0: public Base0 {
    // friends of derived have access to only what derived hass access to

    // a will be public
    // b will be protected
    // c will not be accessible
public:
    void access_base_members();
};

#endif
 /** @} */