/**
 * @file I_printablev1.h
 * @brief showcase of the unique smart pointer
 */
/**
 * @addtogroup s17_p01
 * @{
 */
#ifndef _I_PRINTABLEV1_H_
#define _I_PRINTABLEV1_H_

#include <iostream>

class I_printablev1 {
    friend std::ostream &operator<<(std::ostream &out, const I_printablev1 &source);
public:
    virtual ~I_printablev1();

    virtual std::ostream &print(std::ostream &out) const = 0;
};

#endif
/** @} */