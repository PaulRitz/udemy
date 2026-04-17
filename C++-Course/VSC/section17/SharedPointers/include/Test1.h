/**
 * @file Test1.h
 * @brief showcase of the unique smart pointer
 */
/**
 * @addtogroup s17_p01
 * @{
 */
#ifndef _Test1_H_
#define _Test1_H_

#include <iostream>

class Test1 {
private:
    int data;
public:

    Test1(int data = 0);
    ~Test1();

    int get_data() const;
};

#endif
/** @} */