/**
 * @file I_printablev0.h
 * @brief code challenge: practice using c++ polymorphism
 */
/**
 * @addtogroup s16_cc
 * @{
 */
#ifndef _I_PRINTABLEV0_H_
#define _I_PRINTABLEV0_H_

#include <iostream>

class I_printablev0 {
    friend std::ostream &operator<<(std::ostream &out, const I_printablev0 &source);
public:
    virtual ~I_printablev0();

    virtual std::ostream &print(std::ostream &out) const = 0;
};

#endif
/** @} */