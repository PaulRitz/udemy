/**
 * @file Moneyv0.h
 * @brief programming exercise 01: practice using operator overloading
 */
/**
 * @addtogroup s14_pe01
 * @{
 */
#ifndef _MONEYV0_H_
#define _MONEYV0_H_

#include <iostream>

class Moneyv0{
private:
    int dollars;
    int cents;
public:
    Moneyv0(int dollars, int cents);
    Moneyv0(int total);

    bool operator==(const Moneyv0 &rhs) const;
    bool operator!=(const Moneyv0 &rhs) const;

    void display();
};

#endif
/** @} */