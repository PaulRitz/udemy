/**
 * @file Moneyv2.h
 * @brief programming exercise 03: practice using operator overloading
 */
/**
 * @addtogroup s14_pe03
 * @{
 */
#ifndef _MONEYV2_H_
#define _MONEYV3_H_

#include <iostream>

class Moneyv2{
    /**
     * @brief a custom operator function that returns the sum of two money objects (total value)
     */
    friend Moneyv2 operator+(const Moneyv2 &a, const Moneyv2 &b);
    /**
     * @brief a custom operator function that tells the output stream how to display Moneyv2 objects
     */
    friend std::ostream &operator<<(std::ostream &out, const Moneyv2 &rhs);
private:
    int dollars;
    int cents;
public:
    Moneyv2(int dollars, int cents);
    Moneyv2(int total);

    bool operator==(const Moneyv2 &rhs) const;
    bool operator!=(const Moneyv2 &rhs) const;

    void display();
};

#endif
/** @} */