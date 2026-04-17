/**
 * @file header.h
 * @brief showcase of custom deleters (for smart pointers) in c++
 */
/**
 * @addtogroup s17_p04
 * @{
 */
#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>

class Test3 {
private:
    int data;
public:
    Test3();
    Test3(int data);
    ~Test3();

    int get_data() const;
};
#endif
/** @} */