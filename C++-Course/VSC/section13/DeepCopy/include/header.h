/**
 * @file header.h
 * @brief showcase of deep copies with the copy constructor
 */
/**
 * @addtogroup s13_p13
 * @{
 */
#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>

class Deep0{
private:
    int* data;
public:
    // methods
    void set_data_value(int d);
    int get_data_value();

    // constructors
    Deep0(int d);

    // copy constructor
    Deep0(const Deep0 &source);

    // destructor
    ~Deep0();
};
#endif
/** @} */