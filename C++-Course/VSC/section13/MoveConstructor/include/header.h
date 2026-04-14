/**
 * @file header.h
 * @brief showcase of the move constructor in c++
 */
/**
 * @addtogroup s13_p14
 * @{
 */
#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>

class Move0 {
private:
    // attributes/variables
    int* data;
public:
    // methods
    void set_data_value(int d);
    int get_data_value();
    // constructors
    Move0(int d);
    // copy constructor
    Move0(const Move0 &source);
    // move constructor
    Move0(Move0 &&source) noexcept;
    // destructor
    ~Move0();
};

#endif
/** @} */