/**
 * @file Moneyv1.h
 * @brief programming exercise 02: practice using operator overloading
 */
/**
 * @addtogroup s14_pe02
 * @{
 */
#ifndef _MONEYV1_H_
#define _MONEYV1_H_

#include <iostream>

class Moneyv1{
    friend Moneyv1 operator+(const Moneyv1 &a, const Moneyv1 &b);
private:
    int dollars;
    int cents;
public:
    Moneyv1(int dollars, int cents);
    Moneyv1(int total);

    bool operator==(const Moneyv1 &rhs) const;
    bool operator!=(const Moneyv1 &rhs) const;

    void display();
};

#endif
/** @} */