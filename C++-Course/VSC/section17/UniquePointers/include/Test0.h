/**
 * @file Test0.h
 * @brief showcase of the unique smart pointer
 */
/**
 * @addtogroup s17_p01
 * @{
 */
#ifndef _TEST0_H_
#define _TEST0_H_

#include <iostream>

class Test0 {
private:
    int data;
public:

    Test0(int data = 0);
    ~Test0();

    int get_data() const;
};

#endif
/** @} */