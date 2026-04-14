/**
 * @file header.h
 * @brief showcase of shallow copies with the copy constructor
 * @details if a pointer (of a class) is copied with a shallow copy constructor the program
 * will crash because if the pointer is copied and the copied pointer runs out of its scope
 * the pointer will be freed from the heap, this means that the original pointer is freed from the 
 * heap as well. Then when the original pointer runs out of scope too, the freed space would bee freed
 * again, this is not possible and the program will crash (with exeption occurred)
 */
/**
 * @addtogroup s13_p12
 * @{
 */
#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>

class Shallow0{
private:
    int* data;
public:
    // methods
    void set_data_value(int d);
    int get_data_value();

    // constructors
    Shallow0(int d);

    // copy constructor
    Shallow0(const Shallow0 &source);

    // destructor
    ~Shallow0();
};
#endif
/** @} */